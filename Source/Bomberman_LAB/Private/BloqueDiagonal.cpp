// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueDiagonal.h"

ABloqueDiagonal::ABloqueDiagonal()
{
    PrimaryActorTick.bCanEverTick = true; // Habilita el Tick
}

void ABloqueDiagonal::BeginPlay()
{
    Super::BeginPlay();
    PosicionInicial = GetActorLocation(); // Guardar posición inicial
}

void ABloqueDiagonal::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector PosicionActual = GetActorLocation();

    // Cálculo de distancia desde la posición inicial
    float DistanciaX = PosicionActual.X - PosicionInicial.X;
    float DistanciaZ = PosicionActual.Z - PosicionInicial.Z;

    float LimiteX = 1000.0f;
    float LimiteZ = 500.0f;

    // Cambio de dirección si alcanza los límites relativos
    if (DistanciaX >= LimiteX || DistanciaZ >= LimiteZ)
    {
        bMoviendoArriba = false;
    }
    else if (DistanciaX <= 0 || DistanciaZ <= 0)
    {
        bMoviendoArriba = true;
    }

    // Movimiento en diagonal según la dirección
    float Velocidad = 50.0f * DeltaTime;
    PosicionActual.X += bMoviendoArriba ? Velocidad : -Velocidad;
    PosicionActual.Z += bMoviendoArriba ? Velocidad : -Velocidad;

    SetActorLocation(PosicionActual);
}

