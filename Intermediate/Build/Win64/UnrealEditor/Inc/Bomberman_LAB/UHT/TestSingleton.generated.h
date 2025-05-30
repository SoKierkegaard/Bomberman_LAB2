// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestSingleton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_LAB_TestSingleton_generated_h
#error "TestSingleton.generated.h already included, missing '#pragma once' in TestSingleton.h"
#endif
#define BOMBERMAN_LAB_TestSingleton_generated_h

#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestSingleton(); \
	friend struct Z_Construct_UClass_ATestSingleton_Statics; \
public: \
	DECLARE_CLASS(ATestSingleton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_LAB"), NO_API) \
	DECLARE_SERIALIZER(ATestSingleton)


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestSingleton(ATestSingleton&&); \
	ATestSingleton(const ATestSingleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestSingleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestSingleton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestSingleton) \
	NO_API virtual ~ATestSingleton();


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_9_PROLOG
#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_LAB_API UClass* StaticClass<class ATestSingleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
