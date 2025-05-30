// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueForma.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"


ABloqueForma::ABloqueForma()
{
	PrimaryActorTick.bCanEverTick = true;

    // Cargar las mallas solo una vez en el constructor
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> PyramidMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsuleMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

    if (CylinderMesh.Succeeded() && PyramidMesh.Succeeded() && SphereMesh.Succeeded() && CapsuleMesh.Succeeded())
    {
        // Guardamos las mallas en variables para usarlas más tarde
        Meshes.Add(CylinderMesh.Object);
        Meshes.Add(PyramidMesh.Object);
        Meshes.Add(SphereMesh.Object);
        Meshes.Add(CapsuleMesh.Object);
    }
}

void ABloqueForma::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueForma::Tick(float DeltaTime)
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
            if (!bFormaCambiada)
            {
                CambiarForma(); // Cambia la forma
            }
        }
    }
}

void ABloqueForma::CambiarForma()
{
    if (MallaBloque && Meshes.Num() > 0)
    {
        // Elegir aleatoriamente una de las mallas pre-cargadas
        int32 RandomIndex = FMath::RandRange(0, Meshes.Num() - 1);
        MallaBloque->SetStaticMesh(Meshes[RandomIndex]);
		bFormaCambiada = true; // Cambiamos el estado de la forma
    }
}
