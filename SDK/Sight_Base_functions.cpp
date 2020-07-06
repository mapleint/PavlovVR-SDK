
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

// Function Sight_Base.Sight_Base_C.Temp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// float                          ReturnValue2                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue3                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

struct FVector ASight_Base_C::Temp(float* ReturnValue2, struct FRotator* ReturnValue3)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.Temp");

	ASight_Base_C_Temp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnValue2 != nullptr)
		*ReturnValue2 = params.ReturnValue2;
	if (ReturnValue3 != nullptr)
		*ReturnValue3 = params.ReturnValue3;

	return params.ReturnValue;
}


// Function Sight_Base.Sight_Base_C.GetGrabLoc
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ASight_Base_C::GetGrabLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.GetGrabLoc");

	ASight_Base_C_GetGrabLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sight_Base.Sight_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASight_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.UserConstructionScript");

	ASight_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASight_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.ReceiveBeginPlay");

	ASight_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASight_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.ReceiveTick");

	ASight_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.Use
// (Event, Public, BlueprintEvent)

void ASight_Base_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.Use");

	ASight_Base_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASight_Base_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.Physicalize");

	ASight_Base_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASight_Base_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.OnPick");

	ASight_Base_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.OnAttachmentModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASight_Base_C::OnAttachmentModeChanged(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.OnAttachmentModeChanged");

	ASight_Base_C_OnAttachmentModeChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASight_Base_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.Used");

	ASight_Base_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.OnDrop
// (Event, Public, BlueprintEvent)

void ASight_Base_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.OnDrop");

	ASight_Base_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_Base.Sight_Base_C.ExecuteUbergraph_Sight_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASight_Base_C::ExecuteUbergraph_Sight_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_Base.Sight_Base_C.ExecuteUbergraph_Sight_Base");

	ASight_Base_C_ExecuteUbergraph_Sight_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
