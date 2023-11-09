// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP_PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATrigger3Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TRIGGER3_TP_PickUpComponent_generated_h
#error "TP_PickUpComponent.generated.h already included, missing '#pragma once' in TP_PickUpComponent.h"
#endif
#define TRIGGER3_TP_PickUpComponent_generated_h

#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_12_DELEGATE \
TRIGGER3_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ATrigger3Character* PickUpCharacter);


#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_SPARSE_DATA
#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_ACCESSORS
#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTP_PickUpComponent(); \
	friend struct Z_Construct_UClass_UTP_PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTP_PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trigger3"), NO_API) \
	DECLARE_SERIALIZER(UTP_PickUpComponent)


#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_PickUpComponent(UTP_PickUpComponent&&); \
	NO_API UTP_PickUpComponent(const UTP_PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTP_PickUpComponent) \
	NO_API virtual ~UTP_PickUpComponent();


#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_14_PROLOG
#define FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_SPARSE_DATA \
	FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_ACCESSORS \
	FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGER3_API UClass* StaticClass<class UTP_PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_FPS_Trigger_Assignment_TriggerAssignment_Trigger3_Source_Trigger3_TP_PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS