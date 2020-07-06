
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

// Function BP_KillhouseDoors.BP_KillhouseDoors_C.bLast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_C::bLast(bool Reset, float Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.bLast");

	ABP_KillhouseDoors_C_bLast_Params params;
	params.Reset = Reset;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KillhouseDoors_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.UserConstructionScript");

	ABP_KillhouseDoors_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.DoorRotation__FinishedFunc
// (BlueprintEvent)

void ABP_KillhouseDoors_C::DoorRotation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.DoorRotation__FinishedFunc");

	ABP_KillhouseDoors_C_DoorRotation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.DoorRotation__UpdateFunc
// (BlueprintEvent)

void ABP_KillhouseDoors_C::DoorRotation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.DoorRotation__UpdateFunc");

	ABP_KillhouseDoors_C_DoorRotation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_KillhouseDoors_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.ReceiveBeginPlay");

	ABP_KillhouseDoors_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.Close Doors
// (BlueprintCallable, BlueprintEvent)

void ABP_KillhouseDoors_C::Close_Doors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.Close Doors");

	ABP_KillhouseDoors_C_Close_Doors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.Open Doors
// (BlueprintCallable, BlueprintEvent)

void ABP_KillhouseDoors_C::Open_Doors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.Open Doors");

	ABP_KillhouseDoors_C_Open_Doors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.Play Sound FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_C::Play_Sound_FX(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.Play Sound FX");

	ABP_KillhouseDoors_C_Play_Sound_FX_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.MoveDoor_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_C::MoveDoor_Event(bool Open_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.MoveDoor_Event");

	ABP_KillhouseDoors_C_MoveDoor_Event_Params params;
	params.Open_ = Open_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.BlastDoor_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseForce                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_C::BlastDoor_Event(bool Reset_, float ImpulseForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.BlastDoor_Event");

	ABP_KillhouseDoors_C_BlastDoor_Event_Params params;
	params.Reset_ = Reset_;
	params.ImpulseForce = ImpulseForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.Stop Doors
// (BlueprintCallable, BlueprintEvent)

void ABP_KillhouseDoors_C::Stop_Doors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.Stop Doors");

	ABP_KillhouseDoors_C_Stop_Doors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.ExecuteUbergraph_BP_KillhouseDoors
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_C::ExecuteUbergraph_BP_KillhouseDoors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.ExecuteUbergraph_BP_KillhouseDoors");

	ABP_KillhouseDoors_C_ExecuteUbergraph_BP_KillhouseDoors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.BlastDoor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseForce                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_C::BlastDoor__DelegateSignature(bool Reset_, float ImpulseForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.BlastDoor__DelegateSignature");

	ABP_KillhouseDoors_C_BlastDoor__DelegateSignature_Params params;
	params.Reset_ = Reset_;
	params.ImpulseForce = ImpulseForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillhouseDoors.BP_KillhouseDoors_C.MoveDoor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KillhouseDoors_C::MoveDoor__DelegateSignature(bool Open_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillhouseDoors.BP_KillhouseDoors_C.MoveDoor__DelegateSignature");

	ABP_KillhouseDoors_C_MoveDoor__DelegateSignature_Params params;
	params.Open_ = Open_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
