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

// BlueprintGeneratedClass ToolTip_Locomotion.ToolTip_Locomotion_C
// 0x0013 (0x03D8 - 0x03C5)
class AToolTip_Locomotion_C : public AToolTipController_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                TimerHandle;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ToolTip_Locomotion.ToolTip_Locomotion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ToolTip_Locomotion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
