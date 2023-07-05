// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/CodingTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodingTestActor() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	DEFINE_FUNCTION(ACodingTestActor::execAdd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_num1);
		P_GET_PROPERTY(FIntProperty,Z_Param_num2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Add(Z_Param_num1,Z_Param_num2);
		P_NATIVE_END;
	}
	void ACodingTestActor::StaticRegisterNativesACodingTestActor()
	{
		UClass* Class = ACodingTestActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &ACodingTestActor::execAdd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACodingTestActor_Add_Statics
	{
		struct CodingTestActor_eventAdd_Parms
		{
			int32 num1;
			int32 num2;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_num1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_num2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_num1 = { "num1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, num1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_num2 = { "num2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, num2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_num1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_num2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xeb\x8d\x94\xed\x95\x98\xea\xb8\xb0 \xed\x95\xa8\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8\n" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
		{ "ToolTip", "\xeb\x8d\x94\xed\x95\x98\xea\xb8\xb0 \xed\x95\xa8\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodingTestActor, nullptr, "Add", nullptr, nullptr, sizeof(CodingTestActor_eventAdd_Parms), Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodingTestActor_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodingTestActor_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACodingTestActor_NoRegister()
	{
		return ACodingTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ACodingTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_number1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_number1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_number2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_number2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isReady_MetaData[];
#endif
		static void NewProp_isReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodingTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACodingTestActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACodingTestActor_Add, "Add" }, // 2237844003
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodingTestActor.h" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1 = { "number1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestActor, number1), METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2 = { "number2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestActor, number2), METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestActor, name), METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	void Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_SetBit(void* Obj)
	{
		((ACodingTestActor*)Obj)->isReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady = { "isReady", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACodingTestActor), &Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACodingTestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_isReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodingTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodingTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodingTestActor_Statics::ClassParams = {
		&ACodingTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACodingTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodingTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodingTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodingTestActor, 1903704502);
	template<> SHOOTINGCPP_API UClass* StaticClass<ACodingTestActor>()
	{
		return ACodingTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodingTestActor(Z_Construct_UClass_ACodingTestActor, &ACodingTestActor::StaticClass, TEXT("/Script/ShootingCPP"), TEXT("ACodingTestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodingTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
