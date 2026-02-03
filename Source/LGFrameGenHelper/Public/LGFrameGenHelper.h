/* Copyright 2026, Liberation Games. All Rights Reserved.
*  This plugin is to help Indie Developers implement a simple switch
*  for frame gen technologies. Implementing this in a settings menu is very simple.
*  This plugin has been built with the developer in mind, All this can be done with one function.
*/

#pragma once

#include "Modules/ModuleManager.h"

class FLGFrameGenHelperModule : public IModuleInterface
{
public:

	
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
