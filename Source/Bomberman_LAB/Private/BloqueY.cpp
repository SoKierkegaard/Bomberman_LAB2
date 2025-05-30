// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueY.h"

ABloqueY::ABloqueY()
{
    PrimaryActorTick.bCanEverTick = true; // Habilitar la función Tick() 

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void ABloqueY::BeginPlay()
{
    Super::BeginPlay();
    PosicionInicial = GetActorLocation(); // Guarda la posición inicial al comenzar
}

void ABloqueY::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector PosicionActual = GetActorLocation();
    float DistanciaRecorrida = PosicionActual.Y - PosicionInicial.Y;

    if (DistanciaRecorrida < DistanciaObjetivo)
    {
        PosicionActual.Y+= 50.0f * DeltaTime;
        SetActorLocation(PosicionActual);
    }
}
