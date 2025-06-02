// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IBuilder_Ejercito.h"
#include "GameFramework/Actor.h"
#include "Builder_Ejercito.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ABuilder_Ejercito : public AActor, public IIBuilder_Ejercito
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder_Ejercito();

private:	
	class AEjercito* Ejercito;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Metodos de la interfaz IIBuilder_Ejercito

	virtual void ConstruirEjercitoCompleto();
	virtual void ConstruirSoldados();
	virtual void ConstruirComandantes();
	virtual void ConstruirTanques();
	virtual void ConstruirTorretas();
	virtual AEjercito* GetEjercito();
};
