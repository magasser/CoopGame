// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameMode() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGameMode_SpawnNewBot();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameMode();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	static FName NAME_ASGameMode_SpawnNewBot = FName(TEXT("SpawnNewBot"));
	void ASGameMode::SpawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASGameMode_SpawnNewBot),NULL);
	}
	void ASGameMode::StaticRegisterNativesASGameMode()
	{
	}
	UFunction* Z_Construct_UFunction_ASGameMode_SpawnNewBot()
	{
		UObject* Outer = Z_Construct_UClass_ASGameMode();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpawnNewBot"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08080800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GameMode"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Hook for BP to spawn a single bot"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameMode_NoRegister()
	{
		return ASGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_CoopGame();
			OuterClass = ASGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASGameMode_SpawnNewBot());

				UProperty* NewProp_TimeBetweenWaves = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeBetweenWaves"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeBetweenWaves, ASGameMode), 0x0020080000010001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASGameMode_SpawnNewBot(), "SpawnNewBot"); // 3755615369
				static TCppClassTypeInfo<TCppClassTypeTraits<ASGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_TimeBetweenWaves, TEXT("Category"), TEXT("GameMode"));
				MetaData->SetValue(NewProp_TimeBetweenWaves, TEXT("ModuleRelativePath"), TEXT("Public/SGameMode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameMode, 4002710832);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameMode(Z_Construct_UClass_ASGameMode, &ASGameMode::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
