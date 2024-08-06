// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SinomGlobalEventsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayTag;
#ifdef SINOMGLOBALEVENTS_SinomGlobalEventsSubsystem_generated_h
#error "SinomGlobalEventsSubsystem.generated.h already included, missing '#pragma once' in SinomGlobalEventsSubsystem.h"
#endif
#define SINOMGLOBALEVENTS_SinomGlobalEventsSubsystem_generated_h

#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_14_DELEGATE \
SINOMGLOBALEVENTS_API void FSinomGlobalEventsDelegate_DelegateWrapper(const FScriptDelegate& SinomGlobalEventsDelegate, UObject* ExtraInfo);


#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_SPARSE_DATA
#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastMessage); \
	DECLARE_FUNCTION(execRemoveAllListeners); \
	DECLARE_FUNCTION(execIsListenerRegistered); \
	DECLARE_FUNCTION(execRemoveListener); \
	DECLARE_FUNCTION(execAddListener);


#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_ACCESSORS
#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSinomGlobalEventsSubsystem(); \
	friend struct Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics; \
public: \
	DECLARE_CLASS(USinomGlobalEventsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SinomGlobalEvents"), NO_API) \
	DECLARE_SERIALIZER(USinomGlobalEventsSubsystem)


#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USinomGlobalEventsSubsystem(USinomGlobalEventsSubsystem&&); \
	NO_API USinomGlobalEventsSubsystem(const USinomGlobalEventsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USinomGlobalEventsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USinomGlobalEventsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USinomGlobalEventsSubsystem) \
	NO_API virtual ~USinomGlobalEventsSubsystem();


#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_36_PROLOG
#define FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_SPARSE_DATA \
	FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_ACCESSORS \
	FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_INCLASS_NO_PURE_DECLS \
	FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SINOMGLOBALEVENTS_API UClass* StaticClass<class USinomGlobalEventsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
