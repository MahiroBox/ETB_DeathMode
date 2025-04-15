// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/BlueprintAssistObjects/BARootObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBARootObject() {}
// Cross Module References
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBARootObject_NoRegister();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBARootObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister();
// End Cross Module References
	void UBARootObject::StaticRegisterNativesUBARootObject()
	{
	}
	UClass* Z_Construct_UClass_UBARootObject_NoRegister()
	{
		return UBARootObject::StaticClass();
	}
	struct Z_Construct_UClass_UBARootObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBARootObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistObjects/BARootObject.h" },
		{ "ModuleRelativePath", "BlueprintAssistObjects/BARootObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BARootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler = { "AssetHandler", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBARootObject, AssetHandler), Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBARootObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBARootObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBARootObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBARootObject_Statics::ClassParams = {
		&UBARootObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBARootObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBARootObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBARootObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBARootObject, 3481357220);
	template<> BLUEPRINTASSIST_API UClass* StaticClass<UBARootObject>()
	{
		return UBARootObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBARootObject(Z_Construct_UClass_UBARootObject, &UBARootObject::StaticClass, TEXT("/Script/BlueprintAssist"), TEXT("UBARootObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBARootObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
