// Fill out your copyright notice in the Description page of Project Settings.


#include "Bala_Rifle.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ABala_Rifle::ABala_Rifle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	//RootComponent = MeshComp;
	MeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshComponent(TEXT("/Script/Engine.StaticMesh'/Game/Military_Free/Meshes/SM_tank_gun_001.SM_tank_gun_001'"));

	if (ObjetoMeshComponent.Succeeded())
	{
		MeshComponent->SetStaticMesh(ObjetoMeshComponent.Object);
		MeshComponent->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));
	}
}

// Called when the game starts or when spawned
void ABala_Rifle::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
	AActor* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (Jugador)
	{
		PosicionJugador = Jugador->GetActorLocation();

		// Calcular la dirección hacia el jugador
		FVector Direccion = (PosicionJugador - PosicionInicial).GetSafeNormal();

		// Convertir dirección a rotación
		FRotator Rotacion = FRotationMatrix::MakeFromX(Direccion).Rotator()- FRotator(0.f, 90.f, 0.f);
		SetActorRotation(Rotacion); // Apunta toda la bala en esa dirección

		DireccionConseguida = false; // Ya no es necesario recalcularla en Tick
	}
}

// Called every frame
void ABala_Rifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Obtener referencia al jugador (suponiendo que es el jugador principal)
	AActor* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!Jugador) return; // Si no encuentra jugador, no hace nada

	FVector PosicionActual = GetActorLocation();
	if (DireccionConseguida) {
		PosicionJugador = Jugador->GetActorLocation();
		DireccionConseguida = false; // Solo calcular la dirección una vez al inicio
	}


	// Calcular dirección normalizada hacia el jugador
	FVector Direccion = (PosicionJugador - PosicionActual).GetSafeNormal();

	// Velocidad a la que quieres que se mueva la bala
	float Velocidad = 1000.0f;

	// Mover la bala hacia el jugador
	PosicionActual += Direccion * Velocidad * DeltaTime;
	SetActorLocation(PosicionActual);

	float DistanciaRecorrida = FVector::Dist(PosicionActual, PosicionInicial);
	float DistanciaMaxima = 3000.0f;
	if (DistanciaRecorrida > DistanciaMaxima || FVector::Dist(PosicionActual, PosicionJugador) < 50.0f)
	{
		Destroy();
	}

}

