// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class R6S_API AGun : public AActor
{
	GENERATED_BODY()

public:
	// 총알 한발 데미지 양
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int DamagePerBullet;
	
public:	
	// Sets default values for this actor's properties
	AGun();
	
	/** [Client+Server] 총 발사 함수 */
	virtual void Fire();
	

	UFUNCTION(BlueprintImplementableEvent)
	void OnFire();


	UFUNCTION(Server, Reliable)
	void ServerFire();

	UFUNCTION(BlueprintImplementableEvent)
	void OnServerFire();

	/* 총알이 발사될 위치 반환 */
	UFUNCTION(BlueprintNativeEvent)
	FVector GetMuzzleLocation() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
