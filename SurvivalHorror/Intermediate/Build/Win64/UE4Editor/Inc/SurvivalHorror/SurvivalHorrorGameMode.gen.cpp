// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalHorror/SurvivalHorrorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalHorrorGameMode() {}
// Cross Module References
	SURVIVALHORROR_API UClass* Z_Construct_UClass_ASurvivalHorrorGameMode_NoRegister();
	SURVIVALHORROR_API UClass* Z_Construct_UClass_ASurvivalHorrorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SurvivalHorror();
// End Cross Module References
	void ASurvivalHorrorGameMode::StaticRegisterNativesASurvivalHorrorGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASurvivalHorrorGameMode_NoRegister()
	{
		return ASurvivalHorrorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalHorrorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalHorrorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalHorror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalHorrorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SurvivalHorrorGameMode.h" },
		{ "ModuleRelativePath", "SurvivalHorrorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalHorrorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalHorrorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalHorrorGameMode_Statics::ClassParams = {
		&ASurvivalHorrorGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalHorrorGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASurvivalHorrorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalHorrorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivalHorrorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivalHorrorGameMode, 1444889210);
	template<> SURVIVALHORROR_API UClass* StaticClass<ASurvivalHorrorGameMode>()
	{
		return ASurvivalHorrorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivalHorrorGameMode(Z_Construct_UClass_ASurvivalHorrorGameMode, &ASurvivalHorrorGameMode::StaticClass, TEXT("/Script/SurvivalHorror"), TEXT("ASurvivalHorrorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalHorrorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
