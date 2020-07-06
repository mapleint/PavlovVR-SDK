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

// Function Gun_Kar98.Gun_Kar98_C.SpawnBoltSound
struct AGun_Kar98_C_SpawnBoltSound_Params
{
	class USoundCue*                                   Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Kar98.Gun_Kar98_C.UpdateChamber
struct AGun_Kar98_C_UpdateChamber_Params
{
	bool                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Kar98.Gun_Kar98_C.UserConstructionScript
struct AGun_Kar98_C_UserConstructionScript_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature
struct AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature
struct AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature_Params
{
	struct FVector                                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Kar98.Gun_Kar98_C.BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
struct AGun_Kar98_C_BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.ReceiveBeginPlay
struct AGun_Kar98_C_ReceiveBeginPlay_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.OnChamberStateChanged_Event_1
struct AGun_Kar98_C_OnChamberStateChanged_Event_1_Params
{
	int                                                ChamberIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Kar98.Gun_Kar98_C.OnAttachmentChanged
struct AGun_Kar98_C_OnAttachmentChanged_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.Use
struct AGun_Kar98_C_Use_Params
{
};

// Function Gun_Kar98.Gun_Kar98_C.OnSlideModeChanged
struct AGun_Kar98_C_OnSlideModeChanged_Params
{
	bool*                                              bSliding;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gun_Kar98.Gun_Kar98_C.ExecuteUbergraph_Gun_Kar98
struct AGun_Kar98_C_ExecuteUbergraph_Gun_Kar98_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
