// Fill out your copyright notice in the Description page of Project Settings.


#include "PrototypeConcrete.h"

// Sets default values
APrototypeConcrete::APrototypeConcrete()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrototypeConcrete::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APrototypeConcrete::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* APrototypeConcrete::Clone() const
{
	FVector SpawnLocation = GetActorLocation() + FVector(100, 0, 0);
	FRotator SpawnRotation = GetActorRotation();

	// Spawn a new actor of the same class
	APrototypeConcrete* ClonedActor = GetWorld()->SpawnActor<APrototypeConcrete>(
		GetClass(), SpawnLocation, SpawnRotation
	);

	return ClonedActor;
}
