// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYPROJECT1_MyProject1Projectile_generated_h
#error "MyProject1Projectile.generated.h already included, missing '#pragma once' in MyProject1Projectile.h"
#endif
#define MYPROJECT1_MyProject1Projectile_generated_h

#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_SPARSE_DATA
#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject1Projectile(); \
	friend struct Z_Construct_UClass_AMyProject1Projectile_Statics; \
public: \
	DECLARE_CLASS(AMyProject1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject1"), NO_API) \
	DECLARE_SERIALIZER(AMyProject1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject1Projectile(); \
	friend struct Z_Construct_UClass_AMyProject1Projectile_Statics; \
public: \
	DECLARE_CLASS(AMyProject1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject1"), NO_API) \
	DECLARE_SERIALIZER(AMyProject1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject1Projectile(AMyProject1Projectile&&); \
	NO_API AMyProject1Projectile(const AMyProject1Projectile&); \
public:


#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject1Projectile(AMyProject1Projectile&&); \
	NO_API AMyProject1Projectile(const AMyProject1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject1Projectile)


#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AMyProject1Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyProject1Projectile, ProjectileMovement); }


#define MyProject1_Source_MyProject1_MyProject1Projectile_h_12_PROLOG
#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_SPARSE_DATA \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_RPC_WRAPPERS \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_INCLASS \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject1_Source_MyProject1_MyProject1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_SPARSE_DATA \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	MyProject1_Source_MyProject1_MyProject1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT1_API UClass* StaticClass<class AMyProject1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject1_Source_MyProject1_MyProject1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
