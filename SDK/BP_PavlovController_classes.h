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

// BlueprintGeneratedClass BP_PavlovController.BP_PavlovController_C
// 0x0028 (0x0898 - 0x0870)
class ABP_PavlovController_C : public APavlovItemController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        WatchFlash;                                               // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Watch;                                                    // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BlinkTimeline_Intensity_AD0727B945F65BCFD8E18281BF7661F6; // 0x0888(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BlinkTimeline__Direction_AD0727B945F65BCFD8E18281BF7661F6;// 0x088C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BlinkTimeline;                                            // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PavlovController.BP_PavlovController_C");
		return ptr;
	}


	void UserConstructionScript();
	void BlinkTimeline__FinishedFunc();
	void BlinkTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void MakeWatchBlink();
	void ExecuteUbergraph_BP_PavlovController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
