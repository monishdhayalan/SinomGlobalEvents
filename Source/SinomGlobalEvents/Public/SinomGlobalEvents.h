// MIT License https://github.com/monishdhayalan

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSinomGlobalEventsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
