// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueRandom.h"

ABloqueRandom::ABloqueRandom()
{
    PrimaryActorTick.bCanEverTick = true;

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Rock_Slate.M_Rock_Slate'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }

    //Para manejar desde la CLASE no desde Game mode
    // Inicialización de variables
    LimiteInferior = FVector(100.0f, 100.0f, 0.0f);
    LimiteSuperior = FVector(3000.0f, 3000.0f, 50.0f);
}

void ABloqueRandom::BeginPlay()
{
    Super::BeginPlay();

    //Para manejar desde LA CLASE
    GenerarUbicacionAleatoria();
}

//Para manejar desde LA CLASE
void ABloqueRandom::GenerarUbicacionAleatoria()
{
    // Generar valores aleatorios dentro de los límites
    float RandomX = FMath::RandRange(100.0f, 3000.0f);
    float RandomY = FMath::RandRange(100.0f, 3000.0f);
    float RandomZ = FMath::RandRange(0.0f, 50.0f);

    FVector PosicionAleatoria(RandomX, RandomY, RandomZ);

    // Establecer la nueva ubicación
    SetActorLocation(PosicionAleatoria);

}


void ABloqueRandom::Tick(float DeltaTime)
{
}
