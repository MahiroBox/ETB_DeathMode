// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTASSIST_BlueprintAssistSettings_generated_h
#error "BlueprintAssistSettings.generated.h already included, missing '#pragma once' in BlueprintAssistSettings.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistSettings_generated_h

#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBAFormatterSettings_Statics; \
	BLUEPRINTASSIST_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<struct FBAFormatterSettings>();

#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_SPARSE_DATA
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_RPC_WRAPPERS
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBASettings(); \
	friend struct Z_Construct_UClass_UBASettings_Statics; \
public: \
	DECLARE_CLASS(UBASettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintAssist"), NO_API) \
	DECLARE_SERIALIZER(UBASettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_INCLASS \
private: \
	static void StaticRegisterNativesUBASettings(); \
	friend struct Z_Construct_UClass_UBASettings_Statics; \
public: \
	DECLARE_CLASS(UBASettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintAssist"), NO_API) \
	DECLARE_SERIALIZER(UBASettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBASettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBASettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBASettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBASettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBASettings(UBASettings&&); \
	NO_API UBASettings(const UBASettings&); \
public:


#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBASettings(UBASettings&&); \
	NO_API UBASettings(const UBASettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBASettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBASettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBASettings)


#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_117_PROLOG
#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_SPARSE_DATA \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_INCLASS \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_SPARSE_DATA \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTASSIST_API UClass* StaticClass<class UBASettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h


#define FOREACH_ENUM_EBAFUNCTIONACCESSSPECIFIER(op) \
	op(EBAFunctionAccessSpecifier::Public) \
	op(EBAFunctionAccessSpecifier::Protected) \
	op(EBAFunctionAccessSpecifier::Private) 

enum class EBAFunctionAccessSpecifier : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFunctionAccessSpecifier>();

#define FOREACH_ENUM_EBAAUTOZOOMTONODE(op) \
	op(EBAAutoZoomToNode::Never) \
	op(EBAAutoZoomToNode::Always) \
	op(EBAAutoZoomToNode::Outside_Viewport) 

enum class EBAAutoZoomToNode : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAAutoZoomToNode>();

#define FOREACH_ENUM_EBAFORMATTERTYPE(op) \
	op(EBAFormatterType::Blueprint) \
	op(EBAFormatterType::BehaviorTree) \
	op(EBAFormatterType::Simple) 

enum class EBAFormatterType : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFormatterType>();

#define FOREACH_ENUM_EBAFORMATALLSTYLE(op) \
	op(EBAFormatAllStyle::Simple) \
	op(EBAFormatAllStyle::Smart) \
	op(EBAFormatAllStyle::NodeType) 

enum class EBAFormatAllStyle : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFormatAllStyle>();

#define FOREACH_ENUM_EBAAUTOFORMATTING(op) \
	op(EBAAutoFormatting::Never) \
	op(EBAAutoFormatting::FormatAllConnected) \
	op(EBAAutoFormatting::FormatSingleConnected) 

enum class EBAAutoFormatting : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAAutoFormatting>();

#define FOREACH_ENUM_EBAWIRINGSTYLE(op) \
	op(EBAWiringStyle::AlwaysMerge) \
	op(EBAWiringStyle::MergeWhenNear) \
	op(EBAWiringStyle::SingleWire) 

enum class EBAWiringStyle : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAWiringStyle>();

#define FOREACH_ENUM_EBAPARAMETERFORMATTINGSTYLE(op) \
	op(EBAParameterFormattingStyle::Helixing) \
	op(EBAParameterFormattingStyle::LeftSide) 

enum class EBAParameterFormattingStyle : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAParameterFormattingStyle>();

#define FOREACH_ENUM_EBANODEFORMATTINGSTYLE(op) \
	op(EBANodeFormattingStyle::Expanded) \
	op(EBANodeFormattingStyle::Compact) 

enum class EBANodeFormattingStyle : uint8;
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBANodeFormattingStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
