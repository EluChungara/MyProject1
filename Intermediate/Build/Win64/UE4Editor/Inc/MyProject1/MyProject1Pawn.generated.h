// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT1_MyProject1Pawn_generated_h
#error "MyProject1Pawn.generated.h already included, missing '#pragma once' in MyProject1Pawn.h"
#endif
#define MYPROJECT1_MyProject1Pawn_generated_h

#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_SPARSE_DATA
#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_RPC_WRAPPERS
#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject1Pawn(); \
	friend struct Z_Construct_UClass_AMyProject1Pawn_Statics; \
public: \
	DECLARE_CLASS(AMyProject1Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject1"), NO_API) \
	DECLARE_SERIALIZER(AMyProject1Pawn)


#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject1Pawn(); \
	friend struct Z_Construct_UClass_AMyProject1Pawn_Statics; \
public: \
	DECLARE_CLASS(AMyProject1Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject1"), NO_API) \
	DECLARE_SERIALIZER(AMyProject1Pawn)


#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject1Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject1Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject1Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject1Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject1Pawn(AMyProject1Pawn&&); \
	NO_API AMyProject1Pawn(const AMyProject1Pawn&); \
public:


#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject1Pawn(AMyProject1Pawn&&); \
	NO_API AMyProject1Pawn(const AMyProject1Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject1Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject1Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject1Pawn)


#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AMyProject1Pawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AMyProject1Pawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProject1Pawn, CameraBoom); }


#define MyProject1_Source_MyProject1_MyProject1Pawn_h_9_PROLOG
#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_SPARSE_DATA \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_RPC_WRAPPERS \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_INCLASS \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject1_Source_MyProject1_MyProject1Pawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_SPARSE_DATA \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_INCLASS_NO_PURE_DECLS \
	MyProject1_Source_MyProject1_MyProject1Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT1_API UClass* StaticClass<class AMyProject1Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject1_Source_MyProject1_MyProject1Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
