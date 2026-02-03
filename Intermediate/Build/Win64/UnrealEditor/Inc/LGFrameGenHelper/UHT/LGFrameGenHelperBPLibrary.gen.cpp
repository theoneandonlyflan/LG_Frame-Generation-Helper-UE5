// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LGFrameGenHelper/Public/LGFrameGenHelperBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGFrameGenHelperBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LGFRAMEGENHELPER_API UClass* Z_Construct_UClass_ULGFrameGenHelperBPLibrary();
LGFRAMEGENHELPER_API UClass* Z_Construct_UClass_ULGFrameGenHelperBPLibrary_NoRegister();
LGFRAMEGENHELPER_API UEnum* Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod();
UPackage* Z_Construct_UPackage__Script_LGFrameGenHelper();
// End Cross Module References

// Begin Class ULGFrameGenHelperBPLibrary Function SetFrameGenerationMethod
struct Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics
{
	struct LGFrameGenHelperBPLibrary_eventSetFrameGenerationMethod_Parms
	{
		E_LGFrameGenerationMethod Method;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LG Frame Generation" },
		{ "ModuleRelativePath", "Public/LGFrameGenHelperBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LGFrameGenHelperBPLibrary_eventSetFrameGenerationMethod_Parms, Method), Z_Construct_UEnum_LGFrameGenHelper_E_LGFrameGenerationMethod, METADATA_PARAMS(0, nullptr) }; // 1066505276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::NewProp_Method,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGFrameGenHelperBPLibrary, nullptr, "SetFrameGenerationMethod", nullptr, nullptr, Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::LGFrameGenHelperBPLibrary_eventSetFrameGenerationMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::LGFrameGenHelperBPLibrary_eventSetFrameGenerationMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULGFrameGenHelperBPLibrary::execSetFrameGenerationMethod)
{
	P_GET_ENUM(E_LGFrameGenerationMethod,Z_Param_Method);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULGFrameGenHelperBPLibrary::SetFrameGenerationMethod(E_LGFrameGenerationMethod(Z_Param_Method));
	P_NATIVE_END;
}
// End Class ULGFrameGenHelperBPLibrary Function SetFrameGenerationMethod

// Begin Class ULGFrameGenHelperBPLibrary
void ULGFrameGenHelperBPLibrary::StaticRegisterNativesULGFrameGenHelperBPLibrary()
{
	UClass* Class = ULGFrameGenHelperBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFrameGenerationMethod", &ULGFrameGenHelperBPLibrary::execSetFrameGenerationMethod },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULGFrameGenHelperBPLibrary);
UClass* Z_Construct_UClass_ULGFrameGenHelperBPLibrary_NoRegister()
{
	return ULGFrameGenHelperBPLibrary::StaticClass();
}
struct Z_Construct_UClass_ULGFrameGenHelperBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LGFrameGenHelperBPLibrary.h" },
		{ "ModuleRelativePath", "Public/LGFrameGenHelperBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGFrameGenHelperBPLibrary_SetFrameGenerationMethod, "SetFrameGenerationMethod" }, // 2125808602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGFrameGenHelperBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULGFrameGenHelperBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LGFrameGenHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULGFrameGenHelperBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULGFrameGenHelperBPLibrary_Statics::ClassParams = {
	&ULGFrameGenHelperBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULGFrameGenHelperBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULGFrameGenHelperBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULGFrameGenHelperBPLibrary()
{
	if (!Z_Registration_Info_UClass_ULGFrameGenHelperBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULGFrameGenHelperBPLibrary.OuterSingleton, Z_Construct_UClass_ULGFrameGenHelperBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULGFrameGenHelperBPLibrary.OuterSingleton;
}
template<> LGFRAMEGENHELPER_API UClass* StaticClass<ULGFrameGenHelperBPLibrary>()
{
	return ULGFrameGenHelperBPLibrary::StaticClass();
}
ULGFrameGenHelperBPLibrary::ULGFrameGenHelperBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULGFrameGenHelperBPLibrary);
ULGFrameGenHelperBPLibrary::~ULGFrameGenHelperBPLibrary() {}
// End Class ULGFrameGenHelperBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenHelperBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULGFrameGenHelperBPLibrary, ULGFrameGenHelperBPLibrary::StaticClass, TEXT("ULGFrameGenHelperBPLibrary"), &Z_Registration_Info_UClass_ULGFrameGenHelperBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULGFrameGenHelperBPLibrary), 2235148094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenHelperBPLibrary_h_3139847122(TEXT("/Script/LGFrameGenHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenHelperBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Unreal_Packages_PluginPackages_LGFrameGenHelper_HostProject_Plugins_LGFrameGenHelper_Source_LGFrameGenHelper_Public_LGFrameGenHelperBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
