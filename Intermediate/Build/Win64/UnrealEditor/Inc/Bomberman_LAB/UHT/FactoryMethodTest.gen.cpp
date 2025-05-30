// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/FactoryMethodTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryMethodTest() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AFactoryMethodTest();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AFactoryMethodTest_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AFactoryMethodTest
void AFactoryMethodTest::StaticRegisterNativesAFactoryMethodTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFactoryMethodTest);
UClass* Z_Construct_UClass_AFactoryMethodTest_NoRegister()
{
	return AFactoryMethodTest::StaticClass();
}
struct Z_Construct_UClass_AFactoryMethodTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FactoryMethodTest.h" },
		{ "ModuleRelativePath", "Public/FactoryMethodTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryMethodTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFactoryMethodTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryMethodTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFactoryMethodTest_Statics::ClassParams = {
	&AFactoryMethodTest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryMethodTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AFactoryMethodTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFactoryMethodTest()
{
	if (!Z_Registration_Info_UClass_AFactoryMethodTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFactoryMethodTest.OuterSingleton, Z_Construct_UClass_AFactoryMethodTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFactoryMethodTest.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AFactoryMethodTest>()
{
	return AFactoryMethodTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryMethodTest);
AFactoryMethodTest::~AFactoryMethodTest() {}
// End Class AFactoryMethodTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_FactoryMethodTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFactoryMethodTest, AFactoryMethodTest::StaticClass, TEXT("AFactoryMethodTest"), &Z_Registration_Info_UClass_AFactoryMethodTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFactoryMethodTest), 3593791037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_FactoryMethodTest_h_4040261191(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_FactoryMethodTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_FactoryMethodTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
