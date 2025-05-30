// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueIndestructible.h"
#include "SteelBlock.h"
#include "ConcreteBlock.h"

// Sets default values
ABloqueIndestructible::ABloqueIndestructible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueIndestructible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueIndestructible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABasicBlock* ABloqueIndestructible::GenerateBlock(FString TypeBlock)
{
	FVector Location = GetActorLocation();
	FVector RandomLocation = Location + FVector(FMath::RandRange(-500.f, 500.f), FMath::RandRange(-500.f, 500.f), 0);

	//Select which Block to spawn depending on the passed string
	if (TypeBlock.Equals("Acero")) {
		return GetWorld()->SpawnActor<ASteelBlock>
			(ASteelBlock::StaticClass(),RandomLocation, FRotator(0, 0, 0));
	}
	else if (TypeBlock.Equals("Concreto")) {
		return GetWorld()->SpawnActor<AConcreteBlock>
			(AConcreteBlock::StaticClass(), RandomLocation, FRotator(0, 0, 0));
	}
	else return nullptr; //Return null if the string isn't valid
}
