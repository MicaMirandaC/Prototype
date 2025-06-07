// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/Public/BloqueBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloqueBase();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloqueBase_NoRegister();
PROTOTYPE_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References

// Begin Class ABloqueBase
void ABloqueBase::StaticRegisterNativesABloqueBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBase);
UClass* Z_Construct_UClass_ABloqueBase_NoRegister()
{
	return ABloqueBase::StaticClass();
}
struct Z_Construct_UClass_ABloqueBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueBase.h" },
		{ "ModuleRelativePath", "Public/BloqueBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBloqueBase_MetaData[] = {
		{ "Category", "Componentes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Propiedades:\n// Componente de malla est\xef\xbf\xbdtica\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloqueBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propiedades:\n Componente de malla est\xef\xbf\xbdtica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBloqueBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueBase_Statics::NewProp_MallaBloqueBase = { "MallaBloqueBase", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBase, MallaBloqueBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBloqueBase_MetaData), NewProp_MallaBloqueBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBase_Statics::NewProp_MallaBloqueBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(ABloqueBase, IIPrototype), false },  // 3899946401
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBase_Statics::ClassParams = {
	&ABloqueBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBase()
{
	if (!Z_Registration_Info_UClass_ABloqueBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBase.OuterSingleton, Z_Construct_UClass_ABloqueBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBase.OuterSingleton;
}
template<> PROTOTYPE_API UClass* StaticClass<ABloqueBase>()
{
	return ABloqueBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBase);
ABloqueBase::~ABloqueBase() {}
// End Class ABloqueBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBase, ABloqueBase::StaticClass, TEXT("ABloqueBase"), &Z_Registration_Info_UClass_ABloqueBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBase), 369684753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueBase_h_2240083707(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
