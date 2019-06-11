// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPickupActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPickupActor() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPickupActor_Respawn();
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ASPickupActor::StaticRegisterNativesASPickupActor()
	{
		UClass* Class = ASPickupActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Respawn", (Native)&ASPickupActor::execRespawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASPickupActor_Respawn()
	{
		UObject* Outer = Z_Construct_UClass_ASPickupActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Respawn"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SPickupActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPickupActor_NoRegister()
	{
		return ASPickupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPickupActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASPickupActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASPickupActor_Respawn());

				UProperty* NewProp_CooldownDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CooldownDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CooldownDuration, ASPickupActor), 0x0020080000010001);
				UProperty* NewProp_PowerUpClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PowerUpClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(PowerUpClass, ASPickupActor), 0x0024080000000801, Z_Construct_UClass_ASPowerupActor_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_DecalComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DecalComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DecalComp, ASPickupActor), 0x00200800000a0009, Z_Construct_UClass_UDecalComponent_NoRegister());
				UProperty* NewProp_SphereComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SphereComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SphereComp, ASPickupActor), 0x00200800000a0009, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASPickupActor_Respawn(), "Respawn"); // 278501331
				static TCppClassTypeInfo<TCppClassTypeTraits<ASPickupActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SPickupActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SPickupActor.h"));
				MetaData->SetValue(NewProp_CooldownDuration, TEXT("Category"), TEXT("PickupActor"));
				MetaData->SetValue(NewProp_CooldownDuration, TEXT("ModuleRelativePath"), TEXT("Public/SPickupActor.h"));
				MetaData->SetValue(NewProp_PowerUpClass, TEXT("Category"), TEXT("PickupActor"));
				MetaData->SetValue(NewProp_PowerUpClass, TEXT("ModuleRelativePath"), TEXT("Public/SPickupActor.h"));
				MetaData->SetValue(NewProp_DecalComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_DecalComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DecalComp, TEXT("ModuleRelativePath"), TEXT("Public/SPickupActor.h"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("ModuleRelativePath"), TEXT("Public/SPickupActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPickupActor, 573993743);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPickupActor(Z_Construct_UClass_ASPickupActor, &ASPickupActor::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASPickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
