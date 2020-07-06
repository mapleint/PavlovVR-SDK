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

// BlueprintGeneratedClass Gun_MP5.Gun_MP5_C
// 0x0014 (0x0B64 - 0x0B50)
class AGun_MP5_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVRHandleComponent*                          StockHandle;                                              // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StockAccum;                                               // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_MP5.Gun_MP5_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__StockHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__StockHandle_K2Node_ComponentBoundEvent_3_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta);
	void ExecuteUbergraph_Gun_MP5(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
