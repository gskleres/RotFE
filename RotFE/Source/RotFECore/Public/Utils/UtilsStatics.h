#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "UtilsStatics.generated.h"

UCLASS()
class UUtilsStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "RotFE|Logging")
	static void CoreLogError(FString InText);

	UFUNCTION(BlueprintCallable, Category = "RotFE|Logging")
	static void CoreLogWarning(FString InText);

	UFUNCTION(BlueprintCallable, Category = "RotFE|Logging")
	static void CoreLog(FString InText);

	UFUNCTION(BlueprintCallable, Category = "RotFE|Logging")
	static void CoreLogVerbose(FString InText);
};

