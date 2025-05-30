// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoSubterraneo.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"

AEnemigoSubterraneo::AEnemigoSubterraneo()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    TargetLocation = FVector(0.f, 0.f, 0.f);
    GetCharacterMovement()->GravityScale = 0.0f;
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    bOnTop = false;
    TimeTop = 0.1f; // Tiempo en el que el enemigo permanece arriba
    TimeatTop = 0.0f; // Temporizador de espera
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaEnemigo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

    if (ObjetoMallaEnemigo.Succeeded())
    {
        MallaEnemigo->SetStaticMesh(ObjetoMallaEnemigo.Object);
    }
}

// Called when the game starts or when spawned
void AEnemigoSubterraneo::BeginPlay()
{
    Super::BeginPlay();
    // Define el rango de movimiento para X e Y
    float MinX = 3000.f, MaxX = 5000.f;
    float MinY = 0.f, MaxY = 3000.f;

    // Establece la posición objetivo inicial en X, Y aleatorios, y la misma Z
    TargetLocation = FVector(FMath::RandRange(MinX, MaxX), FMath::RandRange(MinY, MaxY), GetActorLocation().Z);

    // Guarda la posición Z original para usarla más tarde
    OriginalZ = GetActorLocation().Z;
}

// Called every frame
void AEnemigoSubterraneo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector CurrentLocation = GetActorLocation();

    // Verificar si ya llegó al objetivo
    if (FVector::Dist(CurrentLocation, TargetLocation) < 10.f)
    {
        if (!bOnTop)
        {
            // Si no está subiendo, comienza a subir
            bOnTop = true;
            TargetLocation.Z = OriginalZ + 100.0f;  // Sube 100 unidades en Z
        }
        else
        {
            // Si ya está arriba, espera un tiempo y luego baja
            TimeatTop += DeltaTime;
            if (TimeatTop >= TimeTop)
            {
                // Si el enemigo ha estado el tiempo suficiente arriba, baja
                bOnTop = false;
                TargetLocation.Z = OriginalZ; // Regresa a la altura original en Z
                TimeatTop = 0.0f; // Reinicia el temporizador

                // Genera un nuevo punto objetivo en X/Y, pero mantiene la misma Z
                float MinX = 3000.f, MaxX = 5000.f;
                float MinY = 0.f, MaxY = 3000.f;
                TargetLocation = FVector(FMath::RandRange(MinX, MaxX), FMath::RandRange(MinY, MaxY), OriginalZ);
            }
        }
    }

    // Mover al enemigo hacia el punto objetivo
    FVector NewLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, 1.0f); // Velocidad de 1.0f
    SetActorLocation(NewLocation);
}