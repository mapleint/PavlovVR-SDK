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

// BlueprintGeneratedClass ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C
// 0x000B (0x03D0 - 0x03C5)
class AToolTip_Spec_Cycle_C : public AToolTipController_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ToolTip_Spec_Cycle.ToolTip_Spec_Cycle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnControllerTriggerChanged(bool bTriggered);
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void ExecuteUbergraph_ToolTip_Spec_Cycle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
