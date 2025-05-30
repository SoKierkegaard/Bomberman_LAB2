// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcreteBlock.h"

// Sets default values
AConcreteBlock::AConcreteBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

// Called when the game starts or when spawned
void AConcreteBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConcreteBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

