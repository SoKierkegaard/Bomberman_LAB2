// Fill out your copyright notice in the Description page of Project Settings.


#include "BloquePrueba.h"
#include <Kismet/GameplayStatics.h>
#include "GameFramework/Character.h"

// Sets default values
ABloquePrueba::ABloquePrueba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Definir un RootComponent explícito
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    MallaBloquePrueba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloquePrueba"));
    MallaBloquePrueba->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloquePrueba(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialBloquePrueba(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Walnut.M_Wood_Walnut'"));

    if (ObjetoMallaBloquePrueba.Succeeded())
    {
        MallaBloquePrueba->SetStaticMesh(ObjetoMallaBloquePrueba.Object);
        MallaBloquePrueba->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }

    if (MaterialBloquePrueba.Succeeded())
    {
        MallaBloquePrueba->SetMaterial(0, MaterialBloquePrueba.Object);
    }

}

// Called when the game starts or when spawned
void ABloquePrueba::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABloquePrueba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0); // Obtiene el Pawn del jugador
    if (PlayerPawn)
    {
        FVector PlayerLocation = PlayerPawn->GetActorLocation(); // Obtiene la ubicación del Pawn
        FVector BlockLocation = GetActorLocation(); // Obtiene la ubicación del bloque

        float Distance = FVector::Dist(PlayerLocation, BlockLocation); // Calcula la distancia entre el jugador y el bloque

        if (Distance < 200.f) // Si la distancia es menor a 200 unidades
        {
            Destroy(); // Destruye el bloque
        }
    }

    /*
    FVector NuevaPosicion = GetActorLocation();
    if (NuevaPosicion.Z < 1000.0f) {
        // Calcula la nueva posici n
        NuevaPosicion.Z += 50.0f * DeltaTime;// Velocidad de movimiento en Z
    }

    // Actualiza la ubicacion del actor
    SetActorLocation(NuevaPosicion);

    */
}