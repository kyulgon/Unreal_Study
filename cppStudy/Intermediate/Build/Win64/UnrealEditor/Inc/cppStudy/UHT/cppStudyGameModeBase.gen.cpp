// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppStudy/cppStudyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppStudyGameModeBase() {}
// Cross Module References
	CPPSTUDY_API UClass* Z_Construct_UClass_AcppStudyGameModeBase();
	CPPSTUDY_API UClass* Z_Construct_UClass_AcppStudyGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_cppStudy();
// End Cross Module References
	void AcppStudyGameModeBase::StaticRegisterNativesAcppStudyGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AcppStudyGameModeBase);
	UClass* Z_Construct_UClass_AcppStudyGameModeBase_NoRegister()
	{
		return AcppStudyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AcppStudyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcppStudyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_cppStudy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppStudyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "cppStudyGameModeBase.h" },
		{ "ModuleRelativePath", "cppStudyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcppStudyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcppStudyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AcppStudyGameModeBase_Statics::ClassParams = {
		&AcppStudyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AcppStudyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcppStudyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcppStudyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AcppStudyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AcppStudyGameModeBase.OuterSingleton, Z_Construct_UClass_AcppStudyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AcppStudyGameModeBase.OuterSingleton;
	}
	template<> CPPSTUDY_API UClass* StaticClass<AcppStudyGameModeBase>()
	{
		return AcppStudyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcppStudyGameModeBase);
	AcppStudyGameModeBase::~AcppStudyGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_unreal_Study_cppStudy_Source_cppStudy_cppStudyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_Study_cppStudy_Source_cppStudy_cppStudyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AcppStudyGameModeBase, AcppStudyGameModeBase::StaticClass, TEXT("AcppStudyGameModeBase"), &Z_Registration_Info_UClass_AcppStudyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AcppStudyGameModeBase), 2400486882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_Study_cppStudy_Source_cppStudy_cppStudyGameModeBase_h_4243285456(TEXT("/Script/cppStudy"),
		Z_CompiledInDeferFile_FID_unreal_Study_cppStudy_Source_cppStudy_cppStudyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_Study_cppStudy_Source_cppStudy_cppStudyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
