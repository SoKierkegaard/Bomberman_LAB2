// Fill out your copyright notice in the Description page of Project Settings.


#include "CuerpoEnemigo.h"

// Sets default values
ACuerpoEnemigo::ACuerpoEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> ObjetoMeshComponent(TEXT("/Script/Engine.SkeletalMesh'/Game/AnimalVarietyPack/Fox/Meshes/SK_Fox.SK_Fox'"));

	if (ObjetoMeshComponent.Succeeded())
	{
		MeshComponent->SetSkeletalMesh(ObjetoMeshComponent.Object);
		MeshComponent->SetRelativeScale3D(FVector(2.f, 2.f, 2.f));
	}
}

// Called when the game starts or when spawned
void ACuerpoEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACuerpoEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACuerpoEnemigo::InitPartes()
{
}

void ACuerpoEnemigo::DestroyParts()
{
	Destroy();
}

