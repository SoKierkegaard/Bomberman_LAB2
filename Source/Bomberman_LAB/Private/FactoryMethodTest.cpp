// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethodTest.h"
#include "BloqueIndestructible.h"
#include "BloqueDestructible.h"

// Sets default values
AFactoryMethodTest::AFactoryMethodTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//RootComponent = MeshComp;
	MallaBloque->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
}

// Called when the game starts or when spawned
void AFactoryMethodTest::BeginPlay()
{
	Super::BeginPlay();
	//Create the Fabrics
	FVector Location = GetActorLocation();
	BloqueDestructible = GetWorld() -> SpawnActor<ABloqueDestructible>(ABloqueDestructible::StaticClass(),Location,FRotator(0, 0, 0));
	BloqueIndestructible = GetWorld() -> SpawnActor<ABloqueIndestructible>(ABloqueIndestructible::StaticClass(), Location, FRotator(0, 0, 0));

    GenerarLaberinto();
}

// Called every frame
void AFactoryMethodTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFactoryMethodTest::GenerarLaberinto()
{
    FVector Location = GetActorLocation();
    FVector SpawnLocation;
    int32 BlockSize = 100;

    for (int32 Row = 0; Row < aMapaBloques.Num(); ++Row)
    {
        for (int32 Col = 0; Col < aMapaBloques[Row].Num(); ++Col)
        {
            int32 BlockType = aMapaBloques[Row][Col];
            SpawnLocation = Location + FVector(Col * BlockSize, Row * BlockSize, 0);

            ABasicBlock* Block = nullptr;

            if (BlockType == 1)
            {
                Block = BloqueDestructible->GenerateBlock("Madera");
            }
            else if (BlockType == 2)
            {
                Block = BloqueDestructible->GenerateBlock("Ladrillo");
            }
            else if (BlockType == 3) 
            {
                Block = BloqueIndestructible->GenerateBlock("Acero");
            }
            else if (BlockType == 4)
            {
                Block = BloqueIndestructible->GenerateBlock("Concreto");
            }

            if (Block)
            {
                Block->SetActorLocation(SpawnLocation);
            }
        }
    }
}

