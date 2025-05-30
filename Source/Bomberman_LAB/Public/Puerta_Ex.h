// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Facade_Main.h"
#include "GameFramework/Actor.h"
#include "Puerta_Ex.generated.h"

UCLASS()
class BOMBERMAN_LAB_API APuerta_Ex : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuerta_Ex();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaPuerta;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
	AFacade_Main* FacadePrincipal;

	bool bPuertaActiva = false;

	TArray<AActor*> PuertaLocations;

	void SpawnNextDoor();

	FTimerHandle TimerHandleActivacion;
	FTimerHandle TimerHandleDesactivacion;

	void ActivarPuerta();
	void DesactivarPuerta();

	bool justone;


	UPROPERTY()
	UMaterial* MaterialActivado;

	UPROPERTY()
	UMaterial* MaterialDesactivado;
};
