// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxHealth = 100;
	CurrentHealth = MaxHealth;
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	if (HasAuthority())
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = this;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		WeaponActor = GetWorld()->SpawnActor(EquipGunType, &FTransform::Identity, SpawnParameters);
	}

	Super::BeginPlay();

	if (HasAuthority())
	{
		SetupWeapon();
	}

	//if (IsLocallyControlled())
	//{
	//	bUseControllerRotationPitch = true;
	//}
	//else
	//{
	//	bUseControllerRotationPitch = false;
	//}
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ABaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ABaseCharacter::MoveRight);

	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ABaseCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ABaseCharacter::LookUp);

	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &ABaseCharacter::PressedFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Released, this, &ABaseCharacter::ReleasedFire);

	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Pressed, this, &ABaseCharacter::PressedReload);
}

void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABaseCharacter, WeaponActor);
	DOREPLIFETIME(ABaseCharacter, IsDead);
}

void ABaseCharacter::MoveForward(float AxisValue)
{
	FRotator ControlRotation = FRotator(0, GetControlRotation().Yaw, 0);
	FVector WorldDirection = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::X);

	AddMovementInput(WorldDirection, AxisValue);
}

void ABaseCharacter::MoveRight(float AxisValue)
{
	FRotator ControlRotation = FRotator(0, GetControlRotation().Yaw, 0);
	FVector WorldDirection = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(WorldDirection, AxisValue);
}

void ABaseCharacter::Turn(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void ABaseCharacter::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void ABaseCharacter::PressedFire()
{
	// ????????? ?????? ???????????? ????????????
	if (IsDead)
		return;

	AGun* Gun = Cast<AGun>(WeaponActor);
	if (Gun)
	{
		Gun->Fire();
	}

	OnPressedFire();
}

void ABaseCharacter::ReleasedFire()
{
}

void ABaseCharacter::PressedReload()
{
	// ????????? ?????? ????????? ??????
	if (IsDead)
		return;

	AGun* Gun = Cast<AGun>(WeaponActor);
	if (Gun)
	{
		Gun->Reload();
	}
}

void ABaseCharacter::OnRep_WeaponActor()
{
	SetupWeapon();
}

void ABaseCharacter::SetupWeapon()
{
	OnSetupWeapon();
}

float ABaseCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	CurrentHealth -= DamageAmount;

	if (CurrentHealth <= 0)
	{
		IsDead = true;
		Die();
	}

	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void ABaseCharacter::OnRep_IsDead()
{
	Die();
}

void ABaseCharacter::Die()
{
	OnDie();

	//Destroy();
}
