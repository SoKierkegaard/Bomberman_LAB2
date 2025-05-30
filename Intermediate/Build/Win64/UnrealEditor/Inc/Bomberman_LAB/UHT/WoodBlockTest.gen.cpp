// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/WoodBlockTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWoodBlockTest() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AWoodBlockTest();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AWoodBlockTest_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AWoodBlockTest
void AWoodBlockTest::StaticRegisterNativesAWoodBlockTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWoodBlockTest);
UClass* Z_Construct_UClass_AWoodBlockTest_NoRegister()
{
	return AWoodBlockTest::StaticClass();
}
struct Z_Construct_UClass_AWoodBlockTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WoodBlockTest.h" },
		{ "ModuleRelativePath", "Public/WoodBlockTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWoodBlockTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWoodBlockTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWoodBlockTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWoodBlockTest_Statics::ClassParams = {
	&AWoodBlockTest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWoodBlockTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AWoodBlockTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWoodBlockTest()
{
	if (!Z_Registration_Info_UClass_AWoodBlockTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWoodBlockTest.OuterSingleton, Z_Construct_UClass_AWoodBlockTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWoodBlockTest.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AWoodBlockTest>()
{
	return AWoodBlockTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWoodBlockTest);
AWoodBlockTest::~AWoodBlockTest() {}
// End Class AWoodBlockTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_WoodBlockTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWoodBlockTest, AWoodBlockTest::StaticClass, TEXT("AWoodBlockTest"), &Z_Registration_Info_UClass_AWoodBlockTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWoodBlockTest), 1078610761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_WoodBlockTest_h_3883589708(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_WoodBlockTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_WoodBlockTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
