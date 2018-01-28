// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SeatComponent.generated.h"


UCLASS(Blueprintable, BlueprintType)
class VILLAGESGOLDEDITION_API USeatComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USeatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(EditAnywhere)
		FVector CharacterPosOffset;
	UPROPERTY(EditAnywhere)
		FString AnimationMode;
	
};
