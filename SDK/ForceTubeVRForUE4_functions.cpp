
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.TempoToKickPower
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          tempo                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UForceTubeVRFunctions::STATIC_TempoToKickPower(float tempo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.TempoToKickPower");

	UForceTubeVRFunctions_TempoToKickPower_Params params;
	params.tempo = tempo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Shot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char                  kickPower                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RumblePower                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RumbleDuration                 (Parm, ZeroConstructor, IsPlainOldData)
// EForceTubeVRChannel            Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UForceTubeVRFunctions::STATIC_Shot(unsigned char kickPower, unsigned char RumblePower, float RumbleDuration, EForceTubeVRChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.Shot");

	UForceTubeVRFunctions_Shot_Params params;
	params.kickPower = kickPower;
	params.RumblePower = RumblePower;
	params.RumbleDuration = RumbleDuration;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceTubeVRForUE4.ForceTubeVRFunctions.SetActiveResearch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           active                         (Parm, ZeroConstructor, IsPlainOldData)

void UForceTubeVRFunctions::STATIC_SetActiveResearch(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.SetActiveResearch");

	UForceTubeVRFunctions_SetActiveResearch_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Rumble
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char                  power                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          timeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// EForceTubeVRChannel            Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UForceTubeVRFunctions::STATIC_Rumble(unsigned char power, float timeInSeconds, EForceTubeVRChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.Rumble");

	UForceTubeVRFunctions_Rumble_Params params;
	params.power = power;
	params.timeInSeconds = timeInSeconds;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceTubeVRForUE4.ForceTubeVRFunctions.OpenAndroidBluetoothSettings
// (Final, Native, Static, Public, BlueprintCallable)

void UForceTubeVRFunctions::STATIC_OpenAndroidBluetoothSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.OpenAndroidBluetoothSettings");

	UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Kick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char                  power                          (Parm, ZeroConstructor, IsPlainOldData)
// EForceTubeVRChannel            Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UForceTubeVRFunctions::STATIC_Kick(unsigned char power, EForceTubeVRChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.Kick");

	UForceTubeVRFunctions_Kick_Params params;
	params.power = power;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceTubeVRForUE4.ForceTubeVRFunctions.InitAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           pistolsFirst                   (Parm, ZeroConstructor, IsPlainOldData)

void UForceTubeVRFunctions::STATIC_InitAsync(bool pistolsFirst)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.InitAsync");

	UForceTubeVRFunctions_InitAsync_Params params;
	params.pistolsFirst = pistolsFirst;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceTubeVRForUE4.ForceTubeVRFunctions.GetBatteryLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UForceTubeVRFunctions::STATIC_GetBatteryLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.GetBatteryLevel");

	UForceTubeVRFunctions_GetBatteryLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
