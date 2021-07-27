#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class FRotFECore : public IModuleInterface
{
public:
	static inline FRotFECore& Get()
	{
		return FModuleManager::LoadModuleChecked<FRotFECore>("RotFECore");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("RotFECore");
	}

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
