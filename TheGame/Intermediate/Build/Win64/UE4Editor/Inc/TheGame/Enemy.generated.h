// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define THEGAME_Enemy_generated_h

#define TheGame_Source_TheGame_Enemy_h_11_RPC_WRAPPERS
#define TheGame_Source_TheGame_Enemy_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define TheGame_Source_TheGame_Enemy_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAEnemy(); \
	friend THEGAME_API class UClass* Z_Construct_UClass_AEnemy(); \
	public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0), 0, TheGame, NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy*>(this); }


#define TheGame_Source_TheGame_Enemy_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAEnemy(); \
	friend THEGAME_API class UClass* Z_Construct_UClass_AEnemy(); \
	public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0), 0, TheGame, NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy*>(this); }


#define TheGame_Source_TheGame_Enemy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AEnemy(const AEnemy& InCopy); \
public:


#define TheGame_Source_TheGame_Enemy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AEnemy(const AEnemy& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define TheGame_Source_TheGame_Enemy_h_8_PROLOG
#define TheGame_Source_TheGame_Enemy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGame_Source_TheGame_Enemy_h_11_RPC_WRAPPERS \
	TheGame_Source_TheGame_Enemy_h_11_INCLASS \
	TheGame_Source_TheGame_Enemy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGame_Source_TheGame_Enemy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGame_Source_TheGame_Enemy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGame_Source_TheGame_Enemy_h_11_INCLASS_NO_PURE_DECLS \
	TheGame_Source_TheGame_Enemy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGame_Source_TheGame_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
