#pragma once

#include "Logging/LogVerbosity.h"
#include "RotFELogVerbosity.generated.h"

UENUM(BlueprintType)
enum class ERotFELogVerbosity : uint8
{
	Unused_Default = 0,

	Fatal = ELogVerbosity::Fatal,

	Error = ELogVerbosity::Error,

	Warning = ELogVerbosity::Warning,

	Display = ELogVerbosity::Display,

	Log = ELogVerbosity::Log,

	Verbose = ELogVerbosity::Verbose,

	VeryVerbose = ELogVerbosity::VeryVerbose
};

inline ELogVerbosity::Type GetLogVerbosity(ERotFELogVerbosity InVerbosity)
{
	return ((ELogVerbosity::Type)InVerbosity);
}