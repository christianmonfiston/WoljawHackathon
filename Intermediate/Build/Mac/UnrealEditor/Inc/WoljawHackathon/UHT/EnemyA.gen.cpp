// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WoljawHackathon/Public/EnemyA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyA() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WoljawHackathon();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_AEnemyA();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_AEnemyA_NoRegister();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References

// Begin Class AEnemyA Function DetectTarget
struct Z_Construct_UFunction_AEnemyA_DetectTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemyA.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyA_DetectTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyA, nullptr, "DetectTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyA_DetectTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyA_DetectTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyA_DetectTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyA_DetectTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyA::execDetectTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetectTarget();
	P_NATIVE_END;
}
// End Class AEnemyA Function DetectTarget

// Begin Class AEnemyA Function FireAtTarget
struct Z_Construct_UFunction_AEnemyA_FireAtTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyA_FireAtTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyA, nullptr, "FireAtTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyA_FireAtTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyA_FireAtTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyA_FireAtTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyA_FireAtTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyA::execFireAtTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireAtTarget();
	P_NATIVE_END;
}
// End Class AEnemyA Function FireAtTarget

// Begin Class AEnemyA
void AEnemyA::StaticRegisterNativesAEnemyA()
{
	UClass* Class = AEnemyA::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetectTarget", &AEnemyA::execDetectTarget },
		{ "FireAtTarget", &AEnemyA::execFireAtTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyA);
UClass* Z_Construct_UClass_AEnemyA_NoRegister()
{
	return AEnemyA::StaticClass();
}
struct Z_Construct_UClass_AEnemyA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyA.h" },
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretBase_MetaData[] = {
		{ "Category", "Turret Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretGun_MetaData[] = {
		{ "Category", "Turret Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[] = {
		{ "Category", "Turret Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "Turret Components" },
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRadius_MetaData[] = {
		{ "Category", "Turret Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// main properties mostly how the turrent work\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemyA.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "main properties mostly how the turrent work" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Turret Properties" },
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Turret Properties" },
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunRotationSpeed_MetaData[] = {
		{ "Category", "Turret" },
		{ "ModuleRelativePath", "Public/EnemyA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretGun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectionRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GunRotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyA_DetectTarget, "DetectTarget" }, // 2941887499
		{ &Z_Construct_UFunction_AEnemyA_FireAtTarget, "FireAtTarget" }, // 2459981128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyA_Statics::NewProp_TurretBase = { "TurretBase", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyA, TurretBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretBase_MetaData), NewProp_TurretBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyA_Statics::NewProp_TurretGun = { "TurretGun", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyA, TurretGun), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretGun_MetaData), NewProp_TurretGun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyA_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyA, DetectionRange), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRange_MetaData), NewProp_DetectionRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyA_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyA, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyA_Statics::NewProp_DetectionRadius = { "DetectionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyA, DetectionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRadius_MetaData), NewProp_DetectionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyA_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyA, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyA_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyA, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyA_Statics::NewProp_GunRotationSpeed = { "GunRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyA, GunRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunRotationSpeed_MetaData), NewProp_GunRotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyA_Statics::NewProp_TurretBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyA_Statics::NewProp_TurretGun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyA_Statics::NewProp_DetectionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyA_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyA_Statics::NewProp_DetectionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyA_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyA_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyA_Statics::NewProp_GunRotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyA_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WoljawHackathon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyA_Statics::ClassParams = {
	&AEnemyA::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyA_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyA_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyA_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyA()
{
	if (!Z_Registration_Info_UClass_AEnemyA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyA.OuterSingleton, Z_Construct_UClass_AEnemyA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyA.OuterSingleton;
}
template<> WOLJAWHACKATHON_API UClass* StaticClass<AEnemyA>()
{
	return AEnemyA::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyA);
AEnemyA::~AEnemyA() {}
// End Class AEnemyA

// Begin Registration
struct Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_EnemyA_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyA, AEnemyA::StaticClass, TEXT("AEnemyA"), &Z_Registration_Info_UClass_AEnemyA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyA), 3077981540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_EnemyA_h_1282286491(TEXT("/Script/WoljawHackathon"),
	Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_EnemyA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_EnemyA_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
