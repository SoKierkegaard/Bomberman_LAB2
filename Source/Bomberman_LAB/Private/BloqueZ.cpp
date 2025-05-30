// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueZ.h"

ABloqueZ::ABloqueZ()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABloqueZ::BeginPlay()
{
    Super::BeginPlay();

    PosicionInicial = GetActorLocation(); // Guarda la posición inicial al comenzar
}

void ABloqueZ::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector PosicionActual = GetActorLocation();
    float DistanciaRecorrida = PosicionActual.Z - PosicionInicial.Z;

    if (DistanciaRecorrida < DistanciaObjetivo)
    {
		PosicionActual.Z += 50.0f * DeltaTime;// Mueve el bloque hacia arriba
        SetActorLocation(PosicionActual);
    }
}
