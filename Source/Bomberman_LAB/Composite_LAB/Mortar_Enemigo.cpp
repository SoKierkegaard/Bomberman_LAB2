// Fill out your copyright notice in the Description page of Project Settings.


#include "Mortar_Enemigo.h"
#include "Bala_Mortar.h"

// Sets default values
AMortar_Enemigo::AMortar_Enemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	//RootComponent = MeshComp;
	MeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshComponent(TEXT("/Script/Engine.StaticMesh'/Game/Military_Free/Meshes/SM_mortar_001.SM_mortar_001'"));

	if (ObjetoMeshComponent.Succeeded())
	{
		MeshComponent->SetStaticMesh(ObjetoMeshComponent.Object);
		MeshComponent->SetRelativeScale3D(FVector(2.f, 2.f, 2.f));
	}
}

// Called when the game starts or when spawned
void AMortar_Enemigo::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparar, this, &AMortar_Enemigo::InitPartes, 5.0f, true);
	PosicionInicial = GetActorLocation();
}

// Called every frame
void AMortar_Enemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AMortar_Enemigo::InitPartes()
{
	GetWorld()->SpawnActor<ABala_Mortar>(PosicionInicial, FRotator::ZeroRotator);
}

void AMortar_Enemigo::DestroyParts()
{
}


