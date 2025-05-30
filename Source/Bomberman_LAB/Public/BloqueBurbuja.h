// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IPrototype_Test.h"
#include "Bloque.h"
#include "BloqueBurbuja.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueBurbuja : public ABloque, public IIPrototype_Test
{
	GENERATED_BODY()
public:
    ABloqueBurbuja();

protected:
    virtual void BeginPlay() override;

    // Función que alterna visibilidad
    void AlternarVisibilidad();



    // Temporizador
    FTimerHandle TemporizadorVisibilidad;

    // Intervalo de tiempo entre cambios
    UPROPERTY(EditAnywhere, Category = "Visibilidad")
    float Intervalo = 1.0f; // 1 segundo por defecto

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Malla;
public:
    virtual AActor* Clone() const;
    float Health;
    void ActivarVisibilidad(bool activo);
};
