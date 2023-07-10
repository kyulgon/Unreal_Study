// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/MainWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainWidget() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_UMainWidget_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_UMainWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UMainWidget::StaticRegisterNativesUMainWidget()
	{
	}
	UClass* Z_Construct_UClass_UMainWidget_NoRegister()
	{
		return UMainWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scoreText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoreData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scoreData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainWidget.h" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText = { "scoreText", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainWidget, scoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData = { "scoreData", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainWidget, scoreData), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainWidget_Statics::ClassParams = {
		&UMainWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainWidget, 1590585119);
	template<> SHOOTINGCPP_API UClass* StaticClass<UMainWidget>()
	{
		return UMainWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainWidget(Z_Construct_UClass_UMainWidget, &UMainWidget::StaticClass, TEXT("/Script/ShootingCPP"), TEXT("UMainWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
