// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/TestSingleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestSingleton() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AGenerador_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ATestSingleton();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ATestSingleton_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ATestSingleton
void ATestSingleton::StaticRegisterNativesATestSingleton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestSingleton);
UClass* Z_Construct_UClass_ATestSingleton_NoRegister()
{
	return ATestSingleton::StaticClass();
}
struct Z_Construct_UClass_ATestSingleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TestSingleton.h" },
		{ "ModuleRelativePath", "Public/TestSingleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generador_MetaData[] = {
		{ "ModuleRelativePath", "Public/TestSingleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generador;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestSingleton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestSingleton_Statics::NewProp_Generador = { "Generador", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestSingleton, Generador), Z_Construct_UClass_AGenerador_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generador_MetaData), NewProp_Generador_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestSingleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestSingleton_Statics::NewProp_Generador,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestSingleton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestSingleton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestSingleton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestSingleton_Statics::ClassParams = {
	&ATestSingleton::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATestSingleton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestSingleton_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestSingleton_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestSingleton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestSingleton()
{
	if (!Z_Registration_Info_UClass_ATestSingleton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestSingleton.OuterSingleton, Z_Construct_UClass_ATestSingleton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestSingleton.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ATestSingleton>()
{
	return ATestSingleton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestSingleton);
ATestSingleton::~ATestSingleton() {}
// End Class ATestSingleton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestSingleton, ATestSingleton::StaticClass, TEXT("ATestSingleton"), &Z_Registration_Info_UClass_ATestSingleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestSingleton), 2275394492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_2941027395(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_TestSingleton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
