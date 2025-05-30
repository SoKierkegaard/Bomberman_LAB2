// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Maze_Builder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_LAB_Maze_Builder_generated_h
#error "Maze_Builder.generated.h already included, missing '#pragma once' in Maze_Builder.h"
#endif
#define BOMBERMAN_LAB_Maze_Builder_generated_h

#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_LAB_API UMaze_Builder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaze_Builder(UMaze_Builder&&); \
	UMaze_Builder(const UMaze_Builder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_LAB_API, UMaze_Builder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaze_Builder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaze_Builder) \
	BOMBERMAN_LAB_API virtual ~UMaze_Builder();


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMaze_Builder(); \
	friend struct Z_Construct_UClass_UMaze_Builder_Statics; \
public: \
	DECLARE_CLASS(UMaze_Builder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Bomberman_LAB"), BOMBERMAN_LAB_API) \
	DECLARE_SERIALIZER(UMaze_Builder)


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_10_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMaze_Builder() {} \
public: \
	typedef UMaze_Builder UClassType; \
	typedef IMaze_Builder ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_7_PROLOG
#define FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_LAB_API UClass* StaticClass<class UMaze_Builder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
