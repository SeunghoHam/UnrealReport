// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AGun::Fire()
{
	// Muzzle ��ġ���� �߻�( linetrace) �ִϸ��̼� ���
	if (!GetOwner()->HasAuthority())
	{
		ServerFire();
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Im Fire"));
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
	UE_LOG(LogTemp, Warning, TEXT("Im Server Fire"));
}