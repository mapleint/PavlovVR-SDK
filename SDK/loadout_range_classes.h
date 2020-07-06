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

// BlueprintGeneratedClass loadout_range.loadout_range_C
// 0x0010 (0x0340 - 0x0330)
class Aloadout_range_C : public APavlovLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                MenuTipTimerHandle;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass loadout_range.loadout_range_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_loadout_range(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
