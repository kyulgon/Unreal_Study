// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/AccessTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccessTest() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AAccessTest_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AAccessTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor_NoRegister();
// End Cross Module References
	void AAccessTest::StaticRegisterNativesAAccessTest()
	{
	}
	UClass* Z_Construct_UClass_AAccessTest_NoRegister()
	{
		return AAccessTest::StaticClass();
	}
	struct Z_Construct_UClass_AAccessTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_testPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_testPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAccessTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAccessTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AccessTest.h" },
		{ "ModuleRelativePath", "Public/AccessTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer_MetaData[] = {
		{ "Category", "AccessTest" },
		{ "Comment", "// ?????? ????\n" },
		{ "ModuleRelativePath", "Public/AccessTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer = { "testPointer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAccessTest, testPointer), Z_Construct_UClass_ACodingTestActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAccessTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAccessTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAccessTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAccessTest_Statics::ClassParams = {
		&AAccessTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAccessTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAccessTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAccessTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAccessTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAccessTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAccessTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAccessTest, 824933134);
	template<> SHOOTINGCPP_API UClass* StaticClass<AAccessTest>()
	{
		return AAccessTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAccessTest(Z_Construct_UClass_AAccessTest, &AAccessTest::StaticClass, TEXT("/Script/ShootingCPP"), TEXT("AAccessTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAccessTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
