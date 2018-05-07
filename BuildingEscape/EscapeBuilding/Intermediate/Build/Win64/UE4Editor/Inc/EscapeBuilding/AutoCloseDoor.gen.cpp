// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AutoCloseDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoCloseDoor() {}
// Cross Module References
	ESCAPEBUILDING_API UClass* Z_Construct_UClass_UAutoCloseDoor_NoRegister();
	ESCAPEBUILDING_API UClass* Z_Construct_UClass_UAutoCloseDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EscapeBuilding();
// End Cross Module References
	void UAutoCloseDoor::StaticRegisterNativesUAutoCloseDoor()
	{
	}
	UClass* Z_Construct_UClass_UAutoCloseDoor_NoRegister()
	{
		return UAutoCloseDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UAutoCloseDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_EscapeBuilding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "AutoCloseDoor.h" },
				{ "ModuleRelativePath", "AutoCloseDoor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAutoCloseDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAutoCloseDoor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoCloseDoor, 3342238370);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoCloseDoor(Z_Construct_UClass_UAutoCloseDoor, &UAutoCloseDoor::StaticClass, TEXT("/Script/EscapeBuilding"), TEXT("UAutoCloseDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoCloseDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
