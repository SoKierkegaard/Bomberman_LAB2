// Fill out your copyright notice in the Description page of Project Settings.


#include "BrickBlock.h"

// Sets default values
ABrickBlock::ABrickBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_Beveled.M_Brick_Clay_Beveled'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

// Called when the game starts or when spawned
void ABrickBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABrickBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

