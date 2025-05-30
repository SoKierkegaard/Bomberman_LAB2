// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Maze_Builder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze_Builder() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UMaze_Builder();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UMaze_Builder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Interface UMaze_Builder
void UMaze_Builder::StaticRegisterNativesUMaze_Builder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaze_Builder);
UClass* Z_Construct_UClass_UMaze_Builder_NoRegister()
{
	return UMaze_Builder::StaticClass();
}
struct Z_Construct_UClass_UMaze_Builder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Maze_Builder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMaze_Builder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaze_Builder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaze_Builder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaze_Builder_Statics::ClassParams = {
	&UMaze_Builder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaze_Builder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaze_Builder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaze_Builder()
{
	if (!Z_Registration_Info_UClass_UMaze_Builder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaze_Builder.OuterSingleton, Z_Construct_UClass_UMaze_Builder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaze_Builder.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<UMaze_Builder>()
{
	return UMaze_Builder::StaticClass();
}
UMaze_Builder::UMaze_Builder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaze_Builder);
UMaze_Builder::~UMaze_Builder() {}
// End Interface UMaze_Builder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaze_Builder, UMaze_Builder::StaticClass, TEXT("UMaze_Builder"), &Z_Registration_Info_UClass_UMaze_Builder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaze_Builder), 2181209788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_2194067868(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Builder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
