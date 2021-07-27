#include "RotFECore.h"
#include "Modules/ModuleManager.h"

#include "Log.h"

void FRotFECore::StartupModule()
{
	UE_LOG(LogRotFECore, Log, TEXT("RotFECore module starting up"));
}

void FRotFECore::ShutdownModule()
{
	UE_LOG(LogRotFECore, Log, TEXT("RotFECore module shutting down"));
}

IMPLEMENT_PRIMARY_GAME_MODULE(FRotFECore, RotFECore, "RotFECore");
