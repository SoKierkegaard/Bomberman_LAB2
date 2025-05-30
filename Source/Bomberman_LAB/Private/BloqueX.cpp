// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueX.h"

ABloqueX::ABloqueX()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABloqueX::BeginPlay()
{
    Super::BeginPlay();

    PosicionInicial = GetActorLocation(); // Guarda la posición inicial al comenzar
}

void ABloqueX::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector PosicionActual = GetActorLocation();
    float DistanciaRecorrida = PosicionActual.X - PosicionInicial.X;

    if (DistanciaRecorrida < DistanciaObjetivo)
    {
        PosicionActual.X += 50.0f * DeltaTime;
        SetActorLocation(PosicionActual);
    }
}

