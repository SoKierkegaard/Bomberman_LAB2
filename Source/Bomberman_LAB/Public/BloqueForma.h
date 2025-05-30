// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueForma.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueForma : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueForma();
	UStaticMeshComponent* MallaBloqueForma;

	TArray<UStaticMesh*> Meshes;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void CambiarForma();

	bool bFormaCambiada = false;
};
