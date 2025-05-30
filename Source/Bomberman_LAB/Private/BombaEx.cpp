// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaEx.h"
#include <Kismet/GameplayStatics.h>
#include "Bloque.h"

// Sets default values
ABombaEx::ABombaEx()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MallaBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBomba"));
	MallaBomba->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBomba(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	if (ObjetoMallaBomba.Succeeded())
	{
		MallaBomba->SetStaticMesh(ObjetoMallaBomba.Object);

		MallaBomba->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

// Called when the game starts or when spawned
void ABombaEx::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Explota, this, &ABombaEx::Explotar, 5.0f);
}

// Called every frame
void ABombaEx::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABombaEx::Explotar()
{
    // Radio de la explosion
    float radio = 200.0f;
	float area = 400.0f;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloque::StaticClass(), actoresEnEscena);//Carga todos los actores en el array 

    FVector posicionBomba = GetActorLocation();

    for (AActor* actor : actoresEnEscena)
    {
		if (actor != this) // Ignora la bomba misma
        {
            float distancia = FVector::Dist(posicionBomba, actor->GetActorLocation());

            if (distancia <= radio)
            {
                actor->Destroy();
            }
        }
    }

    for (int32 i = 0; i < CantidadDeBombas; ++i)
    {
        float posicionAlX = FMath::FRandRange(posicionBomba.X - area, posicionBomba.X + area);
        float posicionAlY = FMath::FRandRange(posicionBomba.Y - area, posicionBomba.Y + area);
        FVector spawnLocation(posicionAlX, posicionAlY, posicionBomba.Z);

        GetWorld()->SpawnActor<ABombaEx>(ABombaEx::StaticClass(), spawnLocation, FRotator::ZeroRotator);
    }

    // Destruye la bomba 
    Destroy();
}