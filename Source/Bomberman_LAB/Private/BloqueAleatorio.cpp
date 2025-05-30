// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAleatorio.h"

ABloqueAleatorio::ABloqueAleatorio()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

void ABloqueAleatorio::BeginPlay()
{
    Super::BeginPlay();
    // Define el rango de movimiento para X e Y
    float MinX = 1500.f, MaxX = 3000.f;
    float MinY = 1500.f, MaxY = 3000.f;

    // Establece la posición objetivo inicial en X, Y aleatorios, y la misma Z
    TargetLocation = FVector(FMath::RandRange(MinX, MaxX), FMath::RandRange(MinY, MaxY),0.f);
}

void ABloqueAleatorio::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	// Obtener la posición actual del actor
    FVector CurrentLocation = GetActorLocation();

    // Verificar si ya llegó al objetivo
    if (FVector::Dist(CurrentLocation, TargetLocation) < 10.f)
    {
        // Genera un nuevo punto objetivo en X/Y, pero mantiene la misma Z
        float MinX = 3000.f, MaxX = 5000.f;
        float MinY = 0.f, MaxY = 3000.f;
        TargetLocation = FVector(FMath::RandRange(MinX, MaxX), FMath::RandRange(MinY, MaxY),0.f);
    }
    FVector NewLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, 1.0f); // Velocidad de 1.0f
    SetActorLocation(NewLocation);
}
