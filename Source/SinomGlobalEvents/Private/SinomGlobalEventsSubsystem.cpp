// MIT License https://github.com/monishdhayalan


#include "SinomGlobalEventsSubsystem.h"

DEFINE_LOG_CATEGORY_STATIC(SinomGlobalEventsLog, Log, All)


USinomGlobalEventsSubsystem::USinomGlobalEventsSubsystem() : AllEvents({})
{
}

void USinomGlobalEventsSubsystem::Deinitialize()
{
	Super::Deinitialize();
	RemoveAllListeners();
}

USinomGlobalEventsSubsystem* USinomGlobalEventsSubsystem::Get(const UWorld& World)
{
	return World.GetSubsystem<USinomGlobalEventsSubsystem>();
}

void USinomGlobalEventsSubsystem::AddListener(const UObject* OwningObject, const FGameplayTag TargetTag, const FSinomGlobalEventsDelegate& Callback)
{
	if (IsValid(OwningObject))
	{
		AllEvents.Add(FSinomGlobalEventsListenerDetails(OwningObject, TargetTag), Callback);
		UE_LOG(SinomGlobalEventsLog, Display, TEXT("Added %s as Listener to Tag %s"), *OwningObject->GetName(), *TargetTag.GetTagName().ToString());
	}
}

bool USinomGlobalEventsSubsystem::RemoveListener(const UObject* OwningObject, const FGameplayTag TargetTag)
{
	bool bIsSuccess = false;
	FSinomGlobalEventsListenerDetails ListenerToRemove = FSinomGlobalEventsListenerDetails(OwningObject, TargetTag);
	for (TMap<FSinomGlobalEventsListenerDetails, FSinomGlobalEventsDelegate>::TIterator i = AllEvents.CreateIterator(); i; ++i)
	{
		if (i.Key() == ListenerToRemove)
		{
			bIsSuccess = true;
			UE_LOG(SinomGlobalEventsLog, Display, TEXT("Removed %s from Tag %s"), *OwningObject->GetName(), *TargetTag.GetTagName().ToString())
			AllEvents.Remove(i.Key());
			AllEvents.CompactStable();
			AllEvents.Shrink();
			break;
		}
	}

	return bIsSuccess;
}

bool USinomGlobalEventsSubsystem::IsListenerRegistered(const UObject* OwningObject, const FGameplayTag TargetTag)
{
	bool bIsRegistered = false;
	FSinomGlobalEventsListenerDetails ListenerToRemove = FSinomGlobalEventsListenerDetails(OwningObject, TargetTag);
	for (TMap<FSinomGlobalEventsListenerDetails, FSinomGlobalEventsDelegate>::TIterator i = AllEvents.CreateIterator(); i; ++i)
	{
		if (i.Key() == ListenerToRemove)
		{
			bIsRegistered = true;
			break;
		}
	}

	return bIsRegistered;
}

void USinomGlobalEventsSubsystem::RemoveAllListeners()
{
	UE_LOG(SinomGlobalEventsLog, Display, TEXT("Removed All Listeners"));
	AllEvents.Empty();
	AllEvents.Compact();
	AllEvents.Shrink();
}

void USinomGlobalEventsSubsystem::BroadcastMessage(const FGameplayTag TargetTag, UObject* ExtraInfo)
{
	TArray<FSinomGlobalEventsDelegate> allCallbacks;

	for (TMap<FSinomGlobalEventsListenerDetails, FSinomGlobalEventsDelegate>::TIterator i = AllEvents.CreateIterator(); i; ++i)
	{
		if (!i.Key().IsObjectValid())
		{
			i.RemoveCurrent();
			continue;
		}


		if (TargetTag.IsValid())
		{
			if (i.Key().GameplayTag == TargetTag)
			{
				allCallbacks.Add(i.Value());
			}
		}
	}

	if (allCallbacks.Num() <= 0)
	{
		UE_LOG(SinomGlobalEventsLog, Display, TEXT("No Listeners for Tag: %s"), *TargetTag.GetTagName().ToString())
	}
	else
	{
		UE_LOG(SinomGlobalEventsLog, Display, TEXT("Broadcasting Tag: %s"), *TargetTag.GetTagName().ToString())
		for (FSinomGlobalEventsDelegate i : allCallbacks)
		{
			if (i.IsBound())
			{
				i.Execute(ExtraInfo);
			}
		}
	}
}
