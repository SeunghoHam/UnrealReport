// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Gun.h"
#include "BaseCharacter.generated.h"

UCLASS()
class R6S_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGun> EquipGunType;

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	void Turn(float AxisValue);

	void LookUp(float AxisValue);

	void PressedFire();

	
	void ReleasedFire();


	UFUNCTION(BlueprintImplementableEvent)
	void OnPressedFire();
	
protected:
	UPROPERTY(BlueprintReadWrite, Replicated) // Replicated = 이 변수를 서버-클라이언트 값을 동기화 하는 변수로 쓰겟다하는것
	AActor* WeaponActor;
};
