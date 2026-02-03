/* Copyright 2026, Liberation Games. All Rights Reserved.
*  This plugin is to help Indie Developers implement a simple switch
*  for frame gen technologies. Implementing this in a settings menu is very simple.
*  This plugin has been built with the developer in mind, All this can be done with one function.
*/

#pragma once

#include "CoreMinimal.h"
#include "LGFrameGenerationMethod.generated.h"

UENUM(BlueprintType)
enum class E_LGFrameGenerationMethod : uint8
{
    Off     UMETA(DisplayName = "Off"),
    DLSS    UMETA(DisplayName = "(Nvidia) DLSS Frame Generation"),
    FSR    UMETA(DisplayName = "(AMD) FSR Frame Generation"),
    XeFG    UMETA(DisplayName = "(Intel) XeFG Frame Generation")
};