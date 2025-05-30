// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueGenerador.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "BloqueConcreto.h"

ABloqueGenerador::ABloqueGenerador()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABloqueGenerador::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueGenerador::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0); // Obtiene el Pawn del jugador
    if (PlayerPawn)
    {
        FVector PlayerLocation = PlayerPawn->GetActorLocation(); // Obtiene la ubicaci�n del Pawn
        FVector BlockLocation = GetActorLocation(); // Obtiene la ubicaci�n del bloque

        float Distance = FVector::Dist(PlayerLocation, BlockLocation); // Calcula la distancia entre el jugador y el bloque

        if (Distance < 200.f && !bBlocksSpawned) // Si la distancia es menor a 200 unidades
        {
            SpawnRandBloques(); // Genera los bloques
            bBlocksSpawned = true;
        }
    }
}

void ABloqueGenerador::SpawnRandBloques()
{
	int bloquesGenerados = 20;// N�mero de bloques a generar

    // Definir un volumen con l�mites aleatorios
    FVector VolumenMin = GetActorLocation() + FVector(-500, -500 , 0);  // Esquinas del volumen (m�nima)
    FVector VolumenMax = GetActorLocation() + FVector(500, 500, 500);   // Esquinas del volumen (m�xima)

	for (int i = 0; i < bloquesGenerados; i++)
	{
        // Generar una posici�n aleatoria dentro del volumen
        float X = FMath::RandRange(VolumenMin.X, VolumenMax.X);
        float Y = FMath::RandRange(VolumenMin.Y, VolumenMax.Y);
        float Z = FMath::RandRange(VolumenMin.Z, VolumenMax.Z);
		FVector SpawnLocation = FVector(X, Y, Z);

		GetWorld()->SpawnActor<ABloqueConcreto>(SpawnLocation, FRotator::ZeroRotator);
	}
}