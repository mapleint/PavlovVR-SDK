
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

// Function Grip_Base.Grip_Base_C.GetGrabLoc
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGrip_Base_C::GetGrabLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grip_Base.Grip_Base_C.GetGrabLoc");

	AGrip_Base_C_GetGrabLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Grip_Base.Grip_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrip_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grip_Base.Grip_Base_C.UserConstructionScript");

	AGrip_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grip_Base.Grip_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrip_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grip_Base.Grip_Base_C.ReceiveBeginPlay");

	AGrip_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grip_Base.Grip_Base_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrip_Base_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grip_Base.Grip_Base_C.Physicalize");

	AGrip_Base_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grip_Base.Grip_Base_C.Use
// (Event, Public, BlueprintEvent)

void AGrip_Base_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grip_Base.Grip_Base_C.Use");

	AGrip_Base_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grip_Base.Grip_Base_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrip_Base_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grip_Base.Grip_Base_C.OnPick");

	AGrip_Base_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grip_Base.Grip_Base_C.OnAttachmentModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrip_Base_C::OnAttachmentModeChanged(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grip_Base.Grip_Base_C.OnAttachmentModeChanged");

	AGrip_Base_C_OnAttachmentModeChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grip_Base.Grip_Base_C.ExecuteUbergraph_Grip_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrip_Base_C::ExecuteUbergraph_Grip_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grip_Base.Grip_Base_C.ExecuteUbergraph_Grip_Base");

	AGrip_Base_C_ExecuteUbergraph_Grip_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
