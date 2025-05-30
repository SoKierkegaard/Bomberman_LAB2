// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueBurbuja.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_LAB_BloqueBurbuja_generated_h
#error "BloqueBurbuja.generated.h already included, missing '#pragma once' in BloqueBurbuja.h"
#endif
#define BOMBERMAN_LAB_BloqueBurbuja_generated_h

#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueBurbuja(); \
	friend struct Z_Construct_UClass_ABloqueBurbuja_Statics; \
public: \
	DECLARE_CLASS(ABloqueBurbuja, ABloque, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_LAB"), NO_API) \
	DECLARE_SERIALIZER(ABloqueBurbuja) \
	virtual UObject* _getUObject() const override { return const_cast<ABloqueBurbuja*>(this); }


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueBurbuja(ABloqueBurbuja&&); \
	ABloqueBurbuja(const ABloqueBurbuja&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueBurbuja); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueBurbuja); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueBurbuja) \
	NO_API virtual ~ABloqueBurbuja();


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_13_PROLOG
#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_LAB_API UClass* StaticClass<class ABloqueBurbuja>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueBurbuja_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
