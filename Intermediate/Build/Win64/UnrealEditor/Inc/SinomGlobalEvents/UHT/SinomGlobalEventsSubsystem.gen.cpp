// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SinomGlobalEvents/Public/SinomGlobalEventsSubsystem.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSinomGlobalEventsSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SINOMGLOBALEVENTS_API UClass* Z_Construct_UClass_USinomGlobalEventsSubsystem();
	SINOMGLOBALEVENTS_API UClass* Z_Construct_UClass_USinomGlobalEventsSubsystem_NoRegister();
	SINOMGLOBALEVENTS_API UFunction* Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SinomGlobalEvents();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics
	{
		struct _Script_SinomGlobalEvents_eventSinomGlobalEventsDelegate_Parms
		{
			UObject* ExtraInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtraInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::NewProp_ExtraInfo = { "ExtraInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SinomGlobalEvents_eventSinomGlobalEventsDelegate_Parms, ExtraInfo), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::NewProp_ExtraInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///TODO:\n/// 1 - Add Custom Logs\n/// 1 - Add Gameplay debugger\n" },
#endif
		{ "ModuleRelativePath", "Public/SinomGlobalEventsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO:\n 1 - Add Custom Logs\n 1 - Add Gameplay debugger" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SinomGlobalEvents, nullptr, "SinomGlobalEventsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::_Script_SinomGlobalEvents_eventSinomGlobalEventsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::_Script_SinomGlobalEvents_eventSinomGlobalEventsDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSinomGlobalEventsDelegate_DelegateWrapper(const FScriptDelegate& SinomGlobalEventsDelegate, UObject* ExtraInfo)
{
	struct _Script_SinomGlobalEvents_eventSinomGlobalEventsDelegate_Parms
	{
		UObject* ExtraInfo;
	};
	_Script_SinomGlobalEvents_eventSinomGlobalEventsDelegate_Parms Parms;
	Parms.ExtraInfo=ExtraInfo;
	SinomGlobalEventsDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USinomGlobalEventsSubsystem::execBroadcastMessage)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TargetTag);
		P_GET_OBJECT(UObject,Z_Param_ExtraInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastMessage(Z_Param_TargetTag,Z_Param_ExtraInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USinomGlobalEventsSubsystem::execRemoveAllListeners)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllListeners();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USinomGlobalEventsSubsystem::execIsListenerRegistered)
	{
		P_GET_OBJECT(UObject,Z_Param_OwningObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_TargetTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsListenerRegistered(Z_Param_OwningObject,Z_Param_TargetTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USinomGlobalEventsSubsystem::execRemoveListener)
	{
		P_GET_OBJECT(UObject,Z_Param_OwningObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_TargetTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveListener(Z_Param_OwningObject,Z_Param_TargetTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USinomGlobalEventsSubsystem::execAddListener)
	{
		P_GET_OBJECT(UObject,Z_Param_OwningObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_TargetTag);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddListener(Z_Param_OwningObject,Z_Param_TargetTag,FSinomGlobalEventsDelegate(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	void USinomGlobalEventsSubsystem::StaticRegisterNativesUSinomGlobalEventsSubsystem()
	{
		UClass* Class = USinomGlobalEventsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddListener", &USinomGlobalEventsSubsystem::execAddListener },
			{ "BroadcastMessage", &USinomGlobalEventsSubsystem::execBroadcastMessage },
			{ "IsListenerRegistered", &USinomGlobalEventsSubsystem::execIsListenerRegistered },
			{ "RemoveAllListeners", &USinomGlobalEventsSubsystem::execRemoveAllListeners },
			{ "RemoveListener", &USinomGlobalEventsSubsystem::execRemoveListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics
	{
		struct SinomGlobalEventsSubsystem_eventAddListener_Parms
		{
			const UObject* OwningObject;
			FGameplayTag TargetTag;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_OwningObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_OwningObject = { "OwningObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventAddListener_Parms, OwningObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_OwningObject_MetaData), Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_OwningObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_TargetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_TargetTag = { "TargetTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventAddListener_Parms, TargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_TargetTag_MetaData), Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_TargetTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventAddListener_Parms, Callback), Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_Callback_MetaData), Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_Callback_MetaData) }; // 1850105808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_OwningObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_TargetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "SinomGlobalEvents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add a given Actor/Object as a Listener\n\x09 * @param OwningObject Listening Object Ref\n\x09 * @param TargetTag Target Gameplay Tag to listen to\n\x09 * @param Callback Function to Call when the event is Broadcasted\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SinomGlobalEventsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a given Actor/Object as a Listener\n@param OwningObject Listening Object Ref\n@param TargetTag Target Gameplay Tag to listen to\n@param Callback Function to Call when the event is Broadcasted" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinomGlobalEventsSubsystem, nullptr, "AddListener", nullptr, nullptr, Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::SinomGlobalEventsSubsystem_eventAddListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::SinomGlobalEventsSubsystem_eventAddListener_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics
	{
		struct SinomGlobalEventsSubsystem_eventBroadcastMessage_Parms
		{
			FGameplayTag TargetTag;
			UObject* ExtraInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtraInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::NewProp_TargetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::NewProp_TargetTag = { "TargetTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventBroadcastMessage_Parms, TargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::NewProp_TargetTag_MetaData), Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::NewProp_TargetTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::NewProp_ExtraInfo = { "ExtraInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventBroadcastMessage_Parms, ExtraInfo), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::NewProp_TargetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::NewProp_ExtraInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SinomGlobalEvents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Broadcast to all Listeners who is Listening to the Target Tag\n\x09 * @param TargetTag Target Gameplay Tag to Broadcast to\n\x09 * @param ExtraInfo Optional Extra info\n\x09 */" },
#endif
		{ "CPP_Default_ExtraInfo", "None" },
		{ "CPP_Default_TargetTag", "()" },
		{ "ModuleRelativePath", "Public/SinomGlobalEventsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast to all Listeners who is Listening to the Target Tag\n@param TargetTag Target Gameplay Tag to Broadcast to\n@param ExtraInfo Optional Extra info" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinomGlobalEventsSubsystem, nullptr, "BroadcastMessage", nullptr, nullptr, Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::SinomGlobalEventsSubsystem_eventBroadcastMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::SinomGlobalEventsSubsystem_eventBroadcastMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics
	{
		struct SinomGlobalEventsSubsystem_eventIsListenerRegistered_Parms
		{
			const UObject* OwningObject;
			FGameplayTag TargetTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_OwningObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_OwningObject = { "OwningObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventIsListenerRegistered_Parms, OwningObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_OwningObject_MetaData), Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_OwningObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_TargetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_TargetTag = { "TargetTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventIsListenerRegistered_Parms, TargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_TargetTag_MetaData), Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_TargetTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SinomGlobalEventsSubsystem_eventIsListenerRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SinomGlobalEventsSubsystem_eventIsListenerRegistered_Parms), &Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_OwningObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_TargetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "SinomGlobalEvents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if listener is already registered\n\x09 * @param OwningObject Listening Object Ref\n\x09 * @param TargetTag Target Gameplay Tag to listen to\n\x09 * @return True if Listener is Registered\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SinomGlobalEventsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if listener is already registered\n@param OwningObject Listening Object Ref\n@param TargetTag Target Gameplay Tag to listen to\n@return True if Listener is Registered" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinomGlobalEventsSubsystem, nullptr, "IsListenerRegistered", nullptr, nullptr, Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::SinomGlobalEventsSubsystem_eventIsListenerRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::SinomGlobalEventsSubsystem_eventIsListenerRegistered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveAllListeners_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveAllListeners_Statics::Function_MetaDataParams[] = {
		{ "Category", "SinomGlobalEvents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove all Listeners\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SinomGlobalEventsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove all Listeners" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveAllListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinomGlobalEventsSubsystem, nullptr, "RemoveAllListeners", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveAllListeners_Statics::Function_MetaDataParams), Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveAllListeners_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveAllListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveAllListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics
	{
		struct SinomGlobalEventsSubsystem_eventRemoveListener_Parms
		{
			const UObject* OwningObject;
			FGameplayTag TargetTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_OwningObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_OwningObject = { "OwningObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventRemoveListener_Parms, OwningObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_OwningObject_MetaData), Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_OwningObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_TargetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_TargetTag = { "TargetTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SinomGlobalEventsSubsystem_eventRemoveListener_Parms, TargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_TargetTag_MetaData), Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_TargetTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SinomGlobalEventsSubsystem_eventRemoveListener_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SinomGlobalEventsSubsystem_eventRemoveListener_Parms), &Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_OwningObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_TargetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "SinomGlobalEvents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove a give Actor/Object as a Listener\n\x09 * @param OwningObject Listening Object Ref\n\x09 * @param TargetTag Target Gameplay Tag to remove Listening\n\x09 * @return True is remove was Success \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SinomGlobalEventsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a give Actor/Object as a Listener\n@param OwningObject Listening Object Ref\n@param TargetTag Target Gameplay Tag to remove Listening\n@return True is remove was Success" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinomGlobalEventsSubsystem, nullptr, "RemoveListener", nullptr, nullptr, Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::SinomGlobalEventsSubsystem_eventRemoveListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::SinomGlobalEventsSubsystem_eventRemoveListener_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USinomGlobalEventsSubsystem);
	UClass* Z_Construct_UClass_USinomGlobalEventsSubsystem_NoRegister()
	{
		return USinomGlobalEventsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SinomGlobalEvents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USinomGlobalEventsSubsystem_AddListener, "AddListener" }, // 3713075528
		{ &Z_Construct_UFunction_USinomGlobalEventsSubsystem_BroadcastMessage, "BroadcastMessage" }, // 1866670517
		{ &Z_Construct_UFunction_USinomGlobalEventsSubsystem_IsListenerRegistered, "IsListenerRegistered" }, // 1057986157
		{ &Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveAllListeners, "RemoveAllListeners" }, // 4010800570
		{ &Z_Construct_UFunction_USinomGlobalEventsSubsystem_RemoveListener, "RemoveListener" }, // 3561892709
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SinomGlobalEventsSubsystem.h" },
		{ "ModuleRelativePath", "Public/SinomGlobalEventsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USinomGlobalEventsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::ClassParams = {
		&USinomGlobalEventsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USinomGlobalEventsSubsystem()
	{
		if (!Z_Registration_Info_UClass_USinomGlobalEventsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USinomGlobalEventsSubsystem.OuterSingleton, Z_Construct_UClass_USinomGlobalEventsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USinomGlobalEventsSubsystem.OuterSingleton;
	}
	template<> SINOMGLOBALEVENTS_API UClass* StaticClass<USinomGlobalEventsSubsystem>()
	{
		return USinomGlobalEventsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USinomGlobalEventsSubsystem);
	USinomGlobalEventsSubsystem::~USinomGlobalEventsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USinomGlobalEventsSubsystem, USinomGlobalEventsSubsystem::StaticClass, TEXT("USinomGlobalEventsSubsystem"), &Z_Registration_Info_UClass_USinomGlobalEventsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USinomGlobalEventsSubsystem), 1361858089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_1373986592(TEXT("/Script/SinomGlobalEvents"),
		Z_CompiledInDeferFile_FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GlobalEvents_Plugins_SinomGlobalEvents_Source_SinomGlobalEvents_Public_SinomGlobalEventsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
