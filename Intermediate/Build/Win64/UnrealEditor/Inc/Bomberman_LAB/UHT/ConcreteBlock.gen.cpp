// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/ConcreteBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcreteBlock() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABasicBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AConcreteBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_AConcreteBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class AConcreteBlock
void AConcreteBlock::StaticRegisterNativesAConcreteBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConcreteBlock);
UClass* Z_Construct_UClass_AConcreteBlock_NoRegister()
{
	return AConcreteBlock::StaticClass();
}
struct Z_Construct_UClass_AConcreteBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConcreteBlock.h" },
		{ "ModuleRelativePath", "Public/ConcreteBlock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcreteBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AConcreteBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasicBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConcreteBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AConcreteBlock_Statics::ClassParams = {
	&AConcreteBlock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConcreteBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_AConcreteBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AConcreteBlock()
{
	if (!Z_Registration_Info_UClass_AConcreteBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConcreteBlock.OuterSingleton, Z_Construct_UClass_AConcreteBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AConcreteBlock.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<AConcreteBlock>()
{
	return AConcreteBlock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AConcreteBlock);
AConcreteBlock::~AConcreteBlock() {}
// End Class AConcreteBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_ConcreteBlock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AConcreteBlock, AConcreteBlock::StaticClass, TEXT("AConcreteBlock"), &Z_Registration_Info_UClass_AConcreteBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConcreteBlock), 2963077542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_ConcreteBlock_h_2304072245(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_ConcreteBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_ConcreteBlock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
