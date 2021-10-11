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
	
	// 탄창 당 최대 탄 개수
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int MaxAmmoPerMagazine;

	// 처음 시작 시 가지게 될 탄 개수
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int InitialAmmoCount;

protected:
	// 현재 가지고 있는 남은 탄 개수
	UPROPERTY(Replicated, VisibleDefaultsOnly, BlueprintReadOnly)
	int CurrentLeftAmmo;

	// 현재 탄창에 남은 총알 개수
	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadOnly)
	int LeftAmmoInMagazine;

	// 현재 리로딩 중인 상태인지
	UPROPERTY(BlueprintReadOnly)
	bool bIsStartedReload;

public:	
	AGun();

	/** 현재 발사 가능한지 체크하는 함수 */
	UFUNCTION(BlueprintCallable)
	virtual bool CanFire() const;
	
	/** [Client+Server] 총 발사 함수 */
	virtual void Fire();

	/* 현재 리로딩 가능한 지 체크하는 함수 */
	UFUNCTION(BlueprintCallable)
	virtual bool CanReload() const;

	/* 이 총을 재장전 하는 함수 */
	virtual void Reload();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsStartedReload() const;

	virtual void EndReload();

	/* 총알이 발사될 위치 반환 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FVector GetMuzzleLocation() const;

	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostInitProperties() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnFire();

	// 다른 클라에게 동기화
	UFUNCTION(Server, Reliable)
	void ServerFire();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(bool NeedIncludeAutonomousProxy);

	virtual void StartReload();

	UFUNCTION(BlueprintImplementableEvent)
	void OnStartReload();

	virtual void BeginPlay() override;
};
