// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bomb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_LAB_Bomb_generated_h
#error "Bomb.generated.h already included, missing '#pragma once' in Bomb.h"
#endif
#define BOMBERMAN_LAB_Bomb_generated_h

#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_LAB"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABomb(ABomb&&); \
	ABomb(const ABomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomb) \
	NO_API virtual ~ABomb();


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_9_PROLOG
#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_LAB_API UClass* StaticClass<class ABomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Bomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
