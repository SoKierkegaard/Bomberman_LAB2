// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Director_Builder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirector_Builder() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ADirector_Builder();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ADirector_Builder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ADirector_Builder
void ADirector_Builder::StaticRegisterNativesADirector_Builder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirector_Builder);
UClass* Z_Construct_UClass_ADirector_Builder_NoRegister()
{
	return ADirector_Builder::StaticClass();
}
struct Z_Construct_UClass_ADirector_Builder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Director_Builder.h" },
		{ "ModuleRelativePath", "Public/Director_Builder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirector_Builder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADirector_Builder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirector_Builder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirector_Builder_Statics::ClassParams = {
	&ADirector_Builder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirector_Builder_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirector_Builder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADirector_Builder()
{
	if (!Z_Registration_Info_UClass_ADirector_Builder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirector_Builder.OuterSingleton, Z_Construct_UClass_ADirector_Builder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADirector_Builder.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ADirector_Builder>()
{
	return ADirector_Builder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADirector_Builder);
ADirector_Builder::~ADirector_Builder() {}
// End Class ADirector_Builder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Director_Builder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADirector_Builder, ADirector_Builder::StaticClass, TEXT("ADirector_Builder"), &Z_Registration_Info_UClass_ADirector_Builder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirector_Builder), 3096352632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Director_Builder_h_3216953219(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Director_Builder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Director_Builder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
