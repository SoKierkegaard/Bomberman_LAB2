// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AEnemigoAereo::AEnemigoAereo()
{
    PrimaryActorTick.bCanEverTick = true;


    // Configuración de movimiento aéreo
    GetCharacterMovement()->GravityScale = 0.0f;  // Desactiva gravedad para que flote
    GetCharacterMovement()->MaxFlySpeed = VelocidadVuelo;
}
void AEnemigoAereo::BeginPlay()
{
    Super::BeginPlay();
    // Almacenar la posición inicial al comenzar el juego
    PosicionInicial = GetActorLocation();
}

void AEnemigoAereo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento horizontal automático
    FVector NuevaPosicion = GetActorLocation();
    NuevaPosicion.X += VelocidadVuelo * DeltaTime * DireccionMovimiento;

    // Cambiar dirección cuando alcanza el límite
    if (FMath::Abs(NuevaPosicion.X - PosicionInicial.X) >= DistanciaMaxima)
    {
        DireccionMovimiento *= -1; // Invierte el movimiento
    }

    SetActorLocation(NuevaPosicion);
}