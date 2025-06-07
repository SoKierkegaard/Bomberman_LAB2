// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/Builder2_Examen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder2_Examen() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABuilder2_Examen();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABuilder2_Examen_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABuilder2_Examen
void ABuilder2_Examen::StaticRegisterNativesABuilder2_Examen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder2_Examen);
UClass* Z_Construct_UClass_ABuilder2_Examen_NoRegister()
{
	return ABuilder2_Examen::StaticClass();
}
struct Z_Construct_UClass_ABuilder2_Examen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder2_Examen.h" },
		{ "ModuleRelativePath", "Public/Builder2_Examen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder2_Examen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABuilder2_Examen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder2_Examen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder2_Examen_Statics::ClassParams = {
	&ABuilder2_Examen::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder2_Examen_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder2_Examen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder2_Examen()
{
	if (!Z_Registration_Info_UClass_ABuilder2_Examen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder2_Examen.OuterSingleton, Z_Construct_UClass_ABuilder2_Examen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder2_Examen.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABuilder2_Examen>()
{
	return ABuilder2_Examen::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder2_Examen);
ABuilder2_Examen::~ABuilder2_Examen() {}
// End Class ABuilder2_Examen

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Builder2_Examen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder2_Examen, ABuilder2_Examen::StaticClass, TEXT("ABuilder2_Examen"), &Z_Registration_Info_UClass_ABuilder2_Examen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder2_Examen), 2827279486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Builder2_Examen_h_1252353559(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Builder2_Examen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_Builder2_Examen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
