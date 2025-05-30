// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include <Kismet/GameplayStatics.h>
#include "GameFramework/Character.h"

// Sets default values
ABomba::ABomba()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    ExplosionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExplosionMesh"));
    RootComponent = ExplosionMesh;

    ConstructorHelpers::FObjectFinder<UStaticMesh> ExplosionMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (ExplosionMeshAsset.Succeeded())
    {
        ExplosionMesh->SetStaticMesh(ExplosionMeshAsset.Object);
        ExplosionMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }

    ConstructorHelpers::FObjectFinder<UMaterial> MaterialExplosionAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
    if (MaterialExplosionAsset.Succeeded())
    {
        ExplosionMesh->SetMaterial(0, MaterialExplosionAsset.Object);
    }

    ExplosionMesh->SetSimulatePhysics(false);
    ExplosionMesh->SetEnableGravity(false);

    ExplosionMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    ExplosionMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    ExplosionMesh->SetGenerateOverlapEvents(true);

    ExplosionMesh->OnComponentBeginOverlap.AddDynamic(this, &ABomba::OnOverlapBegin);

}


// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
    Super::BeginPlay();
    InitialPosition = GetActorLocation();
}

void ABomba::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector PosicionActual = GetActorLocation();
    float DistanciaRecorrida = PosicionActual.X - PosicionInicial.X;

    if (DistanciaRecorrida < DistanciaObjetivo)
    {
        PosicionActual.X += 2000.0f * DeltaTime; // Mueve el proyectil hacia adelante
        SetActorLocation(PosicionActual);
    }
    else
    {
        // Destruye el proyectil después de alcanzar la distancia objetivo
        Destroy();
    }
}

void ABomba::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
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
}