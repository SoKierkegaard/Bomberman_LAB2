// Fill out your copyright notice in the Description page of Project Settings.


#include "Bala_Mortar.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ABala_Mortar::ABala_Mortar()
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
void ABala_Mortar::BeginPlay()
{
	Super::BeginPlay();
	// Posición inicial
	PosicionInicial = GetActorLocation();

	// Obtener dirección hacia el jugador
	AActor* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (Jugador)
	{
		PosicionJugador = Jugador->GetActorLocation();

		// Calcular dirección en X/Y (plano horizontal)
		FVector DireccionPlano = (PosicionJugador - PosicionInicial);
		DireccionPlano.Z = 0;
		DireccionPlano = DireccionPlano.GetSafeNormal();

		// Asignamos una velocidad inicial
		float VelocidadMagnitud = 1000.0f;
		VelocidadInicial = DireccionPlano * VelocidadMagnitud;

		// Le damos una velocidad vertical inicial 
		VelocidadInicial.Z = 1000.0f;

		// Ajustamos la rotación inicial
		FRotator Rotacion = FRotationMatrix::MakeFromX(DireccionPlano).Rotator() - FRotator(0.f, 90.f, 0.f);
		SetActorRotation(Rotacion);
	}

}

// Called every frame
void ABala_Mortar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Tiempo acumulado
	TiempoEnVuelo += DeltaTime;

	// Movimiento parabólico
	FVector Desplazamiento;
	Desplazamiento.X = VelocidadInicial.X * DeltaTime;
	Desplazamiento.Y = VelocidadInicial.Y * DeltaTime;

	// Movimiento vertical afectado por gravedad
	VelocidadInicial.Z += Gravedad * DeltaTime;
	Desplazamiento.Z = VelocidadInicial.Z * DeltaTime;

	// Mover bala
	AddActorWorldOffset(Desplazamiento);

	// Verificar distancia máxima o si cayó cerca del jugador
	float DistanciaRecorrida = FVector::Dist(GetActorLocation(), PosicionInicial);
	float DistanciaMaxima = 3000.0f;
	if (DistanciaRecorrida > DistanciaMaxima || FVector::Dist(GetActorLocation(), PosicionJugador) < 50.0f)
	{
		Destroy();
	}


}

