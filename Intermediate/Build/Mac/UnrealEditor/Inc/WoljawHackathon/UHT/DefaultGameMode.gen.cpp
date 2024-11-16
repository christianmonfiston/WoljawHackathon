// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WoljawHackathon/Public/DefaultGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_WoljawHackathon();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_ADefaultGameMode();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_ADefaultGameMode_NoRegister();
// End Cross Module References

// Begin Class ADefaultGameMode Function HandleMatchEnd
struct Z_Construct_UFunction_ADefaultGameMode_HandleMatchEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//function to end the match\n" },
#endif
		{ "ModuleRelativePath", "Public/DefaultGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "function to end the match" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultGameMode_HandleMatchEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultGameMode, nullptr, "HandleMatchEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultGameMode_HandleMatchEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultGameMode_HandleMatchEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADefaultGameMode_HandleMatchEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultGameMode_HandleMatchEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefaultGameMode::execHandleMatchEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMatchEnd();
	P_NATIVE_END;
}
// End Class ADefaultGameMode Function HandleMatchEnd

// Begin Class ADefaultGameMode
void ADefaultGameMode::StaticRegisterNativesADefaultGameMode()
{
	UClass* Class = ADefaultGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleMatchEnd", &ADefaultGameMode::execHandleMatchEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultGameMode);
UClass* Z_Construct_UClass_ADefaultGameMode_NoRegister()
{
	return ADefaultGameMode::StaticClass();
}
struct Z_Construct_UClass_ADefaultGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DefaultGameMode.h" },
		{ "ModuleRelativePath", "Public/DefaultGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchDuration_MetaData[] = {
		{ "Category", "Match Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//match duration variable\n" },
#endif
		{ "ModuleRelativePath", "Public/DefaultGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "match duration variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultGameMode_HandleMatchEnd, "HandleMatchEnd" }, // 675202964
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultGameMode_Statics::NewProp_MatchDuration = { "MatchDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultGameMode, MatchDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchDuration_MetaData), NewProp_MatchDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGameMode_Statics::NewProp_MatchDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefaultGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_WoljawHackathon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultGameMode_Statics::ClassParams = {
	&ADefaultGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADefaultGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultGameMode()
{
	if (!Z_Registration_Info_UClass_ADefaultGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultGameMode.OuterSingleton, Z_Construct_UClass_ADefaultGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultGameMode.OuterSingleton;
}
template<> WOLJAWHACKATHON_API UClass* StaticClass<ADefaultGameMode>()
{
	return ADefaultGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultGameMode);
ADefaultGameMode::~ADefaultGameMode() {}
// End Class ADefaultGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultGameMode, ADefaultGameMode::StaticClass, TEXT("ADefaultGameMode"), &Z_Registration_Info_UClass_ADefaultGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultGameMode), 508614725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_2229731111(TEXT("/Script/WoljawHackathon"),
	Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
