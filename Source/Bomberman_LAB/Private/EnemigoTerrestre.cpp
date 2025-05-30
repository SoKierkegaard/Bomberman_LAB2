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
    // Configuraci�n de movimiento terrestre
    // Configuraci�n inicial
    VelocidadMovimiento = 100.0f; // Velocidad en unidades por segundo
    DistanciaMaxima = 500.0f; // Distancia m�xima desde la posici�n inicial
    bAvanzandoHaciaLimite = true; // El enemigo comienza avanzando hacia el l�mite
}

void AEnemigoTerrestre::BeginPlay()
{
    Super::BeginPlay();
    // Guardar la posici�n inicial
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
    // Obtener la posici�n actual
    FVector PosicionActual = GetActorLocation();

    // Calcular la nueva posici�n
    float NuevaX = PosicionActual.X;

    if (bAvanzandoHaciaLimite)
    {
        // Avanzar hacia el l�mite
        NuevaX += VelocidadMovimiento * DeltaTime;

        // Verificar si alcanz� el l�mite
        if (FMath::Abs(NuevaX - PosicionInicial.X) >= DistanciaMaxima)
        {
            bAvanzandoHaciaLimite = false; // Cambiar direcci�n para regresar
        }
    }
    else
    {
        // Regresar a la posici�n inicial
        NuevaX -= VelocidadMovimiento * DeltaTime;

        // Verificar si regres� a la posici�n inicial
        if (NuevaX <= PosicionInicial.X)
        {
            NuevaX = PosicionInicial.X; // Asegurarse de que est� exactamente en la posici�n inicial
            bAvanzandoHaciaLimite = true; // Cambiar direcci�n para avanzar hacia el l�mite
        }
    }

    // Mantener al enemigo en la altura del suelo
    FVector NuevaPosicion(NuevaX, PosicionActual.Y, PosicionActual.Z);

    // Actualizar la posici�n
    SetActorLocation(NuevaPosicion);
}
