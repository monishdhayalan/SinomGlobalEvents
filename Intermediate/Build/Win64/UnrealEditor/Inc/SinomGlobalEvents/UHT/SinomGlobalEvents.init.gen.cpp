// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSinomGlobalEvents_init() {}
	SINOMGLOBALEVENTS_API UFunction* Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SinomGlobalEvents;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SinomGlobalEvents()
	{
		if (!Z_Registration_Info_UPackage__Script_SinomGlobalEvents.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SinomGlobalEvents_SinomGlobalEventsDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SinomGlobalEvents",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4AF58DE2,
				0xBA7A7979,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SinomGlobalEvents.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SinomGlobalEvents.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SinomGlobalEvents(Z_Construct_UPackage__Script_SinomGlobalEvents, TEXT("/Script/SinomGlobalEvents"), Z_Registration_Info_UPackage__Script_SinomGlobalEvents, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4AF58DE2, 0xBA7A7979));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
