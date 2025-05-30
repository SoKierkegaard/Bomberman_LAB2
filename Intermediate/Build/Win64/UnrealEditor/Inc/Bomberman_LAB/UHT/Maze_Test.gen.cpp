// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Maze_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze_Test() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AMaze_Test();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AMaze_Test_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AMaze_Test
void AMaze_Test::StaticRegisterNativesAMaze_Test()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMaze_Test);
UClass* Z_Construct_UClass_AMaze_Test_NoRegister()
{
	return AMaze_Test::StaticClass();
}
struct Z_Construct_UClass_AMaze_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Maze_Test.h" },
		{ "ModuleRelativePath", "Public/Maze_Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMaze_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMaze_Test_Statics::ClassParams = {
	&AMaze_Test::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_AMaze_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMaze_Test()
{
	if (!Z_Registration_Info_UClass_AMaze_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMaze_Test.OuterSingleton, Z_Construct_UClass_AMaze_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMaze_Test.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AMaze_Test>()
{
	return AMaze_Test::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze_Test);
AMaze_Test::~AMaze_Test() {}
// End Class AMaze_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMaze_Test, AMaze_Test::StaticClass, TEXT("AMaze_Test"), &Z_Registration_Info_UClass_AMaze_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaze_Test), 3737198593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Test_h_3723723859(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Maze_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
