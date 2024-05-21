// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject1/BoxCollider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxCollider() {}
// Cross Module References
	MYPROJECT1_API UClass* Z_Construct_UClass_ABoxCollider_NoRegister();
	MYPROJECT1_API UClass* Z_Construct_UClass_ABoxCollider();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_MyProject1();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYPROJECT1_API UClass* Z_Construct_UClass_AShape1_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoxCollider::execcolisionar)
	{
		P_GET_OBJECT(AActor,Z_Param_objetoA);
		P_GET_OBJECT(AActor,Z_Param_objetoB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->colisionar(Z_Param_objetoA,Z_Param_objetoB);
		P_NATIVE_END;
	}
	void ABoxCollider::StaticRegisterNativesABoxCollider()
	{
		UClass* Class = ABoxCollider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "colisionar", &ABoxCollider::execcolisionar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxCollider_colisionar_Statics
	{
		struct BoxCollider_eventcolisionar_Parms
		{
			AActor* objetoA;
			AActor* objetoB;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objetoA;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objetoB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_colisionar_Statics::NewProp_objetoA = { "objetoA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxCollider_eventcolisionar_Parms, objetoA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_colisionar_Statics::NewProp_objetoB = { "objetoB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxCollider_eventcolisionar_Parms, objetoB), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxCollider_colisionar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_colisionar_Statics::NewProp_objetoA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_colisionar_Statics::NewProp_objetoB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider_colisionar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxCollider_colisionar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxCollider, nullptr, "colisionar", nullptr, nullptr, sizeof(BoxCollider_eventcolisionar_Parms), Z_Construct_UFunction_ABoxCollider_colisionar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_colisionar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxCollider_colisionar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_colisionar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxCollider_colisionar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxCollider_colisionar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxCollider_NoRegister()
	{
		return ABoxCollider::StaticClass();
	}
	struct Z_Construct_UClass_ABoxCollider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShapeActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShapeActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxCollider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxCollider_colisionar, "colisionar" }, // 1989785122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxCollider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BoxCollider.h" },
		{ "ModuleRelativePath", "BoxCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_ShapeActors_Inner = { "ShapeActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AShape1_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxCollider_Statics::NewProp_ShapeActors_MetaData[] = {
		{ "Category", "BoxCollider" },
		{ "ModuleRelativePath", "BoxCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_ShapeActors = { "ShapeActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxCollider, ShapeActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoxCollider_Statics::NewProp_ShapeActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::NewProp_ShapeActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_ShapeActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_ShapeActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxCollider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxCollider_Statics::ClassParams = {
		&ABoxCollider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoxCollider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxCollider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxCollider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxCollider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxCollider, 1616738171);
	template<> MYPROJECT1_API UClass* StaticClass<ABoxCollider>()
	{
		return ABoxCollider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxCollider(Z_Construct_UClass_ABoxCollider, &ABoxCollider::StaticClass, TEXT("/Script/MyProject1"), TEXT("ABoxCollider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxCollider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
