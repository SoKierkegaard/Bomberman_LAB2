// Fill out your copyright notice in the Description page of Project Settings.


#include "Puerta_Ex.h"
#include <Kismet/GameplayStatics.h>


// Sets default values
APuerta_Ex::APuerta_Ex()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaPuerta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaPuerta"));

	MallaPuerta->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaPuerta(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaPuerta.Succeeded())
	{
		MallaPuerta->SetStaticMesh(ObjetoMallaPuerta.Object);
		MallaPuerta->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		MallaPuerta->SetRelativeScale3D(FVector(1.0f, 1.0f, 2.0f));
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> PuertaActivada(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));
	if (PuertaActivada.Succeeded())
	{
		MaterialActivado = PuertaActivada.Object;
	}

	if (MallaPuerta)
	{
		MallaPuerta->SetMaterial(0, MaterialActivado);
	}


	// Cargamos los materiales en el constructor
	/*static ConstructorHelpers::FObjectFinder<UMaterial> PuertaActivada(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> PuertaDesactivada(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile.M_Tech_Hex_Tile'"));

	if (PuertaActivada.Succeeded())
	{
		MaterialActivado = PuertaActivada.Object;
	}
	if (PuertaDesactivada.Succeeded())
	{
		MaterialDesactivado = PuertaDesactivada.Object;
	}*/

	justone = true;
}

// Called when the game starts or when spawned
void APuerta_Ex::BeginPlay()
{
	Super::BeginPlay();
	
	FacadePrincipal = GetWorld()->SpawnActor<AFacade_Main>(AFacade_Main::StaticClass());
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APuerta_Ex::StaticClass(), PuertaLocations);


	//ActivarPuerta();
}

// Called every frame
void APuerta_Ex::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!PlayerPawn) return;  // <-- Evitar crash si el jugador fue destruido

	FVector PlayerLocation = PlayerPawn->GetActorLocation();
	FVector PuertaLocation = GetActorLocation();

	float Distance = FVector::Dist(PlayerLocation, PuertaLocation);

	if (Distance < 150.f && justone)
	{
		if (FacadePrincipal)  // también verificar que no sea nullptr
		{
			FacadePrincipal->ActivarTrampa();
		}
		justone = false;
	}
	/*if (bPuertaActiva)
	{
		FVector PlayerLocation = PlayerPawn->GetActorLocation();
		FVector PuertaLocation = GetActorLocation();

		float Distance = FVector::Dist(PlayerLocation, PuertaLocation);

		if (Distance < 150.f)
		{
			SpawnNextDoor();
		}
	}*/
}

void APuerta_Ex::SpawnNextDoor()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);

	// Elimina la puerta actual del array para no elegir la misma
	TArray<AActor*> OtrasPuertas;
	for (AActor* Puerta : PuertaLocations)
	{
		if (Puerta != this)
		{
			OtrasPuertas.Add(Puerta);
		}
	}

	int32 IndiceAleatorio = FMath::RandRange(0, OtrasPuertas.Num() - 1);
	FVector NuevaUbicacion = OtrasPuertas[IndiceAleatorio]->GetActorLocation();

	PlayerPawn->SetActorLocation(NuevaUbicacion);
}

void APuerta_Ex::ActivarPuerta()
{
	bPuertaActiva = true;

	int32 TiempoActivo = FMath::RandRange(1, 10);
	if (MallaPuerta)
	{
		MallaPuerta->SetMaterial(0, MaterialActivado);
	}
	GetWorld()->GetTimerManager().SetTimer(TimerHandleDesactivacion, this, &APuerta_Ex::DesactivarPuerta, TiempoActivo, false);
}

void APuerta_Ex::DesactivarPuerta()
{
	bPuertaActiva = false;

	int32 TiempoInactivo = FMath::RandRange(1, 10);
	if (MallaPuerta)
	{
		MallaPuerta->SetMaterial(0, MaterialDesactivado);
	}
	GetWorld()->GetTimerManager().SetTimer(TimerHandleActivacion, this, &APuerta_Ex::ActivarPuerta, TiempoInactivo, false);
}

