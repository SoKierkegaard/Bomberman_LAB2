// Fill out your copyright notice in the Description page of Project Settings.

#include "Tanques.h"

// Sets default values
ATanques::ATanques()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	//RootComponent = MeshComp;
	MeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshComponent(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	if (ObjetoMeshComponent.Succeeded())
	{
		MeshComponent->SetStaticMesh(ObjetoMeshComponent.Object);
		MeshComponent->SetRelativeScale3D(FVector(4.f, 4.f, 4.f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));

	if (MaterialBase.Succeeded())
	{
		MeshComponent->SetMaterial(0, MaterialBase.Object);
	}
}

// Called when the game starts or when spawned
void ATanques::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

// Called every frame
void ATanques::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector PosicionActual = GetActorLocation();
	float DistanciaRecorrida = PosicionActual.Y - PosicionInicial.Y;

	if (DistanciaRecorrida < DistanciaObjetivo)
	{
		PosicionActual.Y += 20.0f * DeltaTime;
		SetActorLocation(PosicionActual);
	}
}

