// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PrototypeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE_PrototypeCharacter_generated_h
#error "PrototypeCharacter.generated.h already included, missing '#pragma once' in PrototypeCharacter.h"
#endif
#define PROTOTYPE_PrototypeCharacter_generated_h

#define FID_Prototype_Source_Prototype_PrototypeCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypeCharacter(); \
	friend struct Z_Construct_UClass_APrototypeCharacter_Statics; \
public: \
	DECLARE_CLASS(APrototypeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), NO_API) \
	DECLARE_SERIALIZER(APrototypeCharacter)


#define FID_Prototype_Source_Prototype_PrototypeCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APrototypeCharacter(APrototypeCharacter&&); \
	APrototypeCharacter(const APrototypeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypeCharacter) \
	NO_API virtual ~APrototypeCharacter();


#define FID_Prototype_Source_Prototype_PrototypeCharacter_h_18_PROLOG
#define FID_Prototype_Source_Prototype_PrototypeCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Prototype_Source_Prototype_PrototypeCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Prototype_Source_Prototype_PrototypeCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE_API UClass* StaticClass<class APrototypeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Prototype_Source_Prototype_PrototypeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
