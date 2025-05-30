// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Explosion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BOMBERMAN_LAB_Explosion_generated_h
#error "Explosion.generated.h already included, missing '#pragma once' in Explosion.h"
#endif
#define BOMBERMAN_LAB_Explosion_generated_h

#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosion(); \
	friend struct Z_Construct_UClass_AExplosion_Statics; \
public: \
	DECLARE_CLASS(AExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_LAB"), NO_API) \
	DECLARE_SERIALIZER(AExplosion)


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AExplosion(AExplosion&&); \
	AExplosion(const AExplosion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosion) \
	NO_API virtual ~AExplosion();


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h_7_PROLOG
#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h_10_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_LAB_API UClass* StaticClass<class AExplosion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Explosion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
