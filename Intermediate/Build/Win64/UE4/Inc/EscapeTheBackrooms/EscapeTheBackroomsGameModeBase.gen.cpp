// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeTheBackrooms/EscapeTheBackroomsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeTheBackroomsGameModeBase() {}
// Cross Module References
	ESCAPETHEBACKROOMS_API UClass* Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_NoRegister();
	ESCAPETHEBACKROOMS_API UClass* Z_Construct_UClass_AEscapeTheBackroomsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EscapeTheBackrooms();
// End Cross Module References
	void AEscapeTheBackroomsGameModeBase::StaticRegisterNativesAEscapeTheBackroomsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_NoRegister()
	{
		return AEscapeTheBackroomsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeTheBackrooms,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EscapeTheBackroomsGameModeBase.h" },
		{ "ModuleRelativePath", "EscapeTheBackroomsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeTheBackroomsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_Statics::ClassParams = {
		&AEscapeTheBackroomsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeTheBackroomsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscapeTheBackroomsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeTheBackroomsGameModeBase, 2054715765);
	template<> ESCAPETHEBACKROOMS_API UClass* StaticClass<AEscapeTheBackroomsGameModeBase>()
	{
		return AEscapeTheBackroomsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeTheBackroomsGameModeBase(Z_Construct_UClass_AEscapeTheBackroomsGameModeBase, &AEscapeTheBackroomsGameModeBase::StaticClass, TEXT("/Script/EscapeTheBackrooms"), TEXT("AEscapeTheBackroomsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeTheBackroomsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
