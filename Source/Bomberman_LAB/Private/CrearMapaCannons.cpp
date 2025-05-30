// Fill out your copyright notice in the Description page of Project Settings.


#include "CrearMapaCannons.h"

// Sets default values
ACrearMapaCannons::ACrearMapaCannons()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACrearMapaCannons::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACrearMapaCannons::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACrearMapaCannons::CrearMapaCannons()
{
	for (int i = 0; i < aTrampas.Num(); i++)
	{
		for (int j = 0; j < aTrampas[i].Num(); j++)
		{
			if (aTrampas[i][j] == 1) // Si la casilla es una trampa
			{
				FVector SpawnLocation = FVector(i * 300, j * 300, 0); // Cambia el valor de 100 por el tamaño de tu celda
				GetWorld()->SpawnActor<ACannon>(ACannon::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			}
		}
	}
}

