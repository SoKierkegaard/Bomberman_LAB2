// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
    PrimaryActorTick.bCanEverTick = true; // Habilitar Tick
    GetCharacterMovement()->GravityScale = 0.0f;
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    // Configuración de movimiento terrestre
    // Configuración inicial
    VelocidadMovimiento = 100.0f; // Velocidad en unidades por segundo
    DistanciaMaxima = 500.0f; // Distancia máxima desde la posición inicial
    bAvanzandoHaciaLimite = true; // El enemigo comienza avanzando hacia el límite
}

void AEnemigoTerrestre::BeginPlay()
{
    Super::BeginPlay();
    // Guardar la posición inicial
    PosicionInicial = GetActorLocation();
}

void AEnemigoTerrestre::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Mover al enemigo
    MoverEnemigo(DeltaTime);
}

void AEnemigoTerrestre::MoverEnemigo(float DeltaTime)
{
    // Obtener la posición actual
    FVector PosicionActual = GetActorLocation();

    // Calcular la nueva posición
    float NuevaX = PosicionActual.X;

    if (bAvanzandoHaciaLimite)
    {
        // Avanzar hacia el límite
        NuevaX += VelocidadMovimiento * DeltaTime;

        // Verificar si alcanzó el límite
        if (FMath::Abs(NuevaX - PosicionInicial.X) >= DistanciaMaxima)
        {
            bAvanzandoHaciaLimite = false; // Cambiar dirección para regresar
        }
    }
    else
    {
        // Regresar a la posición inicial
        NuevaX -= VelocidadMovimiento * DeltaTime;

        // Verificar si regresó a la posición inicial
        if (NuevaX <= PosicionInicial.X)
        {
            NuevaX = PosicionInicial.X; // Asegurarse de que esté exactamente en la posición inicial
            bAvanzandoHaciaLimite = true; // Cambiar dirección para avanzar hacia el límite
        }
    }

    // Mantener al enemigo en la altura del suelo
    FVector NuevaPosicion(NuevaX, PosicionActual.Y, PosicionActual.Z);

    // Actualizar la posición
    SetActorLocation(NuevaPosicion);
}
