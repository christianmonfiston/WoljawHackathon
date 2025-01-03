// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WoljawHackathon/Public/Engineer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_WoljawHackathon();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_AEngineer();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_AEngineer_NoRegister();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References

// Begin Class AEngineer Function CollectHeartFragment
struct Z_Construct_UFunction_AEngineer_CollectHeartFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineer_CollectHeartFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEngineer, nullptr, "CollectHeartFragment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineer_CollectHeartFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineer_CollectHeartFragment_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEngineer_CollectHeartFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineer_CollectHeartFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineer::execCollectHeartFragment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectHeartFragment();
	P_NATIVE_END;
}
// End Class AEngineer Function CollectHeartFragment

// Begin Class AEngineer Function DisplayPlayerHUD
struct Z_Construct_UFunction_AEngineer_DisplayPlayerHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineer_DisplayPlayerHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEngineer, nullptr, "DisplayPlayerHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineer_DisplayPlayerHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineer_DisplayPlayerHUD_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEngineer_DisplayPlayerHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineer_DisplayPlayerHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineer::execDisplayPlayerHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisplayPlayerHUD();
	P_NATIVE_END;
}
// End Class AEngineer Function DisplayPlayerHUD

// Begin Class AEngineer Function Fire
struct Z_Construct_UFunction_AEngineer_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineer_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEngineer, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineer_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineer_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEngineer_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineer_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineer::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class AEngineer Function Fire

// Begin Class AEngineer Function FireProjectile
struct Z_Construct_UFunction_AEngineer_FireProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineer_FireProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEngineer, nullptr, "FireProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineer_FireProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineer_FireProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEngineer_FireProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineer_FireProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineer::execFireProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireProjectile();
	P_NATIVE_END;
}
// End Class AEngineer Function FireProjectile

// Begin Class AEngineer Function StartFire
struct Z_Construct_UFunction_AEngineer_StartFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineer_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEngineer, nullptr, "StartFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineer_StartFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineer_StartFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEngineer_StartFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineer_StartFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineer::execStartFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFire();
	P_NATIVE_END;
}
// End Class AEngineer Function StartFire

// Begin Class AEngineer Function StartFireProjectile
struct Z_Construct_UFunction_AEngineer_StartFireProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineer_StartFireProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEngineer, nullptr, "StartFireProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineer_StartFireProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineer_StartFireProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEngineer_StartFireProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineer_StartFireProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineer::execStartFireProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFireProjectile();
	P_NATIVE_END;
}
// End Class AEngineer Function StartFireProjectile

// Begin Class AEngineer Function StopFire
struct Z_Construct_UFunction_AEngineer_StopFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineer_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEngineer, nullptr, "StopFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineer_StopFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineer_StopFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEngineer_StopFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineer_StopFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineer::execStopFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFire();
	P_NATIVE_END;
}
// End Class AEngineer Function StopFire

// Begin Class AEngineer Function StopFireProjectile
struct Z_Construct_UFunction_AEngineer_StopFireProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineer_StopFireProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEngineer, nullptr, "StopFireProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineer_StopFireProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineer_StopFireProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEngineer_StopFireProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineer_StopFireProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineer::execStopFireProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFireProjectile();
	P_NATIVE_END;
}
// End Class AEngineer Function StopFireProjectile

// Begin Class AEngineer
void AEngineer::StaticRegisterNativesAEngineer()
{
	UClass* Class = AEngineer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CollectHeartFragment", &AEngineer::execCollectHeartFragment },
		{ "DisplayPlayerHUD", &AEngineer::execDisplayPlayerHUD },
		{ "Fire", &AEngineer::execFire },
		{ "FireProjectile", &AEngineer::execFireProjectile },
		{ "StartFire", &AEngineer::execStartFire },
		{ "StartFireProjectile", &AEngineer::execStartFireProjectile },
		{ "StopFire", &AEngineer::execStopFire },
		{ "StopFireProjectile", &AEngineer::execStopFireProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEngineer);
UClass* Z_Construct_UClass_AEngineer_NoRegister()
{
	return AEngineer::StaticClass();
}
struct Z_Construct_UClass_AEngineer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Engineer.h" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopFireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFireProjectileAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopFireProjectileAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadProjectileAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCapsule_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCapsule_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Player Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShield_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movement Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement and Rotation Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement and Rotation Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSmoothness_MetaData[] = {
		{ "Category", "Movement Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothRotation_MetaData[] = {
		{ "Category", "Movement Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[] = {
		{ "Category", "Weapon Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weapon Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamage_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFireRate_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileFireRate_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDelayDuration_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDelayDuration_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutomatic_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMuzzleFlashOffset_MetaData[] = {
		{ "Category", "Weapon Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weapon Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMuzzleFlashOffset_MetaData[] = {
		{ "Category", "Weapon Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnLocation_MetaData[] = {
		{ "Category", "Weapon Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFireSound_MetaData[] = {
		{ "Category", "Sound Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileFireSound_MetaData[] = {
		{ "Category", "Sound Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UMG_PlayerHUD_MetaData[] = {
		{ "Category", "HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HUD Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "Engineer" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartFireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopFireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartFireProjectileAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopFireProjectileAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadProjectileAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentShield;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShield;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSmoothness;
	static void NewProp_bSmoothRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponFireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileFireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDelayDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileDelayDuration;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static void NewProp_bIsAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomatic;
	static void NewProp_bIsReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMuzzleFlashOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMuzzleFlashOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponFireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileFireSound;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UMG_PlayerHUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEngineer_CollectHeartFragment, "CollectHeartFragment" }, // 3728525254
		{ &Z_Construct_UFunction_AEngineer_DisplayPlayerHUD, "DisplayPlayerHUD" }, // 1165841472
		{ &Z_Construct_UFunction_AEngineer_Fire, "Fire" }, // 596899649
		{ &Z_Construct_UFunction_AEngineer_FireProjectile, "FireProjectile" }, // 2893717471
		{ &Z_Construct_UFunction_AEngineer_StartFire, "StartFire" }, // 3286644511
		{ &Z_Construct_UFunction_AEngineer_StartFireProjectile, "StartFireProjectile" }, // 2361250432
		{ &Z_Construct_UFunction_AEngineer_StopFire, "StopFire" }, // 322629447
		{ &Z_Construct_UFunction_AEngineer_StopFireProjectile, "StopFireProjectile" }, // 4179076354
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEngineer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_StartFireAction = { "StartFireAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, StartFireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFireAction_MetaData), NewProp_StartFireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_StopFireAction = { "StopFireAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, StopFireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopFireAction_MetaData), NewProp_StopFireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAction_MetaData), NewProp_ReloadAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_StartFireProjectileAction = { "StartFireProjectileAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, StartFireProjectileAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFireProjectileAction_MetaData), NewProp_StartFireProjectileAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_StopFireProjectileAction = { "StopFireProjectileAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, StopFireProjectileAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopFireProjectileAction_MetaData), NewProp_StopFireProjectileAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ReloadProjectileAction = { "ReloadProjectileAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ReloadProjectileAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadProjectileAction_MetaData), NewProp_ReloadProjectileAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_MainComponent = { "MainComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, MainComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainComponent_MetaData), NewProp_MainComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_MainCapsule = { "MainCapsule", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, MainCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCapsule_MetaData), NewProp_MainCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_SecondaryCapsule = { "SecondaryCapsule", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, SecondaryCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryCapsule_MetaData), NewProp_SecondaryCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_PrimaryMesh = { "PrimaryMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, PrimaryMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryMesh_MetaData), NewProp_PrimaryMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_SecondaryMesh = { "SecondaryMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, SecondaryMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryMesh_MetaData), NewProp_SecondaryMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamera_MetaData), NewProp_PlayerCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_CurrentShield = { "CurrentShield", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, CurrentShield), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentShield_MetaData), NewProp_CurrentShield_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_MaxShield = { "MaxShield", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, MaxShield), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShield_MetaData), NewProp_MaxShield_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_TurnSmoothness = { "TurnSmoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, TurnSmoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSmoothness_MetaData), NewProp_TurnSmoothness_MetaData) };
void Z_Construct_UClass_AEngineer_Statics::NewProp_bSmoothRotation_SetBit(void* Obj)
{
	((AEngineer*)Obj)->bSmoothRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_bSmoothRotation = { "bSmoothRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEngineer), &Z_Construct_UClass_AEngineer_Statics::NewProp_bSmoothRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothRotation_MetaData), NewProp_bSmoothRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponRange_MetaData), NewProp_WeaponRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponDamage_MetaData), NewProp_WeaponDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileDamage = { "ProjectileDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamage_MetaData), NewProp_ProjectileDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponFireRate = { "WeaponFireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponFireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFireRate_MetaData), NewProp_WeaponFireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileFireRate = { "ProjectileFireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileFireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileFireRate_MetaData), NewProp_ProjectileFireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponDelayDuration = { "WeaponDelayDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponDelayDuration_MetaData), NewProp_WeaponDelayDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileDelayDuration = { "ProjectileDelayDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDelayDuration_MetaData), NewProp_ProjectileDelayDuration_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
void Z_Construct_UClass_AEngineer_Statics::NewProp_bIsAutomatic_SetBit(void* Obj)
{
	((AEngineer*)Obj)->bIsAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_bIsAutomatic = { "bIsAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEngineer), &Z_Construct_UClass_AEngineer_Statics::NewProp_bIsAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAutomatic_MetaData), NewProp_bIsAutomatic_MetaData) };
void Z_Construct_UClass_AEngineer_Statics::NewProp_bIsReloading_SetBit(void* Obj)
{
	((AEngineer*)Obj)->bIsReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEngineer), &Z_Construct_UClass_AEngineer_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReloading_MetaData), NewProp_bIsReloading_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, CurrentAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAmmo_MetaData), NewProp_CurrentAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmo_MetaData), NewProp_MaxAmmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponMuzzleFlashOffset = { "WeaponMuzzleFlashOffset", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponMuzzleFlashOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMuzzleFlashOffset_MetaData), NewProp_WeaponMuzzleFlashOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileMuzzleFlashOffset = { "ProjectileMuzzleFlashOffset", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileMuzzleFlashOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMuzzleFlashOffset_MetaData), NewProp_ProjectileMuzzleFlashOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileSpawnLocation = { "ProjectileSpawnLocation", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileSpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpawnLocation_MetaData), NewProp_ProjectileSpawnLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponFireSound = { "WeaponFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFireSound_MetaData), NewProp_WeaponFireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileFireSound = { "ProjectileFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileFireSound_MetaData), NewProp_ProjectileFireSound_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_UMG_PlayerHUD = { "UMG_PlayerHUD", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, UMG_PlayerHUD), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UMG_PlayerHUD_MetaData), NewProp_UMG_PlayerHUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, HUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_MetaData), NewProp_HUD_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEngineer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_StartFireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_StopFireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ReloadAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_StartFireProjectileAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_StopFireProjectileAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ReloadProjectileAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_MainComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_MainCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_SecondaryCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_PrimaryMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_SecondaryMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_PlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_CurrentShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_MaxShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_TurnSmoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_bSmoothRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponFireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileFireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponDelayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileDelayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_bIsAutomatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_bIsReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_MaxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponMuzzleFlashOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileMuzzleFlashOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileSpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponFireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileFireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_UMG_PlayerHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_HUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEngineer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEngineer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_WoljawHackathon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEngineer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEngineer_Statics::ClassParams = {
	&AEngineer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEngineer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEngineer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEngineer_Statics::Class_MetaDataParams), Z_Construct_UClass_AEngineer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEngineer()
{
	if (!Z_Registration_Info_UClass_AEngineer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEngineer.OuterSingleton, Z_Construct_UClass_AEngineer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEngineer.OuterSingleton;
}
template<> WOLJAWHACKATHON_API UClass* StaticClass<AEngineer>()
{
	return AEngineer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEngineer);
AEngineer::~AEngineer() {}
// End Class AEngineer

// Begin Registration
struct Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEngineer, AEngineer::StaticClass, TEXT("AEngineer"), &Z_Registration_Info_UClass_AEngineer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEngineer), 562887275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_1127520484(TEXT("/Script/WoljawHackathon"),
	Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
