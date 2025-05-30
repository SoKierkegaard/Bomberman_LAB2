// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPrototype_Test.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_LAB_IPrototype_Test_generated_h
#error "IPrototype_Test.generated.h already included, missing '#pragma once' in IPrototype_Test.h"
#endif
#define BOMBERMAN_LAB_IPrototype_Test_generated_h

#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_LAB_API UIPrototype_Test(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIPrototype_Test(UIPrototype_Test&&); \
	UIPrototype_Test(const UIPrototype_Test&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_LAB_API, UIPrototype_Test); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPrototype_Test); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPrototype_Test) \
	BOMBERMAN_LAB_API virtual ~UIPrototype_Test();


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIPrototype_Test(); \
	friend struct Z_Construct_UClass_UIPrototype_Test_Statics; \
public: \
	DECLARE_CLASS(UIPrototype_Test, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Bomberman_LAB"), BOMBERMAN_LAB_API) \
	DECLARE_SERIALIZER(UIPrototype_Test)


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIPrototype_Test() {} \
public: \
	typedef UIPrototype_Test UClassType; \
	typedef IIPrototype_Test ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_10_PROLOG
#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_LAB_API UClass* StaticClass<class UIPrototype_Test>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_IPrototype_Test_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
