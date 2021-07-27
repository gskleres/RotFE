#pragma once

#include "Utils/UtilsStatics.h"
#include "Log.h"
#include "Logging/LogVerbosity.h"


void UUtilsStatics::CoreLogError(FString InText)
{
	UE_LOG(LogRotFECore, Error, TEXT("%s"), *InText);
}

void UUtilsStatics::CoreLogWarning(FString InText)
{
	UE_LOG(LogRotFECore, Warning, TEXT("%s"), *InText);
}

void UUtilsStatics::CoreLog(FString InText)
{
	UE_LOG(LogRotFECore, Log, TEXT("%s"), *InText);
}

void UUtilsStatics::CoreLogVerbose(FString InText)
{
	UE_LOG(LogRotFECore, Verbose, TEXT("%s"), *InText);
}

