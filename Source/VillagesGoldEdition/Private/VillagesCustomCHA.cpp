// Fill out your copyright notice in the Description page of Project Settings.

#include "VillagesCustomCHA.h"


// Sets default values
AVillagesCustomCHA::AVillagesCustomCHA()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVillagesCustomCHA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVillagesCustomCHA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVillagesCustomCHA::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AVillagesCustomCHA::FellOutOfWorld(const UDamageType & dmgType)
{
	RedirectFellOutOfWorld();
}

