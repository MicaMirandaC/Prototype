// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/Public/FabricaBloquesEstaticos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloquesEstaticos() {}

// Begin Cross Module References
PROTOTYPE_API UClass* Z_Construct_UClass_AFabrica();
PROTOTYPE_API UClass* Z_Construct_UClass_AFabricaBloquesEstaticos();
PROTOTYPE_API UClass* Z_Construct_UClass_AFabricaBloquesEstaticos_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References

// Begin Class AFabricaBloquesEstaticos
void AFabricaBloquesEstaticos::StaticRegisterNativesAFabricaBloquesEstaticos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaBloquesEstaticos);
UClass* Z_Construct_UClass_AFabricaBloquesEstaticos_NoRegister()
{
	return AFabricaBloquesEstaticos::StaticClass();
}
struct Z_Construct_UClass_AFabricaBloquesEstaticos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "FabricaBloquesEstaticos.h" },
		{ "ModuleRelativePath", "Public/FabricaBloquesEstaticos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloquesEstaticos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloquesEstaticos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFabrica,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesEstaticos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloquesEstaticos_Statics::ClassParams = {
	&AFabricaBloquesEstaticos::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesEstaticos_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaBloquesEstaticos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaBloquesEstaticos()
{
	if (!Z_Registration_Info_UClass_AFabricaBloquesEstaticos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaBloquesEstaticos.OuterSingleton, Z_Construct_UClass_AFabricaBloquesEstaticos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaBloquesEstaticos.OuterSingleton;
}
template<> PROTOTYPE_API UClass* StaticClass<AFabricaBloquesEstaticos>()
{
	return AFabricaBloquesEstaticos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloquesEstaticos);
AFabricaBloquesEstaticos::~AFabricaBloquesEstaticos() {}
// End Class AFabricaBloquesEstaticos

// Begin Registration
struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_FabricaBloquesEstaticos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloquesEstaticos, AFabricaBloquesEstaticos::StaticClass, TEXT("AFabricaBloquesEstaticos"), &Z_Registration_Info_UClass_AFabricaBloquesEstaticos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloquesEstaticos), 3585071144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_FabricaBloquesEstaticos_h_544914042(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_FabricaBloquesEstaticos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_FabricaBloquesEstaticos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
