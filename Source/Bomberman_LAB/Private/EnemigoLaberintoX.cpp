// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoLaberintoX.h"

// Sets default values
AEnemigoLaberintoX::AEnemigoLaberintoX()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	MallaEnemigo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaEnemigo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	if (ObjetoMallaEnemigo.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(ObjetoMallaEnemigo.Object);
	}
}

// Called when the game starts or when spawned
void AEnemigoLaberintoX::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoLaberintoX::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoLaberintoX::MovimientoX()
{

}







