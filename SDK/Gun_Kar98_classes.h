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

// BlueprintGeneratedClass Gun_Kar98.Gun_Kar98_C
// 0x0026 (0x0B76 - 0x0B50)
class AGun_Kar98_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Rail;                                                     // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bullet;                                                   // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BoltAction;                                               // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltPulled;                                               // 0x0B6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B6D(0x0003) MISSED OFFSET
	float                                              RotationRatio;                                            // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltRotated;                                              // 0x0B74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoltRotatedSub;                                           // 0x0B75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Kar98.Gun_Kar98_C");
		return ptr;
	}


	void SpawnBoltSound(class USoundCue* Sound);
	void UpdateChamber(bool Index);
	void UserConstructionScript();
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta);
	void BndEvt__ReloadHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature();
	void ReceiveBeginPlay();
	void OnChamberStateChanged_Event_1(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState);
	void OnAttachmentChanged();
	void Use();
	void OnSlideModeChanged(bool* bSliding);
	void ExecuteUbergraph_Gun_Kar98(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
