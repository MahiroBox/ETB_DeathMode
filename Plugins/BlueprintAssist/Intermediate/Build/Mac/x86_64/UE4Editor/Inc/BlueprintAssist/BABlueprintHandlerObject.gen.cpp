// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/BlueprintAssistObjects/BABlueprintHandlerObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBABlueprintHandlerObject() {}
// Cross Module References
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
// End Cross Module References
	void UBABlueprintHandlerObject::StaticRegisterNativesUBABlueprintHandlerObject()
	{
	}
	UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister()
	{
		return UBABlueprintHandlerObject::StaticClass();
	}
	struct Z_Construct_UClass_UBABlueprintHandlerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastVariables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastVariables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBABlueprintHandlerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_Inner = { "LastVariables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables = { "LastVariables", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBABlueprintHandlerObject, LastVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBABlueprintHandlerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBABlueprintHandlerObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::ClassParams = {
		&UBABlueprintHandlerObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBABlueprintHandlerObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBABlueprintHandlerObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBABlueprintHandlerObject, 3872905071);
	template<> BLUEPRINTASSIST_API UClass* StaticClass<UBABlueprintHandlerObject>()
	{
		return UBABlueprintHandlerObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBABlueprintHandlerObject(Z_Construct_UClass_UBABlueprintHandlerObject, &UBABlueprintHandlerObject::StaticClass, TEXT("/Script/BlueprintAssist"), TEXT("UBABlueprintHandlerObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBABlueprintHandlerObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
