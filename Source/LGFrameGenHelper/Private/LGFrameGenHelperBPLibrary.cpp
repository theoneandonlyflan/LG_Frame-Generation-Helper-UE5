/* Copyright 2026, Liberation Games. All Rights Reserved.
*  This plugin is to help Indie Developers implement a simple switch
*  for frame gen technologies. Implementing this in a settings menu is very simple.
*  This plugin has been built with the developer in mind, All this can be done with one function.
*/

#include "LGFrameGenHelperBPLibrary.h"
#include "HAL/IConsoleManager.h"
#include "Misc/ConfigCacheIni.h"

void ULGFrameGenHelperBPLibrary::SetFrameGenerationMethod(E_LGFrameGenerationMethod Method)
{
    // 1. Finds the Section in the Engine.ini to edit. (Make sure to add into DefaultEngine.ini)
    FString Section = TEXT("SystemSettings");

    // 2. Sets all options to off, just to stop one frame gen technology overwriting another.
    GConfig->SetInt(*Section, TEXT("r.Streamline.Load.DLSSG"), 0, GEngineIni);
    GConfig->SetInt(*Section, TEXT("r.FidelityFX.FI.OverrideSwapChainDX12"), 0, GEngineIni);
    GConfig->SetInt(*Section, TEXT("r.XeFG.OverrideSwapChain"), 0, GEngineIni);

    // 3. Sets the Frame Generation method based on the inputed Enumeration.
    switch (Method)
    {
    case E_LGFrameGenerationMethod::DLSS:
        GConfig->SetInt(*Section, TEXT("r.Streamline.Load.DLSSG"), 1, GEngineIni);
        break;

    case E_LGFrameGenerationMethod::FSR:
        GConfig->SetInt(*Section, TEXT("r.FidelityFX.FI.OverrideSwapChainDX12"), 1, GEngineIni);
        break;

    case E_LGFrameGenerationMethod::XeFG:
        GConfig->SetInt(*Section, TEXT("r.XeFG.OverrideSwapChain"), 1, GEngineIni);
        break;

    default:
        // Defaults to Off and sets all options to off (0).
        break;
    }

    // 4. Saves the selection and sends it to the projects Engine.ini file.
    GConfig->Flush(false, GEngineIni);

    // 5. Get the String name of the enum for the log.
    FString MethodName = UEnum::GetValueAsString(Method);

    // Throws out the output Frame Generation Method to the log to show that option has changed and telling the developer to restart.
    UE_LOG(LogTemp, Warning, TEXT("Frame Generation: %s applied to Engine.ini. A restart is required to swap the Frame Generation Method."), *MethodName);
}