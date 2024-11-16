// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engineer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WOLJAWHACKATHON_Engineer_generated_h
#error "Engineer.generated.h already included, missing '#pragma once' in Engineer.h"
#endif
#define WOLJAWHACKATHON_Engineer_generated_h

#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execDisplayPlayerHUD);


#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEngineer(); \
	friend struct Z_Construct_UClass_AEngineer_Statics; \
public: \
	DECLARE_CLASS(AEngineer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WoljawHackathon"), NO_API) \
	DECLARE_SERIALIZER(AEngineer)


#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEngineer(AEngineer&&); \
	AEngineer(const AEngineer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEngineer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEngineer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEngineer) \
	NO_API virtual ~AEngineer();


#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_30_PROLOG
#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_33_INCLASS_NO_PURE_DECLS \
	FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WOLJAWHACKATHON_API UClass* StaticClass<class AEngineer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_Engineer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
