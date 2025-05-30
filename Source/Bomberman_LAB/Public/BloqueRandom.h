// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueRandom.generated.h"

/**
 *
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueRandom : public ABloque
{
    GENERATED_BODY()

public:
    ABloqueRandom();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    //Controlando desde la clase no GameMode
    // Método para establecer la ubicación aleatoria del bloques y la cantidad
    void GenerarUbicacionAleatoria();
public:
    // Método llamado cada frame
    virtual void Tick(float DeltaTime) override;

    //para manejar los metodos en la CLASE no en Game Mode
    // Límites para la generación aleatoria de ubicaciones
    FVector LimiteInferior;
    FVector LimiteSuperior;
};