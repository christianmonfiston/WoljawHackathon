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
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WoljawHackathon();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_AEngineer();
WOLJAWHACKATHON_API UClass* Z_Construct_UClass_AEngineer_NoRegister();
// End Cross Module References

// Begin Class AEngineer
void AEngineer::StaticRegisterNativesAEngineer()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Player Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player properties" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryMesh_MetaData[] = {
		{ "Category", "Player Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMesh_MetaData[] = {
		{ "Category", "Player Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[] = {
		{ "Category", "Player Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weapon properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamage_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFireRate_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileFireRate_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDelayDuration_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDelayDuration_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFireSound_MetaData[] = {
		{ "Category", "Player Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileFireSound_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMuzzleFlashOffset_MetaData[] = {
		{ "Category", "Player Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Muzzle flash offsets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Muzzle flash offsets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMuzzleFlashOffset_MetaData[] = {
		{ "Category", "Player Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engineer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutomatic_MetaData[] = {
		{ "Category", "Player Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weapon mode\n" },
#endif
		{ "ModuleRelativePath", "Public/Engineer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponFireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileFireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDelayDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileDelayDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponFireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileFireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMuzzleFlashOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMuzzleFlashOffset;
	static void NewProp_bIsAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomatic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEngineer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_PrimaryMesh = { "PrimaryMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, PrimaryMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryMesh_MetaData), NewProp_PrimaryMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_SecondaryMesh = { "SecondaryMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, SecondaryMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryMesh_MetaData), NewProp_SecondaryMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponRange_MetaData), NewProp_WeaponRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponDamage_MetaData), NewProp_WeaponDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileDamage = { "ProjectileDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamage_MetaData), NewProp_ProjectileDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponFireRate = { "WeaponFireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponFireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFireRate_MetaData), NewProp_WeaponFireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileFireRate = { "ProjectileFireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileFireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileFireRate_MetaData), NewProp_ProjectileFireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponDelayDuration = { "WeaponDelayDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponDelayDuration_MetaData), NewProp_WeaponDelayDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileDelayDuration = { "ProjectileDelayDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDelayDuration_MetaData), NewProp_ProjectileDelayDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponFireSound = { "WeaponFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFireSound_MetaData), NewProp_WeaponFireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileFireSound = { "ProjectileFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileFireSound_MetaData), NewProp_ProjectileFireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponMuzzleFlashOffset = { "WeaponMuzzleFlashOffset", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, WeaponMuzzleFlashOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMuzzleFlashOffset_MetaData), NewProp_WeaponMuzzleFlashOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileMuzzleFlashOffset = { "ProjectileMuzzleFlashOffset", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineer, ProjectileMuzzleFlashOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMuzzleFlashOffset_MetaData), NewProp_ProjectileMuzzleFlashOffset_MetaData) };
void Z_Construct_UClass_AEngineer_Statics::NewProp_bIsAutomatic_SetBit(void* Obj)
{
	((AEngineer*)Obj)->bIsAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEngineer_Statics::NewProp_bIsAutomatic = { "bIsAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEngineer), &Z_Construct_UClass_AEngineer_Statics::NewProp_bIsAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAutomatic_MetaData), NewProp_bIsAutomatic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEngineer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_PrimaryMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_SecondaryMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponFireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileFireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponDelayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileDelayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponFireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileFireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_WeaponMuzzleFlashOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_ProjectileMuzzleFlashOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineer_Statics::NewProp_bIsAutomatic,
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
	nullptr,
	Z_Construct_UClass_AEngineer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_AEngineer, AEngineer::StaticClass, TEXT("AEngineer"), &Z_Registration_Info_UClass_AEngineer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEngineer), 1869151019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_1819185171(TEXT("/Script/WoljawHackathon"),
	Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
