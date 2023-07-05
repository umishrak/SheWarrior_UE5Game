// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "SheWarrior/SheWarrior.h"

// Creating Function Macro
#define THIRTY 30

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Begin Play called!"));

	// Creates on screen Debug message (Blueprints' F String Function)
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Magenta, FString("Item OnScreen Message!"));
	}

	UWorld* World = GetWorld();

	FVector Location = GetActorLocation();

	// Using defined Macro
	DRAW_SPHERE(Location)

}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

	if (GEngine)
	{
		// Creating FString Object
		FString Name = GetName();
		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
		GEngine->AddOnScreenDebugMessage(2, 60.f, FColor::Cyan, Message);

		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name);
	}

}

