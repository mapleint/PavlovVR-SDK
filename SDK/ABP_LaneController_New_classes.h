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

// AnimBlueprintGeneratedClass ABP_LaneController_New.ABP_LaneController_New_C
// 0x0C1C (0x0F7C - 0x0360)
class UABP_LaneController_New_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3F75B7A14B2BDB2CAD29898124B002F5;      // 0x0368(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3296986D4E70796E276B93BDBF1233C0;// 0x03A8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_767C95804C4F95B04F902DAD5DBC6F64;// 0x04E0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B05416C148E70CCB0E94259889A2FEB8;// 0x0618(0x0138)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A1FFF59D4FCD9FEBC563FEB296CE0F17;// 0x0750(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_67D0516D47EA3CDA6292469B984F9250;// 0x0788(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_46C9CD3740AD244A6F07C1B15C6B2C96;// 0x07C8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31E379034A43AB4925F823B3CE221B68;// 0x0900(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6E9EED964FA4F08B9381D4A36C98AC06;// 0x0A38(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4E665B264086A3DC2F48FE83DE20A40F;// 0x0B70(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_049A9D8A4F77928A6D0967A7A07E2586;// 0x0CA8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_08DA0E30496A6066D974F0A43CFFD719;// 0x0DE0(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FAD17E0C453CC0DBCC7BB8A0726B51FB;// 0x0F18(0x0040)
	float                                              btn_00;                                                   // 0x0F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_01;                                                   // 0x0F5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_02;                                                   // 0x0F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_03;                                                   // 0x0F64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_04;                                                   // 0x0F68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_05;                                                   // 0x0F6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_06;                                                   // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_07;                                                   // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              btn_08;                                                   // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_LaneController_New.ABP_LaneController_New_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_LaneController_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
