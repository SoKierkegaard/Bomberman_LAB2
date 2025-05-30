// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/PrototypeConcrete.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeConcrete() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_APrototypeConcrete();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_APrototypeConcrete_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPrototype_Test_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class APrototypeConcrete
void APrototypeConcrete::StaticRegisterNativesAPrototypeConcrete()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrototypeConcrete);
UClass* Z_Construct_UClass_APrototypeConcrete_NoRegister()
{
	return APrototypeConcrete::StaticClass();
}
struct Z_Construct_UClass_APrototypeConcrete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PrototypeConcrete.h" },
		{ "ModuleRelativePath", "Public/PrototypeConcrete.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeConcrete>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APrototypeConcrete_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeConcrete_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APrototypeConcrete_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_Test_NoRegister, (int32)VTABLE_OFFSET(APrototypeConcrete, IIPrototype_Test), false },  // 2594365474
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrototypeConcrete_Statics::ClassParams = {
	&APrototypeConcrete::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeConcrete_Statics::Class_MetaDataParams), Z_Construct_UClass_APrototypeConcrete_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrototypeConcrete()
{
	if (!Z_Registration_Info_UClass_APrototypeConcrete.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrototypeConcrete.OuterSingleton, Z_Construct_UClass_APrototypeConcrete_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrototypeConcrete.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<APrototypeConcrete>()
{
	return APrototypeConcrete::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeConcrete);
APrototypeConcrete::~APrototypeConcrete() {}
// End Class APrototypeConcrete

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_PrototypeConcrete_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrototypeConcrete, APrototypeConcrete::StaticClass, TEXT("APrototypeConcrete"), &Z_Registration_Info_UClass_APrototypeConcrete, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrototypeConcrete), 1347637283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_PrototypeConcrete_h_2841079159(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_PrototypeConcrete_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_PrototypeConcrete_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
