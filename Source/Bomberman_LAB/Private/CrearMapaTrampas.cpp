// Fill out your copyright notice in the Description page of Project Settings.


#include "CrearMapaTrampas.h"

// Sets default values
ACrearMapaTrampas::ACrearMapaTrampas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACrearMapaTrampas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACrearMapaTrampas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACrearMapaTrampas::CrearMapaTrampas()
{
	//Spawneamos los actores de las trampas en las casillas marcadas como trampa
	for (int i = 0; i < aTrampas.Num(); i++)
	{
		for (int j = 0; j < aTrampas[i].Num(); j++)
		{
			if (aTrampas[i][j] == 1) // Si la casilla es una trampa
			{
				FVector SpawnLocation = FVector(i * 300, j * 300, 0); // Cambia el valor de 100 por el tamaño de tu celda
				GetWorld()->SpawnActor<ABomb>(ABomb::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			}
		}
	}

}

