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
	DEFINE_FUNCTION(AGun::execGetMuzzleLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMuzzleLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execMulticastFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execServerFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFire_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AGun_GetMuzzleLocation = FName(TEXT("GetMuzzleLocation"));
	FVector AGun::GetMuzzleLocation() const
	{
		Gun_eventGetMuzzleLocation_Parms Parms;
		const_cast<AGun*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGun_GetMuzzleLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGun_MulticastFire = FName(TEXT("MulticastFire"));
	void AGun::MulticastFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_MulticastFire),NULL);
	}
	static FName NAME_AGun_OnFire = FName(TEXT("OnFire"));
	void AGun::OnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_OnFire),NULL);
	}
	static FName NAME_AGun_OnServerFire = FName(TEXT("OnServerFire"));
	void AGun::OnServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_OnServerFire),NULL);
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
			{ "GetMuzzleLocation", &AGun::execGetMuzzleLocation },
			{ "MulticastFire", &AGun::execMulticastFire },
			{ "ServerFire", &AGun::execServerFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "GetMuzzleLocation", nullptr, nullptr, sizeof(Gun_eventGetMuzzleLocation_Parms), Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_GetMuzzleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_MulticastFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "MulticastFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_OnServerFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_OnServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_OnServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "OnServerFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_OnServerFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_OnServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_OnServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_OnServerFire_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "ServerFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_ServerFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_ServerFire_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_R6S,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGun_GetMuzzleLocation, "GetMuzzleLocation" }, // 4175206262
		{ &Z_Construct_UFunction_AGun_MulticastFire, "MulticastFire" }, // 2226800594
		{ &Z_Construct_UFunction_AGun_OnFire, "OnFire" }, // 162105550
		{ &Z_Construct_UFunction_AGun_OnServerFire, "OnServerFire" }, // 2657188954
		{ &Z_Construct_UFunction_AGun_ServerFire, "ServerFire" }, // 4084818164
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet,
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
	IMPLEMENT_CLASS(AGun, 876104977);
	template<> R6S_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGun(Z_Construct_UClass_AGun, &AGun::StaticClass, TEXT("/Script/R6S"), TEXT("AGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
