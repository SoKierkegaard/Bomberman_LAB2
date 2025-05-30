// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueDestructible.h"
#include "WoodBlock.h"
#include "BrickBlock.h"

// Sets default values
ABloqueDestructible::ABloqueDestructible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueDestructible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueDestructible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABasicBlock* ABloqueDestructible::GenerateBlock(FString TypeBlock)  
{  
	FVector Location = GetActorLocation();
	FVector RandomLocation = Location + FVector(FMath::RandRange(-500.f, 500.f), FMath::RandRange(-500.f, 500.f), 0);

	// Select which block to spawn depending on the passed string  
	if (TypeBlock.Equals("Madera")) {  
		return GetWorld()->SpawnActor<AWoodBlock>
			(AWoodBlock::StaticClass(), RandomLocation, FRotator(0, 0, 0));
	}  
	else if (TypeBlock.Equals("Ladrillo")) {  
		return GetWorld()->SpawnActor<ABrickBlock>
			(ABrickBlock::StaticClass(), RandomLocation, FRotator(0, 0, 0));
	}  
	else return nullptr; // Return null if the string isn't valid  
}
