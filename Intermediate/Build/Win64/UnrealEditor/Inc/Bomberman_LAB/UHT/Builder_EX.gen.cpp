// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Builder_Examen/Builder_EX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_EX() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABuilder_EX();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABuilder_EX_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIBuilder_Ejercito_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABuilder_EX
void ABuilder_EX::StaticRegisterNativesABuilder_EX()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder_EX);
UClass* Z_Construct_UClass_ABuilder_EX_NoRegister()
{
	return ABuilder_EX::StaticClass();
}
struct Z_Construct_UClass_ABuilder_EX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Examen/Builder_EX.h" },
		{ "ModuleRelativePath", "Builder_Examen/Builder_EX.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder_EX>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABuilder_EX_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_EX_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilder_EX_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBuilder_Ejercito_NoRegister, (int32)VTABLE_OFFSET(ABuilder_EX, IIBuilder_Ejercito), false },  // 1393420716
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_EX_Statics::ClassParams = {
	&ABuilder_EX::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_EX_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder_EX_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder_EX()
{
	if (!Z_Registration_Info_UClass_ABuilder_EX.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder_EX.OuterSingleton, Z_Construct_UClass_ABuilder_EX_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder_EX.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABuilder_EX>()
{
	return ABuilder_EX::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder_EX);
ABuilder_EX::~ABuilder_EX() {}
// End Class ABuilder_EX

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Builder_EX_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder_EX, ABuilder_EX::StaticClass, TEXT("ABuilder_EX"), &Z_Registration_Info_UClass_ABuilder_EX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder_EX), 3663931267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Builder_EX_h_2518330662(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Builder_EX_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Builder_Examen_Builder_EX_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
