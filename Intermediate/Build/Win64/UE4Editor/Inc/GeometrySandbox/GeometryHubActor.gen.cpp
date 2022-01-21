// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/GeometryHubActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryHubActor() {}
// Cross Module References
	GEOMETRYSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryPayLoad();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	GEOMETRYSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometryHubActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FGeometryPayLoad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYSANDBOX_API uint32 Get_Z_Construct_UScriptStruct_FGeometryPayLoad_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryPayLoad, Z_Construct_UPackage__Script_GeometrySandbox(), TEXT("GeometryPayLoad"), sizeof(FGeometryPayLoad), Get_Z_Construct_UScriptStruct_FGeometryPayLoad_Hash());
	}
	return Singleton;
}
template<> GEOMETRYSANDBOX_API UScriptStruct* StaticStruct<FGeometryPayLoad>()
{
	return FGeometryPayLoad::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryPayLoad(FGeometryPayLoad::StaticStruct, TEXT("/Script/GeometrySandbox"), TEXT("GeometryPayLoad"), false, nullptr, nullptr);
static struct FScriptStruct_GeometrySandbox_StaticRegisterNativesFGeometryPayLoad
{
	FScriptStruct_GeometrySandbox_StaticRegisterNativesFGeometryPayLoad()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeometryPayLoad")),new UScriptStruct::TCppStructOps<FGeometryPayLoad>);
	}
} ScriptStruct_GeometrySandbox_StaticRegisterNativesFGeometryPayLoad;
	struct Z_Construct_UScriptStruct_FGeometryPayLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeometryClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryPayLoad>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_GeometryClass_MetaData[] = {
		{ "Category", "GeometryPayLoad" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_GeometryClass = { "GeometryClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayLoad, GeometryClass), Z_Construct_UClass_ABaseGeometryActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_GeometryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_GeometryClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "GeometryPayLoad" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayLoad, Data), Z_Construct_UScriptStruct_FGeometryData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "GeometryPayLoad" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayLoad, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_InitialTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_GeometryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::NewProp_InitialTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
		nullptr,
		&NewStructOps,
		"GeometryPayLoad",
		sizeof(FGeometryPayLoad),
		alignof(FGeometryPayLoad),
		Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryPayLoad()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryPayLoad_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometrySandbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryPayLoad"), sizeof(FGeometryPayLoad), Get_Z_Construct_UScriptStruct_FGeometryPayLoad_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryPayLoad_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryPayLoad_Hash() { return 2497017763U; }
	DEFINE_FUNCTION(AGeometryHubActor::execOnColorChanged)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnColorChanged(Z_Param_Out_Color,Z_Param_Name);
		P_NATIVE_END;
	}
	void AGeometryHubActor::StaticRegisterNativesAGeometryHubActor()
	{
		UClass* Class = AGeometryHubActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnColorChanged", &AGeometryHubActor::execOnColorChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics
	{
		struct GeometryHubActor_eventOnColorChanged_Parms
		{
			FLinearColor Color;
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryHubActor_eventOnColorChanged_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryHubActor_eventOnColorChanged_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryHubActor, nullptr, "OnColorChanged", nullptr, nullptr, sizeof(GeometryHubActor_eventOnColorChanged_Parms), Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryHubActor_OnColorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister()
	{
		return AGeometryHubActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryHubActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeometryClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryPayLoads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryPayLoads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeometryPayLoads;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryHubActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeometryHubActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryHubActor_OnColorChanged, "OnColorChanged" }, // 1326568512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryHubActor.h" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass = { "GeometryClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, GeometryClass), Z_Construct_UClass_ABaseGeometryActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayLoads_Inner = { "GeometryPayLoads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGeometryPayLoad, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayLoads_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayLoads = { "GeometryPayLoads", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, GeometryPayLoads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayLoads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayLoads_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayLoads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayLoads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryHubActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryHubActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams = {
		&AGeometryHubActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryHubActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryHubActor, 3260673488);
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<AGeometryHubActor>()
	{
		return AGeometryHubActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryHubActor(Z_Construct_UClass_AGeometryHubActor, &AGeometryHubActor::StaticClass, TEXT("/Script/GeometrySandbox"), TEXT("AGeometryHubActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryHubActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
