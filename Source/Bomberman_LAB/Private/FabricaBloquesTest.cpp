// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloquesTest.h"

// Sets default values
AFabricaBloquesTest::AFabricaBloquesTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//RootComponent = MeshComp;
	MallaBloque->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFabricaBloquesTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBloquesTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

