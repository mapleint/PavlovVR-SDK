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

// BlueprintGeneratedClass Gun_AK.Gun_AK_C
// 0x000C (0x0B5C - 0x0B50)
class AGun_AK_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              LastInput;                                                // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_AK.Gun_AK_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Skin_K2Node_ComponentBoundEvent_0_OnSkinChangedSignature__DelegateSignature();
	void ExecuteUbergraph_Gun_AK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
