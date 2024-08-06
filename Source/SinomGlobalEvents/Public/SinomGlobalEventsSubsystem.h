// MIT License https://github.com/monishdhayalan

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Subsystems/WorldSubsystem.h"
#include "SinomGlobalEventsSubsystem.generated.h"

///TODO:
/// 1 - Add Custom Logs
/// 1 - Add Gameplay debugger

DECLARE_DYNAMIC_DELEGATE_OneParam(FSinomGlobalEventsDelegate, UObject*, ExtraInfo);

struct FSinomGlobalEventsListenerDetails
{
	const FObjectKey ObjectKey;
	const FGameplayTag GameplayTag;

	FORCEINLINE bool IsObjectValid() const { return IsValid(ObjectKey.ResolveObjectPtr()); }
	FORCEINLINE bool IsObject(const UObject* CheckObject) const { return ObjectKey.ResolveObjectPtr() == CheckObject; }
	FORCEINLINE bool operator==(const FSinomGlobalEventsListenerDetails& Other) const {return ObjectKey == Other.ObjectKey && GameplayTag == Other.GameplayTag;}
	FORCEINLINE friend uint32 GetTypeHash(const FSinomGlobalEventsListenerDetails& Other)
	{
		return GetTypeHash(Other.ObjectKey) ^ GetTypeHash(Other.GameplayTag);
	}


	FSinomGlobalEventsListenerDetails() = delete;
	FSinomGlobalEventsListenerDetails(const UObject* ListeningObject, const FGameplayTag TargetTag) : ObjectKey(ListeningObject), GameplayTag(TargetTag)
	{
	}
};

UCLASS()
class SINOMGLOBALEVENTS_API USinomGlobalEventsSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

private:
	TMap<FSinomGlobalEventsListenerDetails, FSinomGlobalEventsDelegate> AllEvents;
	
public:
	USinomGlobalEventsSubsystem();
	virtual void Deinitialize() override;
	
	static USinomGlobalEventsSubsystem* Get(const UWorld& World);

	/**
	 * Add a given Actor/Object as a Listener
	 * @param OwningObject Listening Object Ref
	 * @param TargetTag Target Gameplay Tag to listen to
	 * @param Callback Function to Call when the event is Broadcasted
	 */
	UFUNCTION(BlueprintCallable, Category="SinomGlobalEvents")
	void AddListener(const UObject* OwningObject, const FGameplayTag TargetTag, const FSinomGlobalEventsDelegate& Callback);


	/**
	 * Remove a give Actor/Object as a Listener
	 * @param OwningObject Listening Object Ref
	 * @param TargetTag Target Gameplay Tag to remove Listening
	 * @return True is remove was Success 
	 */
	UFUNCTION(BlueprintCallable, Category="SinomGlobalEvents")
	bool RemoveListener(const UObject* OwningObject, const FGameplayTag TargetTag);

	/**
	 * Check if listener is already registered
	 * @param OwningObject Listening Object Ref
	 * @param TargetTag Target Gameplay Tag to listen to
	 * @return True if Listener is Registered
	 */
	UFUNCTION(BlueprintCallable, Category="SinomGlobalEvents")
	bool IsListenerRegistered(const UObject* OwningObject, const FGameplayTag TargetTag);

	/**
	 * Remove all Listeners
	 */
	UFUNCTION(BlueprintCallable, Category="SinomGlobalEvents")
	void RemoveAllListeners();

	/**
	 * Broadcast to all Listeners who is Listening to the Target Tag
	 * @param TargetTag Target Gameplay Tag to Broadcast to
	 * @param ExtraInfo Optional Extra info
	 */
	UFUNCTION(BlueprintCallable, Category="SinomGlobalEvents")
	void BroadcastMessage(const FGameplayTag TargetTag = FGameplayTag(), UObject* ExtraInfo = nullptr);
	

	
};
