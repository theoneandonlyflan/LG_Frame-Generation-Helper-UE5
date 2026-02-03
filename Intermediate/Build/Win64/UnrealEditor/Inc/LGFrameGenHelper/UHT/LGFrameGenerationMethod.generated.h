// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LGFrameGenerationMethod.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LGFRAMEGENHELPER_LGFrameGenerationMethod_generated_h
#error "LGFrameGenerationMethod.generated.h already included, missing '#pragma once' in LGFrameGenerationMethod.h"
#endif
#define LGFRAMEGENHELPER_LGFrameGenerationMethod_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenerationMethod_h


#define FOREACH_ENUM_E_LGFRAMEGENERATIONMETHOD(op) \
	op(E_LGFrameGenerationMethod::Off) \
	op(E_LGFrameGenerationMethod::DLSS) \
	op(E_LGFrameGenerationMethod::FSR) \
	op(E_LGFrameGenerationMethod::XeFG) 

enum class E_LGFrameGenerationMethod : uint8;
template<> struct TIsUEnumClass<E_LGFrameGenerationMethod> { enum { Value = true }; };
template<> LGFRAMEGENHELPER_API UEnum* StaticEnum<E_LGFrameGenerationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
