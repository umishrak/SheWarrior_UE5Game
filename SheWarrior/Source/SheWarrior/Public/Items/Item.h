// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class SHEWARRIOR_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	float RunningTime;

	UPROPERTY(EditAnywhere)
	float Amplitude = 0.25f;

	UPROPERTY(EditAnywhere)
	float TimeConstant = 5.f;

};
