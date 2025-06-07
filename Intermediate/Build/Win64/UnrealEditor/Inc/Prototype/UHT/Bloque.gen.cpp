// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/Public/Bloque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloque_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References

// Begin Class ABloque
void ABloque::StaticRegisterNativesABloque()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque);
UClass* Z_Construct_UClass_ABloque_NoRegister()
{
	return ABloque::StaticClass();
}
struct Z_Construct_UClass_ABloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque.h" },
		{ "ModuleRelativePath", "Public/Bloque.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Statics::ClassParams = {
	&ABloque::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque()
{
	if (!Z_Registration_Info_UClass_ABloque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque.OuterSingleton, Z_Construct_UClass_ABloque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque.OuterSingleton;
}
template<> PROTOTYPE_API UClass* StaticClass<ABloque>()
{
	return ABloque::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque);
ABloque::~ABloque() {}
// End Class ABloque

// Begin Registration
struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_Bloque_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque, ABloque::StaticClass, TEXT("ABloque"), &Z_Registration_Info_UClass_ABloque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque), 4102753837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_Bloque_h_1666527177(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_Bloque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_Bloque_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
