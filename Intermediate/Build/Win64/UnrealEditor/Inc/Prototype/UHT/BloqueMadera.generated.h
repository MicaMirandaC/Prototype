// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueMadera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE_BloqueMadera_generated_h
#error "BloqueMadera.generated.h already included, missing '#pragma once' in BloqueMadera.h"
#endif
#define PROTOTYPE_BloqueMadera_generated_h

#define FID_Prototype_Source_Prototype_Public_BloqueMadera_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueMadera(); \
	friend struct Z_Construct_UClass_ABloqueMadera_Statics; \
public: \
	DECLARE_CLASS(ABloqueMadera, ABloque, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), NO_API) \
	DECLARE_SERIALIZER(ABloqueMadera)


#define FID_Prototype_Source_Prototype_Public_BloqueMadera_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABloqueMadera(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueMadera(ABloqueMadera&&); \
	ABloqueMadera(const ABloqueMadera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueMadera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueMadera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueMadera) \
	NO_API virtual ~ABloqueMadera();


#define FID_Prototype_Source_Prototype_Public_BloqueMadera_h_12_PROLOG
#define FID_Prototype_Source_Prototype_Public_BloqueMadera_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Prototype_Source_Prototype_Public_BloqueMadera_h_15_INCLASS_NO_PURE_DECLS \
	FID_Prototype_Source_Prototype_Public_BloqueMadera_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE_API UClass* StaticClass<class ABloqueMadera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Prototype_Source_Prototype_Public_BloqueMadera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
