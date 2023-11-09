// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trigger3/Trigger3PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrigger3PlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TRIGGER3_API UClass* Z_Construct_UClass_ATrigger3PlayerController();
	TRIGGER3_API UClass* Z_Construct_UClass_ATrigger3PlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Trigger3();
// End Cross Module References
	void ATrigger3PlayerController::StaticRegisterNativesATrigger3PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrigger3PlayerController);
	UClass* Z_Construct_UClass_ATrigger3PlayerController_NoRegister()
	{
		return ATrigger3PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATrigger3PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrigger3PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Trigger3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrigger3PlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrigger3PlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Trigger3PlayerController.h" },
		{ "ModuleRelativePath", "Trigger3PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrigger3PlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "Trigger3PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrigger3PlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrigger3PlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrigger3PlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ATrigger3PlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrigger3PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrigger3PlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrigger3PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrigger3PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrigger3PlayerController_Statics::ClassParams = {
		&ATrigger3PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrigger3PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrigger3PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrigger3PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrigger3PlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrigger3PlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATrigger3PlayerController()
	{
		if (!Z_Registration_Info_UClass_ATrigger3PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrigger3PlayerController.OuterSingleton, Z_Construct_UClass_ATrigger3PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrigger3PlayerController.OuterSingleton;
	}
	template<> TRIGGER3_API UClass* StaticClass<ATrigger3PlayerController>()
	{
		return ATrigger3PlayerController::StaticClass();
	}
	ATrigger3PlayerController::ATrigger3PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrigger3PlayerController);
	ATrigger3PlayerController::~ATrigger3PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_Trigger3PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_Trigger3PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrigger3PlayerController, ATrigger3PlayerController::StaticClass, TEXT("ATrigger3PlayerController"), &Z_Registration_Info_UClass_ATrigger3PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrigger3PlayerController), 1898769478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_Trigger3PlayerController_h_4184086634(TEXT("/Script/Trigger3"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_Trigger3PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_Trigger3PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
