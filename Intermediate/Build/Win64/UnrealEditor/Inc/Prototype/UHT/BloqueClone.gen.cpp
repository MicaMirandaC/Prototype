// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/Public/BloqueClone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueClone() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloqueClone();
PROTOTYPE_API UClass* Z_Construct_UClass_ABloqueClone_NoRegister();
UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References

// Begin Class ABloqueClone
void ABloqueClone::StaticRegisterNativesABloqueClone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueClone);
UClass* Z_Construct_UClass_ABloqueClone_NoRegister()
{
	return ABloqueClone::StaticClass();
}
struct Z_Construct_UClass_ABloqueClone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueClone.h" },
		{ "ModuleRelativePath", "Public/BloqueClone.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueClone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueClone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueClone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueClone_Statics::ClassParams = {
	&ABloqueClone::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueClone_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueClone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueClone()
{
	if (!Z_Registration_Info_UClass_ABloqueClone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueClone.OuterSingleton, Z_Construct_UClass_ABloqueClone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueClone.OuterSingleton;
}
template<> PROTOTYPE_API UClass* StaticClass<ABloqueClone>()
{
	return ABloqueClone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueClone);
ABloqueClone::~ABloqueClone() {}
// End Class ABloqueClone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueClone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueClone, ABloqueClone::StaticClass, TEXT("ABloqueClone"), &Z_Registration_Info_UClass_ABloqueClone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueClone), 1369567163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueClone_h_2649353109(TEXT("/Script/Prototype"),
	Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueClone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Prototype_Source_Prototype_Public_BloqueClone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
