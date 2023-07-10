// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/ShootingGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingGameModeBase() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AShootingGameModeBase_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AShootingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_UMainWidget_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
// End Cross Module References
	void AShootingGameModeBase::StaticRegisterNativesAShootingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AShootingGameModeBase_NoRegister()
	{
		return AShootingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShootingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mainWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_menuWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShootingGameModeBase.h" },
		{ "ModuleRelativePath", "Public/ShootingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_mainWidget_MetaData[] = {
		{ "Category", "ShootingGameModeBase" },
		{ "ModuleRelativePath", "Public/ShootingGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_mainWidget = { "mainWidget", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingGameModeBase, mainWidget), Z_Construct_UClass_UMainWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_mainWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_mainWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_menuWidget_MetaData[] = {
		{ "Category", "ShootingGameModeBase" },
		{ "ModuleRelativePath", "Public/ShootingGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_menuWidget = { "menuWidget", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingGameModeBase, menuWidget), Z_Construct_UClass_UMenuWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_menuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_menuWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_mainWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingGameModeBase_Statics::NewProp_menuWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingGameModeBase_Statics::ClassParams = {
		&AShootingGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootingGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShootingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootingGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootingGameModeBase, 1356986967);
	template<> SHOOTINGCPP_API UClass* StaticClass<AShootingGameModeBase>()
	{
		return AShootingGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootingGameModeBase(Z_Construct_UClass_AShootingGameModeBase, &AShootingGameModeBase::StaticClass, TEXT("/Script/ShootingCPP"), TEXT("AShootingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
