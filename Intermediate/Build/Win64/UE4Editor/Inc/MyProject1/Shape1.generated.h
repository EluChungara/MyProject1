// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT1_Shape1_generated_h
#error "Shape1.generated.h already included, missing '#pragma once' in Shape1.h"
#endif
#define MYPROJECT1_Shape1_generated_h

#define MyProject1_Source_MyProject1_Shape1_h_12_SPARSE_DATA
#define MyProject1_Source_MyProject1_Shape1_h_12_RPC_WRAPPERS
#define MyProject1_Source_MyProject1_Shape1_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject1_Source_MyProject1_Shape1_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShape1(); \
	friend struct Z_Construct_UClass_AShape1_Statics; \
public: \
	DECLARE_CLASS(AShape1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject1"), NO_API) \
	DECLARE_SERIALIZER(AShape1)


#define MyProject1_Source_MyProject1_Shape1_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShape1(); \
	friend struct Z_Construct_UClass_AShape1_Statics; \
public: \
	DECLARE_CLASS(AShape1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject1"), NO_API) \
	DECLARE_SERIALIZER(AShape1)


#define MyProject1_Source_MyProject1_Shape1_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShape1(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShape1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShape1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShape1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShape1(AShape1&&); \
	NO_API AShape1(const AShape1&); \
public:


#define MyProject1_Source_MyProject1_Shape1_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShape1(AShape1&&); \
	NO_API AShape1(const AShape1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShape1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShape1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShape1)


#define MyProject1_Source_MyProject1_Shape1_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__velocity() { return STRUCT_OFFSET(AShape1, velocity); } \
	FORCEINLINE static uint32 __PPO__damageLevel() { return STRUCT_OFFSET(AShape1, damageLevel); }


#define MyProject1_Source_MyProject1_Shape1_h_9_PROLOG
#define MyProject1_Source_MyProject1_Shape1_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject1_Source_MyProject1_Shape1_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject1_Source_MyProject1_Shape1_h_12_SPARSE_DATA \
	MyProject1_Source_MyProject1_Shape1_h_12_RPC_WRAPPERS \
	MyProject1_Source_MyProject1_Shape1_h_12_INCLASS \
	MyProject1_Source_MyProject1_Shape1_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject1_Source_MyProject1_Shape1_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject1_Source_MyProject1_Shape1_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject1_Source_MyProject1_Shape1_h_12_SPARSE_DATA \
	MyProject1_Source_MyProject1_Shape1_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject1_Source_MyProject1_Shape1_h_12_INCLASS_NO_PURE_DECLS \
	MyProject1_Source_MyProject1_Shape1_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT1_API UClass* StaticClass<class AShape1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject1_Source_MyProject1_Shape1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
