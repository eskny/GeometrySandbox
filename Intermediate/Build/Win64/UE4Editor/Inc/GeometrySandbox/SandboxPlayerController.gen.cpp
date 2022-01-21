// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/SandboxPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandboxPlayerController() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ASandboxPlayerController_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ASandboxPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASandboxPlayerController::StaticRegisterNativesASandboxPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASandboxPlayerController_NoRegister()
	{
		return ASandboxPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASandboxPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pawns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASandboxPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SandboxPlayerController.h" },
		{ "ModuleRelativePath", "Public/SandboxPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_Inner = { "Pawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/SandboxPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns = { "Pawns", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASandboxPlayerController, Pawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASandboxPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASandboxPlayerController_Statics::NewProp_Pawns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASandboxPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASandboxPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASandboxPlayerController_Statics::ClassParams = {
		&ASandboxPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASandboxPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASandboxPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASandboxPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASandboxPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASandboxPlayerController, 4032048684);
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<ASandboxPlayerController>()
	{
		return ASandboxPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASandboxPlayerController(Z_Construct_UClass_ASandboxPlayerController, &ASandboxPlayerController::StaticClass, TEXT("/Script/GeometrySandbox"), TEXT("ASandboxPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASandboxPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
