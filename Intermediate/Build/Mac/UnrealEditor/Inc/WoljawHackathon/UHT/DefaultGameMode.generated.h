// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WOLJAWHACKATHON_DefaultGameMode_generated_h
#error "DefaultGameMode.generated.h already included, missing '#pragma once' in DefaultGameMode.h"
#endif
#define WOLJAWHACKATHON_DefaultGameMode_generated_h

#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecreaseMatchTime); \
	DECLARE_FUNCTION(execHandleMatchEnd); \
	DECLARE_FUNCTION(execCollectHeartFragment);


#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultGameMode(); \
	friend struct Z_Construct_UClass_ADefaultGameMode_Statics; \
public: \
	DECLARE_CLASS(ADefaultGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WoljawHackathon"), NO_API) \
	DECLARE_SERIALIZER(ADefaultGameMode)


#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefaultGameMode(ADefaultGameMode&&); \
	ADefaultGameMode(const ADefaultGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultGameMode) \
	NO_API virtual ~ADefaultGameMode();


#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_13_PROLOG
#define FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WOLJAWHACKATHON_API UClass* StaticClass<class ADefaultGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_christianoliviermonfiston_Desktop_WoljawGame_Wolfjaw_WoljawHackathon_Source_WoljawHackathon_Public_DefaultGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
