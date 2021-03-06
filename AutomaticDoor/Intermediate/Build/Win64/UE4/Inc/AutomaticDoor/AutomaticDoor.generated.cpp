// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "AutomaticDoor.h"
#include "AutomaticDoor.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomaticDoor() {}
	void AAutomaticDoorCharacter::StaticRegisterNativesAAutomaticDoorCharacter()
	{
	}
	IMPLEMENT_CLASS(AAutomaticDoorCharacter, 2460518999);
	void AAutomaticDoorGameMode::StaticRegisterNativesAAutomaticDoorGameMode()
	{
	}
	IMPLEMENT_CLASS(AAutomaticDoorGameMode, 4294129802);
	void AAutomaticDoorHUD::StaticRegisterNativesAAutomaticDoorHUD()
	{
	}
	IMPLEMENT_CLASS(AAutomaticDoorHUD, 493396009);
	void AAutomaticDoorProjectile::StaticRegisterNativesAAutomaticDoorProjectile()
	{
		FNativeFunctionRegistrar::RegisterFunction(AAutomaticDoorProjectile::StaticClass(),"OnHit",(Native)&AAutomaticDoorProjectile::execOnHit);
	}
	IMPLEMENT_CLASS(AAutomaticDoorProjectile, 3064929649);
	void ADoorWall::StaticRegisterNativesADoorWall()
	{
		FNativeFunctionRegistrar::RegisterFunction(ADoorWall::StaticClass(),"CloseDoor",(Native)&ADoorWall::execCloseDoor);
		FNativeFunctionRegistrar::RegisterFunction(ADoorWall::StaticClass(),"OnBeginOverlap",(Native)&ADoorWall::execOnBeginOverlap);
		FNativeFunctionRegistrar::RegisterFunction(ADoorWall::StaticClass(),"OnEndOverlap",(Native)&ADoorWall::execOnEndOverlap);
		FNativeFunctionRegistrar::RegisterFunction(ADoorWall::StaticClass(),"OpenDoor",(Native)&ADoorWall::execOpenDoor);
	}
	IMPLEMENT_CLASS(ADoorWall, 839058852);
	void ATrigger::StaticRegisterNativesATrigger()
	{
		FNativeFunctionRegistrar::RegisterFunction(ATrigger::StaticClass(),"OnBeginOverlap",(Native)&ATrigger::execOnBeginOverlap);
	}
	IMPLEMENT_CLASS(ATrigger, 4192295355);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();

	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorCharacter_NoRegister();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorCharacter();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorGameMode_NoRegister();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorGameMode();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorHUD_NoRegister();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorHUD();
	AUTOMATICDOOR_API class UFunction* Z_Construct_UFunction_AAutomaticDoorProjectile_OnHit();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorProjectile_NoRegister();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_AAutomaticDoorProjectile();
	AUTOMATICDOOR_API class UFunction* Z_Construct_UFunction_ADoorWall_CloseDoor();
	AUTOMATICDOOR_API class UFunction* Z_Construct_UFunction_ADoorWall_OnBeginOverlap();
	AUTOMATICDOOR_API class UFunction* Z_Construct_UFunction_ADoorWall_OnEndOverlap();
	AUTOMATICDOOR_API class UFunction* Z_Construct_UFunction_ADoorWall_OpenDoor();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_ADoorWall_NoRegister();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_ADoorWall();
	AUTOMATICDOOR_API class UFunction* Z_Construct_UFunction_ATrigger_OnBeginOverlap();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_ATrigger_NoRegister();
	AUTOMATICDOOR_API class UClass* Z_Construct_UClass_ATrigger();
	AUTOMATICDOOR_API class UPackage* Z_Construct_UPackage_AutomaticDoor();
	UClass* Z_Construct_UClass_AAutomaticDoorCharacter_NoRegister()
	{
		return AAutomaticDoorCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AAutomaticDoorCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage_AutomaticDoor();
			OuterClass = AAutomaticDoorCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_FireAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireAnimation"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FireAnimation, AAutomaticDoorCharacter), 0x0000000000000005, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_FireSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FireSound, AAutomaticDoorCharacter), 0x0000000000000005, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_Native) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, AAutomaticDoorCharacter), 0x0004000000010001, Z_Construct_UClass_AAutomaticDoorProjectile_NoRegister());
				UProperty* NewProp_GunOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunOffset"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(GunOffset, AAutomaticDoorCharacter), 0x0000000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AAutomaticDoorCharacter), 0x0000000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AAutomaticDoorCharacter), 0x0000000000020015);
				UProperty* NewProp_FirstPersonCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, AAutomaticDoorCharacter), 0x00000000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_FP_Gun = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FP_Gun"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FP_Gun, AAutomaticDoorCharacter), 0x00000000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, AAutomaticDoorCharacter), 0x00000000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ToolTip"), TEXT("AnimMontage to play each time we fire"));
				MetaData->SetValue(NewProp_FireSound, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ToolTip"), TEXT("Sound to play each time we fire"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the characters location"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("First person camera"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("ToolTip"), TEXT("Gun mesh: 1st person view (seen only by self)"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("Pawn mesh: 1st person view (arms; seen only by self)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutomaticDoorCharacter(Z_Construct_UClass_AAutomaticDoorCharacter, TEXT("AAutomaticDoorCharacter"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomaticDoorCharacter);
	UClass* Z_Construct_UClass_AAutomaticDoorGameMode_NoRegister()
	{
		return AAutomaticDoorGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AAutomaticDoorGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_AutomaticDoor();
			OuterClass = AAutomaticDoorGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2088028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AutomaticDoorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutomaticDoorGameMode(Z_Construct_UClass_AAutomaticDoorGameMode, TEXT("AAutomaticDoorGameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomaticDoorGameMode);
	UClass* Z_Construct_UClass_AAutomaticDoorHUD_NoRegister()
	{
		return AAutomaticDoorHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AAutomaticDoorHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage_AutomaticDoor();
			OuterClass = AAutomaticDoorHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AutomaticDoorHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutomaticDoorHUD(Z_Construct_UClass_AAutomaticDoorHUD, TEXT("AAutomaticDoorHUD"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomaticDoorHUD);
	UFunction* Z_Construct_UFunction_AAutomaticDoorProjectile_OnHit()
	{
		struct AutomaticDoorProjectile_eventOnHit_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AAutomaticDoorProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(AutomaticDoorProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Hit, AutomaticDoorProjectile_eventOnHit_Parms), 0x0000008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, AutomaticDoorProjectile_eventOnHit_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, AutomaticDoorProjectile_eventOnHit_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, AutomaticDoorProjectile_eventOnHit_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when projectile hits something"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAutomaticDoorProjectile_NoRegister()
	{
		return AAutomaticDoorProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AAutomaticDoorProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_AutomaticDoor();
			OuterClass = AAutomaticDoorProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AAutomaticDoorProjectile_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, AAutomaticDoorProjectile), 0x00000000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AAutomaticDoorProjectile), 0x00000000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AAutomaticDoorProjectile_OnHit()); // 445354468
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AutomaticDoorProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("AutomaticDoorProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutomaticDoorProjectile(Z_Construct_UClass_AAutomaticDoorProjectile, TEXT("AAutomaticDoorProjectile"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomaticDoorProjectile);
	UFunction* Z_Construct_UFunction_ADoorWall_CloseDoor()
	{
		UObject* Outer=Z_Construct_UClass_ADoorWall();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CloseDoor"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("DoorWall.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorWall_OnBeginOverlap()
	{
		struct DoorWall_eventOnBeginOverlap_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_ADoorWall();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginOverlap"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(DoorWall_eventOnBeginOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(SweepResult, DoorWall_eventOnBeginOverlap_Parms), 0x0000008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, DoorWall_eventOnBeginOverlap_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, DoorWall_eventOnBeginOverlap_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, DoorWall_eventOnBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, DoorWall_eventOnBeginOverlap_Parms), 0x0000000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, DoorWall_eventOnBeginOverlap_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, DoorWall_eventOnBeginOverlap_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("DoorWall.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorWall_OnEndOverlap()
	{
		struct DoorWall_eventOnEndOverlap_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_ADoorWall();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnEndOverlap"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(DoorWall_eventOnEndOverlap_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, DoorWall_eventOnEndOverlap_Parms), 0x0000000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, DoorWall_eventOnEndOverlap_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, DoorWall_eventOnEndOverlap_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("DoorWall.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorWall_OpenDoor()
	{
		UObject* Outer=Z_Construct_UClass_ADoorWall();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OpenDoor"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("DoorWall.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorWall_NoRegister()
	{
		return ADoorWall::StaticClass();
	}
	UClass* Z_Construct_UClass_ADoorWall()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_AutomaticDoor();
			OuterClass = ADoorWall::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ADoorWall_CloseDoor());
				OuterClass->LinkChild(Z_Construct_UFunction_ADoorWall_OnBeginOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_ADoorWall_OnEndOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_ADoorWall_OpenDoor());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Trigger = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Trigger"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Trigger, ADoorWall), 0x0000000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_DoorMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DoorMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(DoorMesh, ADoorWall), 0x0000000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_WallMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WallMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(WallMesh, ADoorWall), 0x0000000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ADoorWall_CloseDoor()); // 3804059664
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ADoorWall_OnBeginOverlap()); // 1667612460
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ADoorWall_OnEndOverlap()); // 1262110105
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ADoorWall_OpenDoor()); // 2501827211
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DoorWall.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("DoorWall.h"));
				MetaData->SetValue(NewProp_Trigger, TEXT("Category"), TEXT("DoorWall"));
				MetaData->SetValue(NewProp_Trigger, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Trigger, TEXT("ModuleRelativePath"), TEXT("DoorWall.h"));
				MetaData->SetValue(NewProp_DoorMesh, TEXT("Category"), TEXT("DoorWall"));
				MetaData->SetValue(NewProp_DoorMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DoorMesh, TEXT("ModuleRelativePath"), TEXT("DoorWall.h"));
				MetaData->SetValue(NewProp_WallMesh, TEXT("Category"), TEXT("DoorWall"));
				MetaData->SetValue(NewProp_WallMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WallMesh, TEXT("ModuleRelativePath"), TEXT("DoorWall.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorWall(Z_Construct_UClass_ADoorWall, TEXT("ADoorWall"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorWall);
	UFunction* Z_Construct_UFunction_ATrigger_OnBeginOverlap()
	{
		struct Trigger_eventOnBeginOverlap_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_ATrigger();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginOverlap"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(Trigger_eventOnBeginOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(SweepResult, Trigger_eventOnBeginOverlap_Parms), 0x0000008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, Trigger_eventOnBeginOverlap_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, Trigger_eventOnBeginOverlap_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, Trigger_eventOnBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_Native) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, Trigger_eventOnBeginOverlap_Parms), 0x0000000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Trigger_eventOnBeginOverlap_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Trigger_eventOnBeginOverlap_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Trigger.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATrigger_NoRegister()
	{
		return ATrigger::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrigger()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_AutomaticDoor();
			OuterClass = ATrigger::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ATrigger_OnBeginOverlap());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_door = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("door"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(door, ATrigger), 0x0000000000000001, Z_Construct_UClass_ADoorWall_NoRegister());
				UProperty* NewProp_Trigger = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Trigger"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Trigger, ATrigger), 0x0000000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ATrigger_OnBeginOverlap()); // 1840720521
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Trigger.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Trigger.h"));
				MetaData->SetValue(NewProp_door, TEXT("Category"), TEXT("Trigger"));
				MetaData->SetValue(NewProp_door, TEXT("ModuleRelativePath"), TEXT("Trigger.h"));
				MetaData->SetValue(NewProp_Trigger, TEXT("Category"), TEXT("Trigger"));
				MetaData->SetValue(NewProp_Trigger, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Trigger, TEXT("ModuleRelativePath"), TEXT("Trigger.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrigger(Z_Construct_UClass_ATrigger, TEXT("ATrigger"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrigger);
	UPackage* Z_Construct_UPackage_AutomaticDoor()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/AutomaticDoor")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0x32DFE841;
			Guid.B = 0x6879D75C;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
