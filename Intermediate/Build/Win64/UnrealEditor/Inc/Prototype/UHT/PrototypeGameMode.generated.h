// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PrototypeGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE_PrototypeGameMode_generated_h
#error "PrototypeGameMode.generated.h already included, missing '#pragma once' in PrototypeGameMode.h"
#endif
#define PROTOTYPE_PrototypeGameMode_generated_h

#define FID_Prototype_Source_Prototype_PrototypeGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypeGameMode(); \
	friend struct Z_Construct_UClass_APrototypeGameMode_Statics; \
public: \
	DECLARE_CLASS(APrototypeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), PROTOTYPE_API) \
	DECLARE_SERIALIZER(APrototypeGameMode)


#define FID_Prototype_Source_Prototype_PrototypeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APrototypeGameMode(APrototypeGameMode&&); \
	APrototypeGameMode(const APrototypeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROTOTYPE_API, APrototypeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypeGameMode) \
	PROTOTYPE_API virtual ~APrototypeGameMode();


#define FID_Prototype_Source_Prototype_PrototypeGameMode_h_9_PROLOG
#define FID_Prototype_Source_Prototype_PrototypeGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Prototype_Source_Prototype_PrototypeGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Prototype_Source_Prototype_PrototypeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE_API UClass* StaticClass<class APrototypeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Prototype_Source_Prototype_PrototypeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
