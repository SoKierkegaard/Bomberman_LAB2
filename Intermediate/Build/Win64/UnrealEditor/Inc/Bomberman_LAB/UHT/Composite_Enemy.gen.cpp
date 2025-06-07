// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Composite_LAB/Composite_Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposite_Enemy() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AComposite_Enemy();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AComposite_Enemy_NoRegister();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_UIPartes_Enemigo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AComposite_Enemy
void AComposite_Enemy::StaticRegisterNativesAComposite_Enemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComposite_Enemy);
UClass* Z_Construct_UClass_AComposite_Enemy_NoRegister()
{
	return AComposite_Enemy::StaticClass();
}
struct Z_Construct_UClass_AComposite_Enemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Composite_LAB/Composite_Enemy.h" },
		{ "ModuleRelativePath", "Composite_LAB/Composite_Enemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComposite_Enemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AComposite_Enemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComposite_Enemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AComposite_Enemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPartes_Enemigo_NoRegister, (int32)VTABLE_OFFSET(AComposite_Enemy, IIPartes_Enemigo), false },  // 3198075733
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AComposite_Enemy_Statics::ClassParams = {
	&AComposite_Enemy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AComposite_Enemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AComposite_Enemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AComposite_Enemy()
{
	if (!Z_Registration_Info_UClass_AComposite_Enemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComposite_Enemy.OuterSingleton, Z_Construct_UClass_AComposite_Enemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AComposite_Enemy.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AComposite_Enemy>()
{
	return AComposite_Enemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AComposite_Enemy);
AComposite_Enemy::~AComposite_Enemy() {}
// End Class AComposite_Enemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AComposite_Enemy, AComposite_Enemy::StaticClass, TEXT("AComposite_Enemy"), &Z_Registration_Info_UClass_AComposite_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComposite_Enemy), 3285521045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_2233917840(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Composite_LAB_Composite_Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
