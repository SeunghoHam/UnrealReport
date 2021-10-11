// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "R6S/Public/Gun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	R6S_API UClass* Z_Construct_UClass_AGun_NoRegister();
	R6S_API UClass* Z_Construct_UClass_AGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_R6S();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AGun::execMulticastFire)
	{
		P_GET_UBOOL(Z_Param_NeedIncludeAutonomousProxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation(Z_Param_NeedIncludeAutonomousProxy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execServerFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execGetMuzzleLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMuzzleLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execIsStartedReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStartedReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execCanReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanFire();
		P_NATIVE_END;
	}
	static FName NAME_AGun_GetMuzzleLocation = FName(TEXT("GetMuzzleLocation"));
	FVector AGun::GetMuzzleLocation() const
	{
		Gun_eventGetMuzzleLocation_Parms Parms;
		const_cast<AGun*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGun_GetMuzzleLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGun_IsStartedReload = FName(TEXT("IsStartedReload"));
	bool AGun::IsStartedReload() const
	{
		Gun_eventIsStartedReload_Parms Parms;
		const_cast<AGun*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGun_IsStartedReload),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGun_MulticastFire = FName(TEXT("MulticastFire"));
	void AGun::MulticastFire(bool NeedIncludeAutonomousProxy)
	{
		Gun_eventMulticastFire_Parms Parms;
		Parms.NeedIncludeAutonomousProxy=NeedIncludeAutonomousProxy ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGun_MulticastFire),&Parms);
	}
	static FName NAME_AGun_OnFire = FName(TEXT("OnFire"));
	void AGun::OnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_OnFire),NULL);
	}
	static FName NAME_AGun_OnStartReload = FName(TEXT("OnStartReload"));
	void AGun::OnStartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_OnStartReload),NULL);
	}
	static FName NAME_AGun_ServerFire = FName(TEXT("ServerFire"));
	void AGun::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_ServerFire),NULL);
	}
	void AGun::StaticRegisterNativesAGun()
	{
		UClass* Class = AGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanFire", &AGun::execCanFire },
			{ "CanReload", &AGun::execCanReload },
			{ "GetMuzzleLocation", &AGun::execGetMuzzleLocation },
			{ "IsStartedReload", &AGun::execIsStartedReload },
			{ "MulticastFire", &AGun::execMulticastFire },
			{ "ServerFire", &AGun::execServerFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGun_CanFire_Statics
	{
		struct Gun_eventCanFire_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGun_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventCanFire_Parms), &Z_Construct_UFunction_AGun_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_CanFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_CanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_CanFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \xed\x98\x84\xec\x9e\xac \xeb\xb0\x9c\xec\x82\xac \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c\xec\xa7\x80 \xec\xb2\xb4\xed\x81\xac\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98 */" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\xb0\x9c\xec\x82\xac \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c\xec\xa7\x80 \xec\xb2\xb4\xed\x81\xac\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "CanFire", nullptr, nullptr, sizeof(Gun_eventCanFire_Parms), Z_Construct_UFunction_AGun_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_CanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_CanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_CanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_CanReload_Statics
	{
		struct Gun_eventCanReload_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventCanReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventCanReload_Parms), &Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* \xed\x98\x84\xec\x9e\xac \xeb\xa6\xac\xeb\xa1\x9c\xeb\x94\xa9 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\xa7\x80 \xec\xb2\xb4\xed\x81\xac\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98 */" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\xa6\xac\xeb\xa1\x9c\xeb\x94\xa9 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\xa7\x80 \xec\xb2\xb4\xed\x81\xac\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_CanReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "CanReload", nullptr, nullptr, sizeof(Gun_eventCanReload_Parms), Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_CanReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_CanReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventGetMuzzleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* \xec\xb4\x9d\xec\x95\x8c\xec\x9d\xb4 \xeb\xb0\x9c\xec\x82\xac\xeb\x90\xa0 \xec\x9c\x84\xec\xb9\x98 \xeb\xb0\x98\xed\x99\x98 */" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xec\xb4\x9d\xec\x95\x8c\xec\x9d\xb4 \xeb\xb0\x9c\xec\x82\xac\xeb\x90\xa0 \xec\x9c\x84\xec\xb9\x98 \xeb\xb0\x98\xed\x99\x98" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "GetMuzzleLocation", nullptr, nullptr, sizeof(Gun_eventGetMuzzleLocation_Parms), Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_GetMuzzleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_IsStartedReload_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGun_IsStartedReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventIsStartedReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_IsStartedReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventIsStartedReload_Parms), &Z_Construct_UFunction_AGun_IsStartedReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_IsStartedReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_IsStartedReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_IsStartedReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_IsStartedReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "IsStartedReload", nullptr, nullptr, sizeof(Gun_eventIsStartedReload_Parms), Z_Construct_UFunction_AGun_IsStartedReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_IsStartedReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_IsStartedReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_IsStartedReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_IsStartedReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_IsStartedReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_MulticastFire_Statics
	{
		static void NewProp_NeedIncludeAutonomousProxy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedIncludeAutonomousProxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGun_MulticastFire_Statics::NewProp_NeedIncludeAutonomousProxy_SetBit(void* Obj)
	{
		((Gun_eventMulticastFire_Parms*)Obj)->NeedIncludeAutonomousProxy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_MulticastFire_Statics::NewProp_NeedIncludeAutonomousProxy = { "NeedIncludeAutonomousProxy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventMulticastFire_Parms), &Z_Construct_UFunction_AGun_MulticastFire_Statics::NewProp_NeedIncludeAutonomousProxy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_MulticastFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_MulticastFire_Statics::NewProp_NeedIncludeAutonomousProxy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "MulticastFire", nullptr, nullptr, sizeof(Gun_eventMulticastFire_Parms), Z_Construct_UFunction_AGun_MulticastFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_MulticastFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_MulticastFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_OnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_OnStartReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_OnStartReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_OnStartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "OnStartReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_OnStartReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_OnStartReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_OnStartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_OnStartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_ServerFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xeb\x8b\xa4\xeb\xa5\xb8 \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90\xea\xb2\x8c \xeb\x8f\x99\xea\xb8\xb0\xed\x99\x94\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xeb\x8b\xa4\xeb\xa5\xb8 \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90\xea\xb2\x8c \xeb\x8f\x99\xea\xb8\xb0\xed\x99\x94" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "ServerFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_ServerFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DamagePerBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoPerMagazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmoPerMagazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialAmmoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLeftAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentLeftAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftAmmoInMagazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LeftAmmoInMagazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStartedReload_MetaData[];
#endif
		static void NewProp_bIsStartedReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStartedReload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_R6S,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGun_CanFire, "CanFire" }, // 1605007887
		{ &Z_Construct_UFunction_AGun_CanReload, "CanReload" }, // 1888070906
		{ &Z_Construct_UFunction_AGun_GetMuzzleLocation, "GetMuzzleLocation" }, // 160764428
		{ &Z_Construct_UFunction_AGun_IsStartedReload, "IsStartedReload" }, // 101150767
		{ &Z_Construct_UFunction_AGun_MulticastFire, "MulticastFire" }, // 3570743758
		{ &Z_Construct_UFunction_AGun_OnFire, "OnFire" }, // 3817321292
		{ &Z_Construct_UFunction_AGun_OnStartReload, "OnStartReload" }, // 2505687651
		{ &Z_Construct_UFunction_AGun_ServerFire, "ServerFire" }, // 917344403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// \xec\xb4\x9d\xec\x95\x8c \xed\x95\x9c\xeb\xb0\x9c \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xec\x96\x91\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xec\xb4\x9d\xec\x95\x8c \xed\x95\x9c\xeb\xb0\x9c \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xec\x96\x91" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet = { "DamagePerBullet", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, DamagePerBullet), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// \xed\x83\x84\xec\xb0\xbd \xeb\x8b\xb9 \xec\xb5\x9c\xeb\x8c\x80 \xed\x83\x84 \xea\xb0\x9c\xec\x88\x98\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xed\x83\x84\xec\xb0\xbd \xeb\x8b\xb9 \xec\xb5\x9c\xeb\x8c\x80 \xed\x83\x84 \xea\xb0\x9c\xec\x88\x98" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine = { "MaxAmmoPerMagazine", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MaxAmmoPerMagazine), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// \xec\xb2\x98\xec\x9d\x8c \xec\x8b\x9c\xec\x9e\x91 \xec\x8b\x9c \xea\xb0\x80\xec\xa7\x80\xea\xb2\x8c \xeb\x90\xa0 \xed\x83\x84 \xea\xb0\x9c\xec\x88\x98\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xec\xb2\x98\xec\x9d\x8c \xec\x8b\x9c\xec\x9e\x91 \xec\x8b\x9c \xea\xb0\x80\xec\xa7\x80\xea\xb2\x8c \xeb\x90\xa0 \xed\x83\x84 \xea\xb0\x9c\xec\x88\x98" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount = { "InitialAmmoCount", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, InitialAmmoCount), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xea\xb0\x80\xec\xa7\x80\xea\xb3\xa0 \xec\x9e\x88\xeb\x8a\x94 \xeb\x82\xa8\xec\x9d\x80 \xed\x83\x84 \xea\xb0\x9c\xec\x88\x98\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xea\xb0\x80\xec\xa7\x80\xea\xb3\xa0 \xec\x9e\x88\xeb\x8a\x94 \xeb\x82\xa8\xec\x9d\x80 \xed\x83\x84 \xea\xb0\x9c\xec\x88\x98" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo = { "CurrentLeftAmmo", nullptr, (EPropertyFlags)0x0020080000030035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, CurrentLeftAmmo), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xed\x83\x84\xec\xb0\xbd\xec\x97\x90 \xeb\x82\xa8\xec\x9d\x80 \xec\xb4\x9d\xec\x95\x8c \xea\xb0\x9c\xec\x88\x98\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xed\x83\x84\xec\xb0\xbd\xec\x97\x90 \xeb\x82\xa8\xec\x9d\x80 \xec\xb4\x9d\xec\x95\x8c \xea\xb0\x9c\xec\x88\x98" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine = { "LeftAmmoInMagazine", nullptr, (EPropertyFlags)0x0020080000010035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, LeftAmmoInMagazine), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xeb\xa6\xac\xeb\xa1\x9c\xeb\x94\xa9 \xec\xa4\x91\xec\x9d\xb8 \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\xa6\xac\xeb\xa1\x9c\xeb\x94\xa9 \xec\xa4\x91\xec\x9d\xb8 \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80" },
	};
#endif
	void Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_SetBit(void* Obj)
	{
		((AGun*)Obj)->bIsStartedReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload = { "bIsStartedReload", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGun), &Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGun, 1349468901);
	template<> R6S_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGun(Z_Construct_UClass_AGun, &AGun::StaticClass, TEXT("/Script/R6S"), TEXT("AGun"), false, nullptr, nullptr, nullptr);

	void AGun::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentLeftAmmo(TEXT("CurrentLeftAmmo"));
		static const FName Name_LeftAmmoInMagazine(TEXT("LeftAmmoInMagazine"));

		const bool bIsValid = true
			&& Name_CurrentLeftAmmo == ClassReps[(int32)ENetFields_Private::CurrentLeftAmmo].Property->GetFName()
			&& Name_LeftAmmoInMagazine == ClassReps[(int32)ENetFields_Private::LeftAmmoInMagazine].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGun"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
