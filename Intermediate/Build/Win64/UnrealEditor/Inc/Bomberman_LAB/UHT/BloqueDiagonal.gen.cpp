// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BloqueDiagonal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueDiagonal() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueDiagonal();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABloqueDiagonal_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABloqueDiagonal
void ABloqueDiagonal::StaticRegisterNativesABloqueDiagonal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueDiagonal);
UClass* Z_Construct_UClass_ABloqueDiagonal_NoRegister()
{
	return ABloqueDiagonal::StaticClass();
}
struct Z_Construct_UClass_ABloqueDiagonal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "BloqueDiagonal.h" },
		{ "ModuleRelativePath", "Public/BloqueDiagonal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueDiagonal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueDiagonal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDiagonal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueDiagonal_Statics::ClassParams = {
	&ABloqueDiagonal::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDiagonal_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueDiagonal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueDiagonal()
{
	if (!Z_Registration_Info_UClass_ABloqueDiagonal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueDiagonal.OuterSingleton, Z_Construct_UClass_ABloqueDiagonal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueDiagonal.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABloqueDiagonal>()
{
	return ABloqueDiagonal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueDiagonal);
ABloqueDiagonal::~ABloqueDiagonal() {}
// End Class ABloqueDiagonal

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueDiagonal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueDiagonal, ABloqueDiagonal::StaticClass, TEXT("ABloqueDiagonal"), &Z_Registration_Info_UClass_ABloqueDiagonal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueDiagonal), 3851130553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueDiagonal_h_1018353646(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueDiagonal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BloqueDiagonal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
