// Fill out your copyright notice in the Description page of Project Settings.


#include "SteelBlock.h"

// Sets default values
ASteelBlock::ASteelBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

// Called when the game starts or when spawned
void ASteelBlock::BeginPlay()
{
	Super::BeginPlay();
	
}
