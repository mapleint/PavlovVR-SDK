#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class OculusPlatform.OculusPlatformStatics
// 0x0000 (0x0028 - 0x0028)
class UOculusPlatformStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusPlatform.OculusPlatformStatics");
		return ptr;
	}


	EOculusEntitleStatus STATIC_GetEntitleStatus(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
