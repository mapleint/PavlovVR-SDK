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

// Class ForceTubeVRForUE4.ForceTubeVRFunctions
// 0x0000 (0x0028 - 0x0028)
class UForceTubeVRFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ForceTubeVRForUE4.ForceTubeVRFunctions");
		return ptr;
	}


	unsigned char STATIC_TempoToKickPower(float tempo);
	void STATIC_Shot(unsigned char kickPower, unsigned char RumblePower, float RumbleDuration, EForceTubeVRChannel Channel);
	void STATIC_SetActiveResearch(bool active);
	void STATIC_Rumble(unsigned char power, float timeInSeconds, EForceTubeVRChannel Channel);
	void STATIC_OpenAndroidBluetoothSettings();
	void STATIC_Kick(unsigned char power, EForceTubeVRChannel Channel);
	void STATIC_InitAsync(bool pistolsFirst);
	unsigned char STATIC_GetBatteryLevel();
};


// Class ForceTubeVRForUE4.PlayerControllerCppExample
// 0x0020 (0x06A8 - 0x0688)
class APlayerControllerCppExample : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0688(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ForceTubeVRForUE4.PlayerControllerCppExample");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
