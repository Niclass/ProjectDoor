// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef AUTOMATICDOOR_AutomaticDoorProjectile_generated_h
#error "AutomaticDoorProjectile.generated.h already included, missing '#pragma once' in AutomaticDoorProjectile.h"
#endif
#define AUTOMATICDOOR_AutomaticDoorProjectile_generated_h

#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		this->OnHit(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
	}


#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		this->OnHit(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
	}


#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAAutomaticDoorProjectile(); \
	friend AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorProjectile(); \
	public: \
	DECLARE_CLASS(AAutomaticDoorProjectile, AActor, COMPILED_IN_FLAGS(0), 0, AutomaticDoor, NO_API) \
	DECLARE_SERIALIZER(AAutomaticDoorProjectile) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AAutomaticDoorProjectile*>(this); }


#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAAutomaticDoorProjectile(); \
	friend AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorProjectile(); \
	public: \
	DECLARE_CLASS(AAutomaticDoorProjectile, AActor, COMPILED_IN_FLAGS(0), 0, AutomaticDoor, NO_API) \
	DECLARE_SERIALIZER(AAutomaticDoorProjectile) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AAutomaticDoorProjectile*>(this); }


#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutomaticDoorProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutomaticDoorProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomaticDoorProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomaticDoorProjectile); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AAutomaticDoorProjectile(const AAutomaticDoorProjectile& InCopy); \
public:


#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AAutomaticDoorProjectile(const AAutomaticDoorProjectile& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomaticDoorProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomaticDoorProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutomaticDoorProjectile)


#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_6_PROLOG
#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_RPC_WRAPPERS \
	AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_INCLASS \
	AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_INCLASS_NO_PURE_DECLS \
	AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutomaticDoor_Source_AutomaticDoor_AutomaticDoorProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS