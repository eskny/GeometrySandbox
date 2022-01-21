// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FGeometryData;
#ifdef GEOMETRYSANDBOX_BaseGeometryActor_generated_h
#error "BaseGeometryActor.generated.h already included, missing '#pragma once' in BaseGeometryActor.h"
#endif
#define GEOMETRYSANDBOX_BaseGeometryActor_generated_h

#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryData_Statics; \
	GEOMETRYSANDBOX_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYSANDBOX_API UScriptStruct* StaticStruct<struct FGeometryData>();

#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_10_DELEGATE \
struct _Script_GeometrySandbox_eventOnColorChanged_Parms \
{ \
	FLinearColor Color; \
	FString Name; \
}; \
static inline void FOnColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnColorChanged, FLinearColor const& Color, const FString& Name) \
{ \
	_Script_GeometrySandbox_eventOnColorChanged_Parms Parms; \
	Parms.Color=Color; \
	Parms.Name=Name; \
	OnColorChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_SPARSE_DATA
#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGeometryData);


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGeometryData);


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometrySandbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_INCLASS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometrySandbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGeometryActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGeometryActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public:


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGeometryActor)


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(ABaseGeometryActor, GeometryData); } \
	FORCEINLINE static uint32 __PPO__WeaponsNum() { return STRUCT_OFFSET(ABaseGeometryActor, WeaponsNum); } \
	FORCEINLINE static uint32 __PPO__KillsNum() { return STRUCT_OFFSET(ABaseGeometryActor, KillsNum); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ABaseGeometryActor, Health); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(ABaseGeometryActor, IsDead); } \
	FORCEINLINE static uint32 __PPO__HasWeapon() { return STRUCT_OFFSET(ABaseGeometryActor, HasWeapon); }


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_41_PROLOG
#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_PRIVATE_PROPERTY_OFFSET \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_SPARSE_DATA \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_RPC_WRAPPERS \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_INCLASS \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_PRIVATE_PROPERTY_OFFSET \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_SPARSE_DATA \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_INCLASS_NO_PURE_DECLS \
	GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSANDBOX_API UClass* StaticClass<class ABaseGeometryActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::Sin) \
	op(EMovementType::Static) 

enum class EMovementType : uint8;
template<> GEOMETRYSANDBOX_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
