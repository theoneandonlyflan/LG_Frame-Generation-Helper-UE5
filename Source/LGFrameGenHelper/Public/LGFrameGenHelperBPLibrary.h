/* Copyright 2026, Liberation Games. All Rights Reserved.
*  This plugin is to help Indie Developers implement a simple switch
*  for frame gen technologies. Implementing this in a settings menu is very simple.
*  This plugin has been built with the developer in mind, All this can be done with one function.
*/

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "LGFrameGenerationMethod.h"
#include "LGFrameGenHelperBPLibrary.generated.h"

UCLASS()
class LGFRAMEGENHELPER_API ULGFrameGenHelperBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "LG Frame Generation")
    static void SetFrameGenerationMethod(E_LGFrameGenerationMethod Method);
};