// MIT License https://github.com/monishdhayalan


#include "SinomGlobalEventsSubsystem.h"

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
		//TODO: add log here
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
	AllEvents.Empty();
	AllEvents.Compact();
	AllEvents.Shrink();
}

void USinomGlobalEventsSubsystem::BroadcastMessage(const FGameplayTag TargetTag, UObject* ExtraInfo)
{
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
				i.Value().ExecuteIfBound(ExtraInfo);
			}
		}
	}
}
