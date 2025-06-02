// Fill out your copyright notice in the Description page of Project Settings.


#include "Comandante.h"

// Sets default values
AComandante::AComandante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	//RootComponent = MeshComp;
	MeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshComponent(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));

	if (ObjetoMeshComponent.Succeeded())
	{
		MeshComponent->SetStaticMesh(ObjetoMeshComponent.Object);
		MeshComponent->SetRelativeScale3D(FVector(1.5f, 1.5f, 3.5f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));

	if (MaterialBase.Succeeded())
	{
		MeshComponent->SetMaterial(0, MaterialBase.Object);
	}
}

// Called when the game starts or when spawned
void AComandante::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

// Called every frame
void AComandante::Tick(float DeltaTime)
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

