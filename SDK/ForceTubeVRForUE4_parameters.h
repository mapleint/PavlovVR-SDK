#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.TempoToKickPower
struct UForceTubeVRFunctions_TempoToKickPower_Params
{
	float                                              tempo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Shot
struct UForceTubeVRFunctions_Shot_Params
{
	unsigned char                                      kickPower;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RumblePower;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RumbleDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EForceTubeVRChannel                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.SetActiveResearch
struct UForceTubeVRFunctions_SetActiveResearch_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Rumble
struct UForceTubeVRFunctions_Rumble_Params
{
	unsigned char                                      power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              timeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EForceTubeVRChannel                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.OpenAndroidBluetoothSettings
struct UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Params
{
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Kick
struct UForceTubeVRFunctions_Kick_Params
{
	unsigned char                                      power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EForceTubeVRChannel                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.InitAsync
struct UForceTubeVRFunctions_InitAsync_Params
{
	bool                                               pistolsFirst;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.GetBatteryLevel
struct UForceTubeVRFunctions_GetBatteryLevel_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
