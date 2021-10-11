// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "BaseCharacter.h"
#include "DrawDebugHelpers.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AGun::AGun()
{
	bReplicates = true;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DamagePerBullet = 0;
	MaxAmmoPerMagazine = 30;
	InitialAmmoCount = 150;
	CurrentLeftAmmo = InitialAmmoCount;
	LeftAmmoInMagazine = MaxAmmoPerMagazine;

	bIsStartedReload = false;
}

bool AGun::CanFire() const
{
	return LeftAmmoInMagazine > 0 && !IsStartedReload();
}

void AGun::Fire()
{
	// 발사 불가능 한 경우 무시
	if (CanFire() == false)
		return;

	// 싱글이 아닌 경우, Fire 동기화!
	if (GetNetMode() != ENetMode::NM_Standalone)
	{
		APawn* Pawn = Cast<APawn>(GetOwner());
		if (Pawn)
		{
			// 총의 Owner 가 Locally Controlled 인 경우만 Fire 동기화!!!
			if (Pawn->IsLocallyControlled())
			{
				// 서버에서 호출한 경우 모든 클라에게 동기화
				if (Pawn->HasAuthority())
				{
					MulticastFire(true);
				}
				// 클라에서 호출한 경우 서버로 동기화
				else
				{
					ServerFire();
				}
			}
		}
		else
		{
			// 총기의 Owner 가 없거나, Pawn 이 아닌 경우...
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Im Fire"));

	OnFire();

	if (HasAuthority())
	{
		// 실제 발사할 시작 위치
		FVector StartFireLocation; // Line Trace 시작 위치
		FVector EndFireLocation; // Line Trace 끝 위치
		FVector FireDirection;

		if (GetOwner() != nullptr)
		{
			FVector EyeLocation; // 현재 Eye(Actor Location + APawn::BaseEyeHeight) 위치
			FRotator EyeRotation; // 현재 카메라가 보고있는 방향
			GetOwner()->GetActorEyesViewPoint(EyeLocation, EyeRotation);

			StartFireLocation = EyeLocation;

			FireDirection = EyeRotation.Vector();
			EndFireLocation = StartFireLocation + FireDirection * 10000;
		}

		FHitResult Hit;
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this); // 발사하는 Gun 엑터 제외
		QueryParams.AddIgnoredActor(GetOwner()); // 발사하는 Gun 엑터를 가지고있는 캐릭터도 제외
		if (GetWorld()->LineTraceSingleByObjectType(Hit, StartFireLocation, EndFireLocation, FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn), QueryParams))
		{
			DrawDebugLine(GetWorld(), StartFireLocation, EndFireLocation, FColor::Red, false, 10.f, SDPG_World, 1.f);
			DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 10.f, 12, FColor::Green, false, 10.f, SDPG_World, 1.f);

			UE_LOG(LogTemp, Log, TEXT("누군가 맞음! 맞은 놈 -> %s"), *Hit.Actor->GetName());

			ABaseCharacter* BaseCharacter = Cast<ABaseCharacter>(Hit.Actor);
			if (BaseCharacter != nullptr)
			{
				FPointDamageEvent DamageEvent;
				DamageEvent.DamageTypeClass = nullptr;
				DamageEvent.Damage = DamagePerBullet;
				DamageEvent.HitInfo = Hit;
				DamageEvent.ShotDirection = FireDirection;

				BaseCharacter->TakeDamage(DamagePerBullet, DamageEvent, BaseCharacter->GetController(), BaseCharacter);

				UE_LOG(LogTemp, Log, TEXT("맞은 사람 현재 체력 %d"), BaseCharacter->GetCurrentHealth());
			}
		}
		else
		{
			DrawDebugLine(GetWorld(), StartFireLocation, EndFireLocation, FColor::Blue, false, 10.f, SDPG_World, 1.f);
		}
	}
}

bool AGun::CanReload() const
{
	return
		// 남은 탄 없으면 리로딩 불가
		CurrentLeftAmmo > 0 &&
		// 이미 리로딩 중인 상태이면은 리로딩 불가
		IsStartedReload() == false;
}

void AGun::Reload()
{
	if (CanReload() == false)
		return;

	StartReload();
}

void AGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGun, CurrentLeftAmmo);
	DOREPLIFETIME(AGun, LeftAmmoInMagazine);
}

void AGun::PostInitProperties()
{
	Super::PostInitProperties();

	CurrentLeftAmmo = InitialAmmoCount;
}

#if WITH_EDITOR
void AGun::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == TEXT("InitialAmmoCount"))
	{
		CurrentLeftAmmo = InitialAmmoCount;
	}
}
#endif

FVector AGun::GetMuzzleLocation_Implementation() const
{
	return GetActorLocation();
}

void AGun::StartReload()
{
	UE_LOG(LogTemp, Log, TEXT("Start Reload!"));

	bIsStartedReload = true;

	OnStartReload();
}

bool AGun::IsStartedReload_Implementation() const
{
	return bIsStartedReload;
}

void AGun::EndReload()
{
	if (IsStartedReload() == false)
		return;

	UE_LOG(LogTemp, Log, TEXT("End Reload!"));

	const int UsedAmmoInMagazine = MaxAmmoPerMagazine - LeftAmmoInMagazine;
	CurrentLeftAmmo -= UsedAmmoInMagazine;
	LeftAmmoInMagazine = MaxAmmoPerMagazine;
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::ServerFire_Implementation()
{
	Fire();

	MulticastFire(false);
}

void AGun::MulticastFire_Implementation(bool NeedIncludeAutonomousProxy)
{
	if (HasAuthority() == false)
	{
		if (NeedIncludeAutonomousProxy)
		{
			Fire();
		}
		else
		{
			if (GetOwner()->GetLocalRole() == ROLE_SimulatedProxy)
			{
				Fire();
			}
		}
	}
}
