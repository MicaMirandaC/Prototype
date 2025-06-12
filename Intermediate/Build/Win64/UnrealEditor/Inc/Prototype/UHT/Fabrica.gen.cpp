// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/Public/Fabrica.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabrica() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROTOTYPE_API UClass* Z_Construct_UClass_AFabrica();
PROTOTYPE_API UClass* Z_Construct_UClass_AFabrica_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References

// Begin Class AFabrica
void AFabrica::StaticRegisterNativesAFabrica()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabrica);
UClass* Z_Construct_UClass_AFabrica_NoRegister()
{
	return AFabrica::StaticClass();
}
struct Z_Construct_UClass_AFabrica_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Fabrica.h" },
		{ "ModuleRelativePath", "Public/Fabrica.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabrica>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabrica_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabrica_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabrica_Statics::ClassParams = {
	&AFabrica::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabrica_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabrica_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabrica()
{
	if (!Z_Registration_Info_UClass_AFabrica.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabrica.OuterSingleton, Z_Construct_UClass_AFabrica_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabrica.OuterSingleton;
}
template<> PROTOTYPE_API UClass* StaticClass<AFabrica>()
{
	return AFabrica::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabrica);
AFabrica::~AFabrica() {}
// End Class AFabrica

// Begin Registration
struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_Fabrica_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabrica, AFabrica::StaticClass, TEXT("AFabrica"), &Z_Registration_Info_UClass_AFabrica, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabrica), 1174588198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_Fabrica_h_2512570732(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_Fabrica_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_Fabrica_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
