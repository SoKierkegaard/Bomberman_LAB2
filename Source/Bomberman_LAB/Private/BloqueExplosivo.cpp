// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueExplosivo.h"
#include <Kismet/GameplayStatics.h>
#include "Particles/ParticleSystem.h" // Para trabajar con efectos de partículas
#include "Particles/ParticleSystemComponent.h" // Para efectos avanzados de partículas


// Sets default values
ABloqueExplosivo::ABloqueExplosivo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Cargar efecto de explosión
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionAsset(TEXT("/Game/StarterContent/Particles/P_Explosion"));
    if (ExplosionAsset.Succeeded())
    {
        ExplosionEffect = ExplosionAsset.Object;
    }
    TiempoTranscurrido = 0.0f;
}

void ABloqueExplosivo::Explotar()
{
    FVector Posicion = GetActorLocation();

    if (ExplosionEffect)
    {
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, Posicion);
    }

    Destroy(); // Elimina el bloque tras explotar

}

// Called when the game starts or when spawned
void ABloqueExplosivo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueExplosivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    // Si no ha explotado aún, hacemos que explote después de cierto tiempo
    TiempoTranscurrido += DeltaTime;

    if (TiempoTranscurrido >= 6.0f && !bExploto) // Explota después de 6 segundos
    {
        Explotar();
        bExploto = true;
    }
}

