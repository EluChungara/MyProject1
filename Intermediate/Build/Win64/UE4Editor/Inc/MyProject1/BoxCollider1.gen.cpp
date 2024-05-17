// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject1/BoxCollider1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxCollider1() {}
// Cross Module References
	MYPROJECT1_API UClass* Z_Construct_UClass_ABoxCollider1_NoRegister();
	MYPROJECT1_API UClass* Z_Construct_UClass_ABoxCollider1();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_MyProject1();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYPROJECT1_API UClass* Z_Construct_UClass_AMyProject1Pawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoxCollider1::execcolisionar)
	{
		P_GET_OBJECT(AActor,Z_Param_objetoA);
		P_GET_OBJECT(AActor,Z_Param_objetoB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->colisionar(Z_Param_objetoA,Z_Param_objetoB);
		P_NATIVE_END;
	}
	void ABoxCollider1::StaticRegisterNativesABoxCollider1()
	{
		UClass* Class = ABoxCollider1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "colisionar", &ABoxCollider1::execcolisionar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxCollider1_colisionar_Statics
	{
		struct BoxCollider1_eventcolisionar_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::NewProp_objetoA = { "objetoA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxCollider1_eventcolisionar_Parms, objetoA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::NewProp_objetoB = { "objetoB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxCollider1_eventcolisionar_Parms, objetoB), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::NewProp_objetoA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::NewProp_objetoB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxCollider1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxCollider1, nullptr, "colisionar", nullptr, nullptr, sizeof(BoxCollider1_eventcolisionar_Parms), Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxCollider1_colisionar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxCollider1_colisionar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxCollider1_NoRegister()
	{
		return ABoxCollider1::StaticClass();
	}
	struct Z_Construct_UClass_ABoxCollider1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxCollider1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxCollider1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxCollider1_colisionar, "colisionar" }, // 1014818044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxCollider1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BoxCollider1.h" },
		{ "ModuleRelativePath", "BoxCollider1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxCollider1_Statics::NewProp_nave_MetaData[] = {
		{ "Category", "BoxCollider1" },
		{ "ModuleRelativePath", "BoxCollider1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider1_Statics::NewProp_nave = { "nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxCollider1, nave), Z_Construct_UClass_AMyProject1Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxCollider1_Statics::NewProp_nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider1_Statics::NewProp_nave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxCollider1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider1_Statics::NewProp_nave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxCollider1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxCollider1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxCollider1_Statics::ClassParams = {
		&ABoxCollider1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoxCollider1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxCollider1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxCollider1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxCollider1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxCollider1, 1258865568);
	template<> MYPROJECT1_API UClass* StaticClass<ABoxCollider1>()
	{
		return ABoxCollider1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxCollider1(Z_Construct_UClass_ABoxCollider1, &ABoxCollider1::StaticClass, TEXT("/Script/MyProject1"), TEXT("ABoxCollider1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxCollider1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
