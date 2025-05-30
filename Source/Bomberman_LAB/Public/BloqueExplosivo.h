// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueExplosivo.generated.h"

/**
 *
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueExplosivo : public ABloque
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueExplosivo();
	void Explotar(); //esta funcion activa la explosion
	UPROPERTY(EditAnywhere, Category = "Efectos")
	UParticleSystem* ExplosionEffect;
	float TiempoTranscurrido;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool bExploto = false; //esto indica si se exploto
};
