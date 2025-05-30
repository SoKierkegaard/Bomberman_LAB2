// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AEnemigoAereo::AEnemigoAereo()
{
    PrimaryActorTick.bCanEverTick = true;


    // Configuraci�n de movimiento a�reo
    GetCharacterMovement()->GravityScale = 0.0f;  // Desactiva gravedad para que flote
    GetCharacterMovement()->MaxFlySpeed = VelocidadVuelo;
}
void AEnemigoAereo::BeginPlay()
{
    Super::BeginPlay();
    // Almacenar la posici�n inicial al comenzar el juego
    PosicionInicial = GetActorLocation();
}

void AEnemigoAereo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento horizontal autom�tico
    FVector NuevaPosicion = GetActorLocation();
    NuevaPosicion.X += VelocidadVuelo * DeltaTime * DireccionMovimiento;

    // Cambiar direcci�n cuando alcanza el l�mite
    if (FMath::Abs(NuevaPosicion.X - PosicionInicial.X) >= DistanciaMaxima)
    {
        DireccionMovimiento *= -1; // Invierte el movimiento
    }

    SetActorLocation(NuevaPosicion);
}