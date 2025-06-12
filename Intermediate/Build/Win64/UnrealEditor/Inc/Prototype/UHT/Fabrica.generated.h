// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fabrica.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE_Fabrica_generated_h
#error "Fabrica.generated.h already included, missing '#pragma once' in Fabrica.h"
#endif
#define PROTOTYPE_Fabrica_generated_h

#define FID_Prototype_Source_Prototype_Public_Fabrica_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFabrica(); \
	friend struct Z_Construct_UClass_AFabrica_Statics; \
public: \
	DECLARE_CLASS(AFabrica, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), NO_API) \
	DECLARE_SERIALIZER(AFabrica)


#define FID_Prototype_Source_Prototype_Public_Fabrica_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFabrica(AFabrica&&); \
	AFabrica(const AFabrica&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFabrica); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFabrica); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFabrica) \
	NO_API virtual ~AFabrica();


#define FID_Prototype_Source_Prototype_Public_Fabrica_h_9_PROLOG
#define FID_Prototype_Source_Prototype_Public_Fabrica_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Prototype_Source_Prototype_Public_Fabrica_h_12_INCLASS_NO_PURE_DECLS \
	FID_Prototype_Source_Prototype_Public_Fabrica_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE_API UClass* StaticClass<class AFabrica>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Prototype_Source_Prototype_Public_Fabrica_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
