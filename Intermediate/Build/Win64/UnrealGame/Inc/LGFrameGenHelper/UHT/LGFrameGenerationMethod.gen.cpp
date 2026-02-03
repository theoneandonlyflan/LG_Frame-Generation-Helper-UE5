// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LGFrameGenHelper/Public/LGFrameGenerationMethod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGFrameGenerationMethod() {}

// Begin Cross Module References
LGFRAMEGENHELPER_API UEnum* Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod();
UPackage* Z_Construct_UPackage__Script_LGFrameGenHelper();
// End Cross Module References

// Begin Enum E_LGFrameGenerationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_LGFrameGenerationMethod;
static UEnum* E_LGFrameGenerationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_LGFrameGenerationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_LGFrameGenerationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod, (UObject*)Z_Construct_UPackage__Script_LGFrameGenHelper(), TEXT("E_LGFrameGenerationMethod"));
	}
	return Z_Registration_Info_UEnum_E_LGFrameGenerationMethod.OuterSingleton;
}
template<> LGFRAMEGENHELPER_API UEnum* StaticEnum<E_LGFrameGenerationMethod>()
{
	return E_LGFrameGenerationMethod_StaticEnum();
}
struct Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DLSS.DisplayName", "(Nvidia) DLSS Frame Generation" },
		{ "DLSS.Name", "E_LGFrameGenerationMethod::DLSS" },
		{ "FSR.DisplayName", "(AMD) FSR Frame Generation" },
		{ "FSR.Name", "E_LGFrameGenerationMethod::FSR" },
		{ "ModuleRelativePath", "Public/LGFrameGenerationMethod.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "E_LGFrameGenerationMethod::Off" },
		{ "XeFG.DisplayName", "(Intel) XeFG Frame Generation" },
		{ "XeFG.Name", "E_LGFrameGenerationMethod::XeFG" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_LGFrameGenerationMethod::Off", (int64)E_LGFrameGenerationMethod::Off },
		{ "E_LGFrameGenerationMethod::DLSS", (int64)E_LGFrameGenerationMethod::DLSS },
		{ "E_LGFrameGenerationMethod::FSR", (int64)E_LGFrameGenerationMethod::FSR },
		{ "E_LGFrameGenerationMethod::XeFG", (int64)E_LGFrameGenerationMethod::XeFG },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LGFrameGenHelper,
	nullptr,
	"E_LGFrameGenerationMethod",
	"E_LGFrameGenerationMethod",
	Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod()
{
	if (!Z_Registration_Info_UEnum_E_LGFrameGenerationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_LGFrameGenerationMethod.InnerSingleton, Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_LGFrameGenerationMethod.InnerSingleton;
}
// End Enum E_LGFrameGenerationMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenerationMethod_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_LGFrameGenerationMethod_StaticEnum, TEXT("E_LGFrameGenerationMethod"), &Z_Registration_Info_UEnum_E_LGFrameGenerationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1066505276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenerationMethod_h_3640819161(TEXT("/Script/LGFrameGenHelper"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenerationMethod_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenerationMethod_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
