// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Builder_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Test() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABuilder_Test();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABuilder_Test_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABuilder_Test
void ABuilder_Test::StaticRegisterNativesABuilder_Test()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder_Test);
UClass* Z_Construct_UClass_ABuilder_Test_NoRegister()
{
	return ABuilder_Test::StaticClass();
}
struct Z_Construct_UClass_ABuilder_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Test.h" },
		{ "ModuleRelativePath", "Public/Builder_Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABuilder_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_Test_Statics::ClassParams = {
	&ABuilder_Test::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder_Test()
{
	if (!Z_Registration_Info_UClass_ABuilder_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder_Test.OuterSingleton, Z_Construct_UClass_ABuilder_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder_Test.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABuilder_Test>()
{
	return ABuilder_Test::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder_Test);
ABuilder_Test::~ABuilder_Test() {}
// End Class ABuilder_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Builder_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder_Test, ABuilder_Test::StaticClass, TEXT("ABuilder_Test"), &Z_Registration_Info_UClass_ABuilder_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder_Test), 1017949285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Builder_Test_h_2872574828(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Builder_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Builder_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
