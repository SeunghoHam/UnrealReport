// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef R6S_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define R6S_BaseCharacter_generated_h

#define R6S_Source_R6S_Public_BaseCharacter_h_13_SPARSE_DATA
#define R6S_Source_R6S_Public_BaseCharacter_h_13_RPC_WRAPPERS
#define R6S_Source_R6S_Public_BaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define R6S_Source_R6S_Public_BaseCharacter_h_13_EVENT_PARMS
#define R6S_Source_R6S_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS
#define R6S_Source_R6S_Public_BaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/R6S"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=WeaponActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define R6S_Source_R6S_Public_BaseCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/R6S"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=WeaponActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define R6S_Source_R6S_Public_BaseCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define R6S_Source_R6S_Public_BaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define R6S_Source_R6S_Public_BaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponActor() { return STRUCT_OFFSET(ABaseCharacter, WeaponActor); }


#define R6S_Source_R6S_Public_BaseCharacter_h_10_PROLOG \
	R6S_Source_R6S_Public_BaseCharacter_h_13_EVENT_PARMS


#define R6S_Source_R6S_Public_BaseCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	R6S_Source_R6S_Public_BaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	R6S_Source_R6S_Public_BaseCharacter_h_13_SPARSE_DATA \
	R6S_Source_R6S_Public_BaseCharacter_h_13_RPC_WRAPPERS \
	R6S_Source_R6S_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS \
	R6S_Source_R6S_Public_BaseCharacter_h_13_INCLASS \
	R6S_Source_R6S_Public_BaseCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define R6S_Source_R6S_Public_BaseCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	R6S_Source_R6S_Public_BaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	R6S_Source_R6S_Public_BaseCharacter_h_13_SPARSE_DATA \
	R6S_Source_R6S_Public_BaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	R6S_Source_R6S_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS \
	R6S_Source_R6S_Public_BaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
	R6S_Source_R6S_Public_BaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> R6S_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID R6S_Source_R6S_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
