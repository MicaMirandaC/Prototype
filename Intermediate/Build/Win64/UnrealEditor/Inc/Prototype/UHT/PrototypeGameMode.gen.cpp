// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/PrototypeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloqueBase_NoRegister();
PROTOTYPE_API UClass* Z_Construct_UClass_AFabrica_NoRegister();
PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeGameMode();
PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References

// Begin Class APrototypeGameMode
void APrototypeGameMode::StaticRegisterNativesAPrototypeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrototypeGameMode);
UClass* Z_Construct_UClass_APrototypeGameMode_NoRegister()
{
	return APrototypeGameMode::StaticClass();
}
struct Z_Construct_UClass_APrototypeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PrototypeGameMode.h" },
		{ "ModuleRelativePath", "PrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueBase_MetaData[] = {
		{ "ModuleRelativePath", "PrototypeGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FabricaDeBloquesEstaticos_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FactoryMethodGameMode.h\n" },
#endif
		{ "ModuleRelativePath", "PrototypeGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FactoryMethodGameMode.h" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FabricaDeBloquesMagicos_MetaData[] = {
		{ "ModuleRelativePath", "PrototypeGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloqueBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FabricaDeBloquesEstaticos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FabricaDeBloquesMagicos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrototypeGameMode_Statics::NewProp_BloqueBase = { "BloqueBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrototypeGameMode, BloqueBase), Z_Construct_UClass_ABloqueBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueBase_MetaData), NewProp_BloqueBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrototypeGameMode_Statics::NewProp_FabricaDeBloquesEstaticos = { "FabricaDeBloquesEstaticos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrototypeGameMode, FabricaDeBloquesEstaticos), Z_Construct_UClass_AFabrica_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FabricaDeBloquesEstaticos_MetaData), NewProp_FabricaDeBloquesEstaticos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrototypeGameMode_Statics::NewProp_FabricaDeBloquesMagicos = { "FabricaDeBloquesMagicos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrototypeGameMode, FabricaDeBloquesMagicos), Z_Construct_UClass_AFabrica_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FabricaDeBloquesMagicos_MetaData), NewProp_FabricaDeBloquesMagicos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrototypeGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrototypeGameMode_Statics::NewProp_BloqueBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrototypeGameMode_Statics::NewProp_FabricaDeBloquesEstaticos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrototypeGameMode_Statics::NewProp_FabricaDeBloquesMagicos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APrototypeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrototypeGameMode_Statics::ClassParams = {
	&APrototypeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APrototypeGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APrototypeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrototypeGameMode()
{
	if (!Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton, Z_Construct_UClass_APrototypeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrototypeGameMode.OuterSingleton;
}
template<> PROTOTYPE_API UClass* StaticClass<APrototypeGameMode>()
{
	return APrototypeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeGameMode);
APrototypeGameMode::~APrototypeGameMode() {}
// End Class APrototypeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrototypeGameMode, APrototypeGameMode::StaticClass, TEXT("APrototypeGameMode"), &Z_Registration_Info_UClass_APrototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrototypeGameMode), 722908925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_1082368868(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_PrototypeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
