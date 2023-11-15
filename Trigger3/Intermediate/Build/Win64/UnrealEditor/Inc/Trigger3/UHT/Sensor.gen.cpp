// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trigger3/Sensor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSensor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	TRIGGER3_API UClass* Z_Construct_UClass_ASensor();
	TRIGGER3_API UClass* Z_Construct_UClass_ASensor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Trigger3();
// End Cross Module References
	void ASensor::StaticRegisterNativesASensor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASensor);
	UClass* Z_Construct_UClass_ASensor_NoRegister()
	{
		return ASensor::StaticClass();
	}
	struct Z_Construct_UClass_ASensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trigger3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sensor.h" },
		{ "ModuleRelativePath", "Sensor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASensor_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sensor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASensor_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASensor, mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::NewProp_mesh_MetaData), Z_Construct_UClass_ASensor_Statics::NewProp_mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensor_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASensor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASensor_Statics::ClassParams = {
		&ASensor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASensor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASensor()
	{
		if (!Z_Registration_Info_UClass_ASensor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASensor.OuterSingleton, Z_Construct_UClass_ASensor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASensor.OuterSingleton;
	}
	template<> TRIGGER3_API UClass* StaticClass<ASensor>()
	{
		return ASensor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASensor);
	ASensor::~ASensor() {}
	struct Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Sensor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Sensor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASensor, ASensor::StaticClass, TEXT("ASensor"), &Z_Registration_Info_UClass_ASensor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASensor), 2634622926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Sensor_h_4166406124(TEXT("/Script/Trigger3"),
		Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Sensor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubProjects_TriggerAssignmentGit_TriggerAssignmentGIT_Trigger3_Source_Trigger3_Sensor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
