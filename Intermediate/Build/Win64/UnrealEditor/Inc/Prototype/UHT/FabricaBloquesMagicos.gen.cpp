// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/Public/FabricaBloquesMagicos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloquesMagicos() {}

// Begin Cross Module References
PROTOTYPE_API UClass* Z_Construct_UClass_AFabrica();
PROTOTYPE_API UClass* Z_Construct_UClass_AFabricaBloquesMagicos();
PROTOTYPE_API UClass* Z_Construct_UClass_AFabricaBloquesMagicos_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References

// Begin Class AFabricaBloquesMagicos
void AFabricaBloquesMagicos::StaticRegisterNativesAFabricaBloquesMagicos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaBloquesMagicos);
UClass* Z_Construct_UClass_AFabricaBloquesMagicos_NoRegister()
{
	return AFabricaBloquesMagicos::StaticClass();
}
struct Z_Construct_UClass_AFabricaBloquesMagicos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "FabricaBloquesMagicos.h" },
		{ "ModuleRelativePath", "Public/FabricaBloquesMagicos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloquesMagicos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloquesMagicos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFabrica,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesMagicos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloquesMagicos_Statics::ClassParams = {
	&AFabricaBloquesMagicos::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesMagicos_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaBloquesMagicos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaBloquesMagicos()
{
	if (!Z_Registration_Info_UClass_AFabricaBloquesMagicos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaBloquesMagicos.OuterSingleton, Z_Construct_UClass_AFabricaBloquesMagicos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaBloquesMagicos.OuterSingleton;
}
template<> PROTOTYPE_API UClass* StaticClass<AFabricaBloquesMagicos>()
{
	return AFabricaBloquesMagicos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloquesMagicos);
AFabricaBloquesMagicos::~AFabricaBloquesMagicos() {}
// End Class AFabricaBloquesMagicos

// Begin Registration
struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_FabricaBloquesMagicos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloquesMagicos, AFabricaBloquesMagicos::StaticClass, TEXT("AFabricaBloquesMagicos"), &Z_Registration_Info_UClass_AFabricaBloquesMagicos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloquesMagicos), 672114497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_FabricaBloquesMagicos_h_4213264786(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_FabricaBloquesMagicos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_FabricaBloquesMagicos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
