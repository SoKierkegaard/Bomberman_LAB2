// Fill out your copyright notice in the Description page of Project Settings.


#include "Bala.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include <Kismet/GameplayStatics.h>
#include "GameFramework/Character.h"

// Sets default values
ABala::ABala()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaCannon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaCannon"));
	RootComponent = MallaCannon;

	ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaCannon(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (ObjetoMallaCannon.Succeeded())
	{
		MallaCannon->SetStaticMesh(ObjetoMallaCannon.Object);
		MallaCannon->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	}

	ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterialCannon(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	if (ObjetoMaterialCannon.Succeeded())
	{
		MallaCannon->SetMaterial(0, ObjetoMaterialCannon.Object);
	}

	MallaCannon->SetSimulatePhysics(false);
	MallaCannon->SetEnableGravity(false);

	MallaCannon->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MallaCannon->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	MallaCannon->SetGenerateOverlapEvents(true);

	MallaCannon->OnComponentBeginOverlap.AddDynamic(this, &ABala::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ABala::BeginPlay()
{
	Super::BeginPlay();
	// Inicializa la posición inicial al comenzar el juego
	PosicionInicial = GetActorLocation();
	DireccionConseguida = true;
}

// Called every frame
void ABala::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Obtener referencia al jugador (suponiendo que es el jugador principal)
	AActor* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!Jugador) return; // Si no encuentra jugador, no hace nada

	FVector PosicionActual = GetActorLocation();
	if(DireccionConseguida){ 
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

	float DistanciaRecorrida = FVector::Dist(PosicionActual,PosicionInicial);
	float DistanciaMaxima = 3000.0f; 
	if (DistanciaRecorrida > DistanciaMaxima || FVector::Dist(PosicionActual, PosicionJugador) < 50.0f)
	{
		Destroy();
	}

}


void ABala::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
{
	/*
	if (OtherActor && OtherActor != this)
	{
		if (OtherActor->IsA(ABloque::StaticClass()))
		{
			if (OtherActor->IsA(ABloqueAcero::StaticClass()))
			{
				OtherActor->Destroy();
				Destroy();
			}
			else
			{
				OtherActor->Destroy();
			}
		}
		else if (OtherActor->IsA(ACharacter::StaticClass()))
		{
			OtherActor->Destroy();
		}
	}
	*/
}
