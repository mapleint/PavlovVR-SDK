
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

// Function Gun_Sawedoff.Gun_Sawedoff_C.VerifyCanClose
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGun_Sawedoff_C::VerifyCanClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.VerifyCanClose");

	AGun_Sawedoff_C_VerifyCanClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_Sawedoff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.UserConstructionScript");

	AGun_Sawedoff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGun_Sawedoff_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.ReceiveBeginPlay");

	AGun_Sawedoff_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.OnMagBoltRelease_Event_1
// (BlueprintCallable, BlueprintEvent)

void AGun_Sawedoff_C::OnMagBoltRelease_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.OnMagBoltRelease_Event_1");

	AGun_Sawedoff_C_OnMagBoltRelease_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.OnBarrelChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bOpen                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Sawedoff_C::OnBarrelChanged_Event_1(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.OnBarrelChanged_Event_1");

	AGun_Sawedoff_C_OnBarrelChanged_Event_1_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Sawedoff_C::CustomEvent_2(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.CustomEvent_2");

	AGun_Sawedoff_C_CustomEvent_2_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.SetupRemoval
// (BlueprintCallable, BlueprintEvent)

void AGun_Sawedoff_C::SetupRemoval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.SetupRemoval");

	AGun_Sawedoff_C_SetupRemoval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.SetupClose
// (BlueprintCallable, BlueprintEvent)

void AGun_Sawedoff_C::SetupClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.SetupClose");

	AGun_Sawedoff_C_SetupClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.OnChamberStateChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ChamberIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState*            OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState*            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Sawedoff_C::OnChamberStateChangedEvent(int* ChamberIndex, EVRGunChamberState* OldState, EVRGunChamberState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.OnChamberStateChangedEvent");

	AGun_Sawedoff_C_OnChamberStateChangedEvent_Params params;
	params.ChamberIndex = ChamberIndex;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Sawedoff_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.OnPick");

	AGun_Sawedoff_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gun_Sawedoff.Gun_Sawedoff_C.ExecuteUbergraph_Gun_Sawedoff
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGun_Sawedoff_C::ExecuteUbergraph_Gun_Sawedoff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Sawedoff.Gun_Sawedoff_C.ExecuteUbergraph_Gun_Sawedoff");

	AGun_Sawedoff_C_ExecuteUbergraph_Gun_Sawedoff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
