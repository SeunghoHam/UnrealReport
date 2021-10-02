// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef R6S_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define R6S_Gun_generated_h

#define R6S_Source_R6S_Public_Gun_h_12_SPARSE_DATA
#define R6S_Source_R6S_Public_Gun_h_12_RPC_WRAPPERS \
	virtual FVector GetMuzzleLocation_Implementation() const; \
	virtual void MulticastFire_Implementation(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetMuzzleLocation); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire);


#define R6S_Source_R6S_Public_Gun_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetMuzzleLocation_Implementation() const; \
	virtual void MulticastFire_Implementation(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetMuzzleLocation); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire);


#define R6S_Source_R6S_Public_Gun_h_12_EVENT_PARMS \
	struct Gun_eventGetMuzzleLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Gun_eventGetMuzzleLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define R6S_Source_R6S_Public_Gun_h_12_CALLBACK_WRAPPERS
#define R6S_Source_R6S_Public_Gun_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/R6S"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define R6S_Source_R6S_Public_Gun_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/R6S"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define R6S_Source_R6S_Public_Gun_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public:


#define R6S_Source_R6S_Public_Gun_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGun)


#define R6S_Source_R6S_Public_Gun_h_12_PRIVATE_PROPERTY_OFFSET
#define R6S_Source_R6S_Public_Gun_h_9_PROLOG \
	R6S_Source_R6S_Public_Gun_h_12_EVENT_PARMS


#define R6S_Source_R6S_Public_Gun_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	R6S_Source_R6S_Public_Gun_h_12_PRIVATE_PROPERTY_OFFSET \
	R6S_Source_R6S_Public_Gun_h_12_SPARSE_DATA \
	R6S_Source_R6S_Public_Gun_h_12_RPC_WRAPPERS \
	R6S_Source_R6S_Public_Gun_h_12_CALLBACK_WRAPPERS \
	R6S_Source_R6S_Public_Gun_h_12_INCLASS \
	R6S_Source_R6S_Public_Gun_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define R6S_Source_R6S_Public_Gun_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	R6S_Source_R6S_Public_Gun_h_12_PRIVATE_PROPERTY_OFFSET \
	R6S_Source_R6S_Public_Gun_h_12_SPARSE_DATA \
	R6S_Source_R6S_Public_Gun_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	R6S_Source_R6S_Public_Gun_h_12_CALLBACK_WRAPPERS \
	R6S_Source_R6S_Public_Gun_h_12_INCLASS_NO_PURE_DECLS \
	R6S_Source_R6S_Public_Gun_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> R6S_API UClass* StaticClass<class AGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID R6S_Source_R6S_Public_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
