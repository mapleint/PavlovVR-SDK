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

// BlueprintGeneratedClass BP_KillhouseDoors.BP_KillhouseDoors_C
// 0x00C9 (0x03F1 - 0x0328)
class ABP_KillhouseDoors_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Door1;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Door2;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorFrame;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DoorRotation_Alpha_9E1769D149089FE4F5FAC59057D255CC;      // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DoorRotation__Direction_9E1769D149089FE4F5FAC59057D255CC; // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DoorRotation;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    MoveDoor;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BlastDoor;                                                // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  BlastSoundFX;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MoveSoundFX;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Door1StartingPosition;                                    // 0x0390(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Door2StartingPosition;                                    // 0x03C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Open_;                                                    // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KillhouseDoors.BP_KillhouseDoors_C");
		return ptr;
	}


	void bLast(bool Reset, float Impulse);
	void UserConstructionScript();
	void DoorRotation__FinishedFunc();
	void DoorRotation__UpdateFunc();
	void ReceiveBeginPlay();
	void Close_Doors();
	void Open_Doors();
	void Play_Sound_FX(class USoundBase* Sound);
	void MoveDoor_Event(bool Open_);
	void BlastDoor_Event(bool Reset_, float ImpulseForce);
	void Stop_Doors();
	void ExecuteUbergraph_BP_KillhouseDoors(int EntryPoint);
	void BlastDoor__DelegateSignature(bool Reset_, float ImpulseForce);
	void MoveDoor__DelegateSignature(bool Open_);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
