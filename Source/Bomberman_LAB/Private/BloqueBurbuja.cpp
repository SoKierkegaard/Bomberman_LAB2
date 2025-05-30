// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"
#include "TimerManager.h"

ABloqueBurbuja::ABloqueBurbuja()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
        // Valor de salud inicial
    }
	Health = 100.0f; // Valor de salud inicial
}

void ABloqueBurbuja::BeginPlay()
{
    Super::BeginPlay();

}

void ABloqueBurbuja::AlternarVisibilidad()
{
    if (MallaBloque)
    {
        bool bVisible = MallaBloque->IsVisible();
        MallaBloque->SetVisibility(!bVisible);
        MallaBloque->SetHiddenInGame(bVisible);
    }
}

void ABloqueBurbuja::ActivarVisibilidad(bool activo)
{
    if (activo) {
        GetWorldTimerManager().SetTimer(TemporizadorVisibilidad, this, &ABloqueBurbuja::AlternarVisibilidad, Intervalo, true);
    }
}

AActor* ABloqueBurbuja::Clone() const
{

    FVector SpawnLocation = GetActorLocation() + FVector(200, 0, 0);
    FRotator SpawnRotation = GetActorRotation();

    ABloqueBurbuja* NewClone = GetWorld()->SpawnActor<ABloqueBurbuja>(GetClass(), SpawnLocation, SpawnRotation);

    if (NewClone)
    {
        NewClone->Health = this->Health;  // Copiar la vida al clon
    }

    return NewClone;
}