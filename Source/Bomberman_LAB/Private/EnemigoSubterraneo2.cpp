// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoSubterraneo2.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include <Kismet/GameplayStatics.h>

AEnemigoSubterraneo2::AEnemigoSubterraneo2()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    TargetLocation = FVector(0.f, 0.f, 0.f);
    GetCharacterMovement()->GravityScale = 0.0f;
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AEnemigoSubterraneo2::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AEnemigoSubterraneo2::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);// Obtiene el Pawn del jugador

	FVector PlayerLocation = PlayerPawn->GetActorLocation();// Obtiene la ubicación del Pawn del jugador
    PlayerLocation.Z = -50.f;

	FVector CurrentLocation = GetActorLocation();// Obtiene la ubicación actual del enemigo

    // Verificar si ya llegó al objetivo
    if (FVector::Dist(CurrentLocation, TargetLocation) < 10.f)
    {
		TargetLocation = PlayerLocation; // Cambia la posición objetivo al jugador
    }

    // Mover al enemigo hacia el punto objetivo
    FVector NewLocation = FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, 4.0f); // Velocidad de 1.0f
    SetActorLocation(NewLocation);
}