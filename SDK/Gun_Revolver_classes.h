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

// BlueprintGeneratedClass Gun_Revolver.Gun_Revolver_C
// 0x0060 (0x0BB0 - 0x0B50)
class AGun_Revolver_C : public AHandGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGestureComponent*                           Gesture;                                                  // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           chamber5;                                                 // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           chamber4;                                                 // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           chamber3;                                                 // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           chamber2;                                                 // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChamberComponent*                           chamber1;                                                 // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       CloseGestureName;                                         // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0B90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       RemoveGestureName;                                        // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_2;                                                 // 0x0BA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0BA2(0x0006) MISSED OFFSET
	struct FName                                       CloseSpinGestureName;                                     // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Revolver.Gun_Revolver_C");
		return ptr;
	}


	void VerifyCanClose();
	void UserConstructionScript();
	void OnMagBoltRelease_Event_1();
	void ReceiveBeginPlay();
	void OnRevolverCylinderChanged_Event_1(bool bOpen);
	void OnGesturePerformedDelegate(const struct FName& Name);
	void SetupRemoval();
	void OnDrop();
	void OnSnapTriggerReset();
	void OnSpawnUnloaded();
	void SetupClose();
	void TickRotation();
	void RotateChambers();
	void OnPick(class AVRItemController** ByController);
	void ExecuteUbergraph_Gun_Revolver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
