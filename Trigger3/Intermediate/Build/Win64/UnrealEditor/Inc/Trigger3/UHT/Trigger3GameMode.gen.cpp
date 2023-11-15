// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trigger3/Trigger3GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrigger3GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TRIGGER3_API UClass* Z_Construct_UClass_ATrigger3GameMode();
	TRIGGER3_API UClass* Z_Construct_UClass_ATrigger3GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Trigger3();
// End Cross Module References
	void ATrigger3GameMode::StaticRegisterNativesATrigger3GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrigger3GameMode);
	UClass* Z_Construct_UClass_ATrigger3GameMode_NoRegister()
	{
		return ATrigger3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATrigger3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrigger3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Trigger3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrigger3GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrigger3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Trigger3GameMode.h" },
		{ "ModuleRelativePath", "Trigger3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrigger3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrigger3GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrigger3GameMode_Statics::ClassParams = {
		&ATrigger3GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrigger3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrigger3GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATrigger3GameMode()
	{
		if (!Z_Registration_Info_UClass_ATrigger3GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrigger3GameMode.OuterSingleton, Z_Construct_UClass_ATrigger3GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrigger3GameMode.OuterSingleton;
	}
	template<> TRIGGER3_API UClass* StaticClass<ATrigger3GameMode>()
	{
		return ATrigger3GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrigger3GameMode);
	ATrigger3GameMode::~ATrigger3GameMode() {}
	struct Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Trigger3GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Trigger3GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrigger3GameMode, ATrigger3GameMode::StaticClass, TEXT("ATrigger3GameMode"), &Z_Registration_Info_UClass_ATrigger3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrigger3GameMode), 3014740407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Trigger3GameMode_h_799862260(TEXT("/Script/Trigger3"),
		Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Trigger3GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Trigger3GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
