// Fill out your copyright notice in the Description page of Project Settings.


#include "Comandante.h"

// Sets default values
AComandante::AComandante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
	//RootComponent = MeshComp;
	MeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> ObjetoMeshComponent(TEXT("/Script/Engine.SkeletalMesh'/Game/AnimalVarietyPack/Wolf/Meshes/SK_Wolf.SK_Wolf'"));

	if (ObjetoMeshComponent.Succeeded())
	{
		MeshComponent->SetSkeletalMesh(ObjetoMeshComponent.Object);
		MeshComponent->SetRelativeScale3D(FVector(2.f, 2.f, 2.f));
	}

	/*
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Panel.M_Tech_Panel'"));

	if (MaterialBase.Succeeded())
	{
		MeshComponent->SetMaterial(0, MaterialBase.Object);
	}
	*/
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

