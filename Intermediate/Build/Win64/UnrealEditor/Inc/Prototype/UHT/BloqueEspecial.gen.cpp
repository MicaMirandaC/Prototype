// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/Public/BloqueEspecial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueEspecial() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloqueEspecial();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloqueEspecial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References

// Begin Class ABloqueEspecial
void ABloqueEspecial::StaticRegisterNativesABloqueEspecial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueEspecial);
UClass* Z_Construct_UClass_ABloqueEspecial_NoRegister()
{
	return ABloqueEspecial::StaticClass();
}
struct Z_Construct_UClass_ABloqueEspecial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueEspecial.h" },
		{ "ModuleRelativePath", "Public/BloqueEspecial.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueEspecial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueEspecial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEspecial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueEspecial_Statics::ClassParams = {
	&ABloqueEspecial::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEspecial_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueEspecial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueEspecial()
{
	if (!Z_Registration_Info_UClass_ABloqueEspecial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueEspecial.OuterSingleton, Z_Construct_UClass_ABloqueEspecial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueEspecial.OuterSingleton;
}
template<> PROTOTYPE_API UClass* StaticClass<ABloqueEspecial>()
{
	return ABloqueEspecial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueEspecial);
ABloqueEspecial::~ABloqueEspecial() {}
// End Class ABloqueEspecial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueEspecial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueEspecial, ABloqueEspecial::StaticClass, TEXT("ABloqueEspecial"), &Z_Registration_Info_UClass_ABloqueEspecial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueEspecial), 2587281988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueEspecial_h_860291460(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueEspecial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueEspecial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
