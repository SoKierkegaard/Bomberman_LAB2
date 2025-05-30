// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_LAB/Public/BasicBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicBlock() {}

// Begin Cross Module References
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABasicBlock();
BOMBERMAN_LAB_API UClass* Z_Construct_UClass_ABasicBlock_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_LAB();
// End Cross Module References

// Begin Class ABasicBlock
void ABasicBlock::StaticRegisterNativesABasicBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicBlock);
UClass* Z_Construct_UClass_ABasicBlock_NoRegister()
{
	return ABasicBlock::StaticClass();
}
struct Z_Construct_UClass_ABasicBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BasicBlock.h" },
		{ "ModuleRelativePath", "Public/BasicBlock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABasicBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_LAB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicBlock_Statics::ClassParams = {
	&ABasicBlock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasicBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasicBlock()
{
	if (!Z_Registration_Info_UClass_ABasicBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicBlock.OuterSingleton, Z_Construct_UClass_ABasicBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasicBlock.OuterSingleton;
}
template<> BOMBERMAN_LAB_API UClass* StaticClass<ABasicBlock>()
{
	return ABasicBlock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicBlock);
ABasicBlock::~ABasicBlock() {}
// End Class ABasicBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BasicBlock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasicBlock, ABasicBlock::StaticClass, TEXT("ABasicBlock"), &Z_Registration_Info_UClass_ABasicBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicBlock), 2636087022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BasicBlock_h_3933627685(TEXT("/Script/Bomberman_LAB"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BasicBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Bomberman_LAB_Source_Bomberman_LAB_Public_BasicBlock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
