// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IBuilder_Ejercito.h"
#include "GameFramework/Actor.h"
#include "Builder_EX.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ABuilder_EX : public AActor, public IIBuilder_Ejercito
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder_EX();

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
	virtual void ConstruirSoldados(int32 cantidad);
	virtual void ConstruirComandantes(int32 cantidad);
	virtual void ConstruirTanques(int32 cantidad);
	virtual void ConstruirTorretas(int32 cantidad);
	virtual AEjercito* GetEjercito();

	virtual void Ejercito1();
	virtual void Ejercito2();
	virtual void Ejercito3();
	virtual void Ejercito4();
};
