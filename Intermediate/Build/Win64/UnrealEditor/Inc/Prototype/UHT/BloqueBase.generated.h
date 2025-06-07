// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE_BloqueBase_generated_h
#error "BloqueBase.generated.h already included, missing '#pragma once' in BloqueBase.h"
#endif
#define PROTOTYPE_BloqueBase_generated_h

#define FID_Prototype_Source_Prototype_Public_BloqueBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueBase(); \
	friend struct Z_Construct_UClass_ABloqueBase_Statics; \
public: \
	DECLARE_CLASS(ABloqueBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), NO_API) \
	DECLARE_SERIALIZER(ABloqueBase) \
	virtual UObject* _getUObject() const override { return const_cast<ABloqueBase*>(this); }


#define FID_Prototype_Source_Prototype_Public_BloqueBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueBase(ABloqueBase&&); \
	ABloqueBase(const ABloqueBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueBase) \
	NO_API virtual ~ABloqueBase();


#define FID_Prototype_Source_Prototype_Public_BloqueBase_h_9_PROLOG
#define FID_Prototype_Source_Prototype_Public_BloqueBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Prototype_Source_Prototype_Public_BloqueBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Prototype_Source_Prototype_Public_BloqueBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE_API UClass* StaticClass<class ABloqueBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Prototype_Source_Prototype_Public_BloqueBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
