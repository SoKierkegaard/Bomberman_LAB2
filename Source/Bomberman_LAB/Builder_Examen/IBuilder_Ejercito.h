// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBuilder_Ejercito.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIBuilder_Ejercito : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_LAB_API IIBuilder_Ejercito
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Funciones virtuales puras que se implementaran en las clases que hereden de esta interfaz.
	virtual void ConstruirEjercitoCompleto() = 0;
	virtual void ConstruirSoldados(int32 cantidad) = 0;
	virtual void ConstruirComandantes(int32 cantidad) = 0;
	virtual void ConstruirTanques(int32 cantidad) = 0;
	virtual void ConstruirTorretas(int32 cantidad) = 0;
	virtual class AEjercito*GetEjercito() = 0;

	virtual void Ejercito1() = 0;
	virtual void Ejercito2() = 0;
	virtual void Ejercito3() = 0;
	virtual void Ejercito4() = 0;
};
