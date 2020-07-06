
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

// Function Magazine_Base.Magazine_Base_C.TryBreakDownMag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Base_C::TryBreakDownMag(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.TryBreakDownMag");

	AMagazine_Base_C_TryBreakDownMag_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.UpdateMesh
// (Public, BlueprintCallable, BlueprintEvent)

void AMagazine_Base_C::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.UpdateMesh");

	AMagazine_Base_C_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.UserConstructionScript");

	AMagazine_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Base_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.Physicalize");

	AMagazine_Base_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.OnReleasedFromGun
// (Event, Public, BlueprintEvent)

void AMagazine_Base_C::OnReleasedFromGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.OnReleasedFromGun");

	AMagazine_Base_C_OnReleasedFromGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMagazine_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.ReceiveBeginPlay");

	AMagazine_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Base_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.Used");

	AMagazine_Base_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.OnBulletsChanged
// (Event, Public, BlueprintEvent)

void AMagazine_Base_C::OnBulletsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.OnBulletsChanged");

	AMagazine_Base_C_OnBulletsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.OnParentChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItem**                ParentItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Base_C::OnParentChanged(class AVRItem** ParentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.OnParentChanged");

	AMagazine_Base_C_OnParentChanged_Params params;
	params.ParentItem = ParentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.BreakDownMag_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMagazine_Base_C::BreakDownMag_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.BreakDownMag_Server");

	AMagazine_Base_C_BreakDownMag_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.PackMagSound_Multi
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AMagazine_Base_C::PackMagSound_Multi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.PackMagSound_Multi");

	AMagazine_Base_C_PackMagSound_Multi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Base.Magazine_Base_C.ExecuteUbergraph_Magazine_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Base_C::ExecuteUbergraph_Magazine_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Base.Magazine_Base_C.ExecuteUbergraph_Magazine_Base");

	AMagazine_Base_C_ExecuteUbergraph_Magazine_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
