// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPEBUILDING_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define ESCAPEBUILDING_OpenDoor_generated_h

#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_RPC_WRAPPERS
#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend ESCAPEBUILDING_API class UClass* Z_Construct_UClass_UOpenDoor(); \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EscapeBuilding"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend ESCAPEBUILDING_API class UClass* Z_Construct_UClass_UOpenDoor(); \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EscapeBuilding"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UOpenDoor, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__CloseDoorDelay() { return STRUCT_OFFSET(UOpenDoor, CloseDoorDelay); }


#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_10_PROLOG
#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_RPC_WRAPPERS \
	EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_INCLASS \
	EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
	EscapeBuilding_Source_EscapeBuilding_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeBuilding_Source_EscapeBuilding_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
