// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "BaseCharacter.h"
#include "DrawDebugHelpers.h"

// Sets default values
AGun::AGun()
{
	bReplicates = true;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AGun::Fire()
{
	// Muzzle 위치에서 발사 (Linetrace) 및 발사 애니메이션 재생
	if (!GetOwner()->HasAuthority())
	{
		ServerFire();
	}

	UE_LOG(LogTemp, Log, TEXT("Im Fire"));

	OnFire();
}

FVector AGun::GetMuzzleLocation_Implementation() const
{
	return GetActorLocation();
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
	UE_LOG(LogTemp, Log, TEXT("Im ServerFire"));

	// 실제 발사할 시작 위치
	FVector StartFireLocation; // Line Trace 시작 위치
	FVector EndFireLocation; // Line Trace 끝 위치
	FVector FireDirection;
	if (GetOwner() != nullptr)
	{
		FVector EyeLocation; // 현재 Eye(BaseCharacter 클래스의 경우 Actor Location + Eye) 위치
		FRotator EyeRotation;
		GetOwner()->GetActorEyesViewPoint(EyeLocation, EyeRotation);
		// 총기를 가지고 있는 엑터의 GetActorEyesViewPoint 를 사용해서 엑터의 눈의 위치와 바라보고 있는 방향 정보를 가지고 라인트레이스 시작지점과 끝지점을 정해줌.
		StartFireLocation = EyeLocation;

		FireDirection = EyeRotation.Vector();
		EndFireLocation = StartFireLocation + FireDirection  * 10000;
		// 끝점 = 시작점 + 발사 방향 벡터* 사정거리
	}

	FHitResult Hit;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this); // 발사하는 Gun 엑터 제외
	QueryParams.AddIgnoredActor(GetOwner()); // 발사하는 Gun 엑터를 가지고 있는 캐릭터도 제외
	if (GetWorld()->LineTraceSingleByObjectType(Hit, StartFireLocation, EndFireLocation, FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn), QueryParams))
	{
		DrawDebugLine(GetWorld(), StartFireLocation, EndFireLocation, FColor::Red, false,10.f, SDPG_World, 1.f);
		DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 25.f, 12, FColor::Green, false, 10.f, SDPG_World, 1.f);

		UE_LOG(LogTemp, Log, TEXT("누군가 맞음! 맞은 놈 -> %s"), *Hit.Actor->GetName());

		ABaseCharacter* BaseCharacter = Cast<ABaseCharacter>(Hit.Actor);
		if (BaseCharacter != nullptr)
		{
			//BaseCharacter->Damage(20);
			FPointDamageEvent DamageEvent; // 한 점에 데미지
			FRadialDamageEvent; // 원형데미지(ex 수류탄)

			DamageEvent.DamageTypeClass = nullptr;
			DamageEvent.Damage = DamagePerBullet;
			DamageEvent.HitInfo = Hit;
			DamageEvent.ShotDirection = FireDirection;

			BaseCharacter->TakeDamage(DamagePerBullet,DamageEvent, BaseCharacter->GetController(), BaseCharacter);
			UE_LOG(LogTemp, Log, TEXT("맞은 사람 현재 체력 %d"), BaseCharacter->GetCurrentHealth());
		}
	}
	else
	{
		DrawDebugLine(GetWorld(), StartFireLocation, EndFireLocation, FColor::Blue, false,10.f, SDPG_World, 1.f);
	}

	OnServerFire();
}
