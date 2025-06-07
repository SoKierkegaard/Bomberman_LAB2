// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Composite_LAB/Composite_Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_LAB_Composite_Enemy_generated_h
#error "Composite_Enemy.generated.h already included, missing '#pragma once' in Composite_Enemy.h"
#endif
#define BOMBERMAN_LAB_Composite_Enemy_generated_h

#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAComposite_Enemy(); \
	friend struct Z_Construct_UClass_AComposite_Enemy_Statics; \
public: \
	DECLARE_CLASS(AComposite_Enemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_LAB"), NO_API) \
	DECLARE_SERIALIZER(AComposite_Enemy) \
	virtual UObject* _getUObject() const override { return const_cast<AComposite_Enemy*>(this); }


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AComposite_Enemy(AComposite_Enemy&&); \
	AComposite_Enemy(const AComposite_Enemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComposite_Enemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComposite_Enemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AComposite_Enemy) \
	NO_API virtual ~AComposite_Enemy();


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_10_PROLOG
#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_LAB_API UClass* StaticClass<class AComposite_Enemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
