// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/FabricaBloquesTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloquesTest() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AFabricaBloquesTest();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AFabricaBloquesTest_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AFabricaBloquesTest
void AFabricaBloquesTest::StaticRegisterNativesAFabricaBloquesTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaBloquesTest);
UClass* Z_Construct_UClass_AFabricaBloquesTest_NoRegister()
{
	return AFabricaBloquesTest::StaticClass();
}
struct Z_Construct_UClass_AFabricaBloquesTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaBloquesTest.h" },
		{ "ModuleRelativePath", "Public/FabricaBloquesTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloquesTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloquesTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloquesTest_Statics::ClassParams = {
	&AFabricaBloquesTest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaBloquesTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaBloquesTest()
{
	if (!Z_Registration_Info_UClass_AFabricaBloquesTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaBloquesTest.OuterSingleton, Z_Construct_UClass_AFabricaBloquesTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaBloquesTest.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AFabricaBloquesTest>()
{
	return AFabricaBloquesTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloquesTest);
AFabricaBloquesTest::~AFabricaBloquesTest() {}
// End Class AFabricaBloquesTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_FabricaBloquesTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloquesTest, AFabricaBloquesTest::StaticClass, TEXT("AFabricaBloquesTest"), &Z_Registration_Info_UClass_AFabricaBloquesTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloquesTest), 3015809727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_FabricaBloquesTest_h_3469842749(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_FabricaBloquesTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_FabricaBloquesTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
