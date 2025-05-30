// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Maze_BuilderConcrete.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze_BuilderConcrete() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AMaze_BuilderConcrete();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AMaze_BuilderConcrete_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UMaze_Builder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AMaze_BuilderConcrete
void AMaze_BuilderConcrete::StaticRegisterNativesAMaze_BuilderConcrete()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMaze_BuilderConcrete);
UClass* Z_Construct_UClass_AMaze_BuilderConcrete_NoRegister()
{
	return AMaze_BuilderConcrete::StaticClass();
}
struct Z_Construct_UClass_AMaze_BuilderConcrete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Maze_BuilderConcrete.h" },
		{ "ModuleRelativePath", "Public/Maze_BuilderConcrete.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze_BuilderConcrete>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMaze_BuilderConcrete_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_BuilderConcrete_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMaze_BuilderConcrete_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMaze_Builder_NoRegister, (int32)VTABLE_OFFSET(AMaze_BuilderConcrete, IMaze_Builder), false },  // 2181209788
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMaze_BuilderConcrete_Statics::ClassParams = {
	&AMaze_BuilderConcrete::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_BuilderConcrete_Statics::Class_MetaDataParams), Z_Construct_UClass_AMaze_BuilderConcrete_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMaze_BuilderConcrete()
{
	if (!Z_Registration_Info_UClass_AMaze_BuilderConcrete.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMaze_BuilderConcrete.OuterSingleton, Z_Construct_UClass_AMaze_BuilderConcrete_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMaze_BuilderConcrete.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AMaze_BuilderConcrete>()
{
	return AMaze_BuilderConcrete::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze_BuilderConcrete);
AMaze_BuilderConcrete::~AMaze_BuilderConcrete() {}
// End Class AMaze_BuilderConcrete

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_BuilderConcrete_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMaze_BuilderConcrete, AMaze_BuilderConcrete::StaticClass, TEXT("AMaze_BuilderConcrete"), &Z_Registration_Info_UClass_AMaze_BuilderConcrete, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaze_BuilderConcrete), 519964533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_BuilderConcrete_h_1120129907(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_BuilderConcrete_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_BuilderConcrete_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
