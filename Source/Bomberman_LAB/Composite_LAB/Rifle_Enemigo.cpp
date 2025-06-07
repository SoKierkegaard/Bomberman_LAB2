// Fill out your copyright notice in the Description page of Project Settings.


#include "Rifle_Enemigo.h"
#include "Bala_Rifle.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ARifle_Enemigo::ARifle_Enemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	//RootComponent = MeshComp;
	MeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshComponent(TEXT("/Script/Engine.StaticMesh'/Game/Weapons_Free/Meshes/SM_sniper_rifle_001.SM_sniper_rifle_001'"));

	if (ObjetoMeshComponent.Succeeded())
	{
		MeshComponent->SetStaticMesh(ObjetoMeshComponent.Object);
		MeshComponent->SetRelativeScale3D(FVector(2.f, 2.f, 2.f));
	}
}

// Called when the game starts or when spawned
void ARifle_Enemigo::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparar, this, &ARifle_Enemigo::InitPartes, 5.0f, true);
	PosicionInicial = GetActorLocation();
}

// Called every frame
void ARifle_Enemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (Jugador)
	{
		PosicionJugador = Jugador->GetActorLocation();

		// Calcular la dirección hacia el jugador
		FVector Direccion = (PosicionJugador - PosicionInicial).GetSafeNormal();

		// Convertir dirección a rotación
		FRotator Rotacion = FRotationMatrix::MakeFromX(Direccion).Rotator();
		SetActorRotation(Rotacion); // Apunta el rifle hacia el jugador
	}
}

void ARifle_Enemigo::InitPartes()
{
	GetWorld()->SpawnActor<ABala_Rifle>(GetActorLocation(), GetActorRotation());
}

void ARifle_Enemigo::DestroyParts()
{
}
