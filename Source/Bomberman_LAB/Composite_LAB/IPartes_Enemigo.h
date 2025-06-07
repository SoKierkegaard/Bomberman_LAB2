// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPartes_Enemigo.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIPartes_Enemigo : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_LAB_API IIPartes_Enemigo
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//METODO: Implementar las funciones que se necesiten para las partes del enemigo
	virtual void InitPartes() = 0; 
	virtual void DestroyParts() = 0;
};
