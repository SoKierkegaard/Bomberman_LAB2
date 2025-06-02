// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/IBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBuilder() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AIBuilder();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AIBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AIBuilder
void AIBuilder::StaticRegisterNativesAIBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIBuilder);
UClass* Z_Construct_UClass_AIBuilder_NoRegister()
{
	return AIBuilder::StaticClass();
}
struct Z_Construct_UClass_AIBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Examen/IBuilder.h" },
		{ "ModuleRelativePath", "Builder_Examen/IBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIBuilder_Statics::ClassParams = {
	&AIBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_AIBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIBuilder()
{
	if (!Z_Registration_Info_UClass_AIBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIBuilder.OuterSingleton, Z_Construct_UClass_AIBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIBuilder.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AIBuilder>()
{
	return AIBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIBuilder);
AIBuilder::~AIBuilder() {}
// End Class AIBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_IBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIBuilder, AIBuilder::StaticClass, TEXT("AIBuilder"), &Z_Registration_Info_UClass_AIBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIBuilder), 2843236658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_IBuilder_h_3117633551(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_IBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_IBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
