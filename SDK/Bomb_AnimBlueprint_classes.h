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

// AnimBlueprintGeneratedClass Bomb_AnimBlueprint.Bomb_AnimBlueprint_C
// 0x11C8 (0x1558 - 0x0390)
class UBomb_AnimBlueprint_C : public UBombAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9386E1FF404AC4C2329378A74EDC4556;      // 0x0398(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7AF156BC4B39446EBD871B8B41293E9E;// 0x03D8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_04851F8049FD83E6B559BC8DCFB014F3;// 0x0418(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C469FFA74F353726F1BDBE9330890438;// 0x0550(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8655BD5C44ADDF2A9D573ABA84A78B8E;// 0x0590(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7EDAD1E74CBDFBDF7FA528A0DC5E80B2;// 0x06C8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F0AF31274A849EB3181A8D86F8F28C0E;// 0x0800(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_62DD156C480A23380D549AB68DB5C751;// 0x0938(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2B39FDA34E4FE526B4FF52AE9FFA5BDD;// 0x0A70(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FCA18CB746630034787EA69E3E6CA8C9;// 0x0BA8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_01795565440DEFCC1C2978AE8B6BE075;// 0x0CE0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F0640DC3483C0676D020F097EF4D0221;// 0x0E18(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5BA758D44CCFC9894F344C999F1BB745;// 0x0F50(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6968C56B4CE2208B91265FB14FF8A8D0;// 0x1088(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_87E70D2D4428323F687B99877C4F6516;// 0x11C0(0x0138)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7E67416F4BA1663F33A0A68595238360;// 0x12F8(0x0038)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_37B15F6B4112AA7325D207B3FA9E0EE6;// 0x1330(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CDE559FA4ED82E66569954A3149D4C57;// 0x13A0(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0D18A90B4ED2CFAF96DCAF920DE41C4A;// 0x1410(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A231CFA1462ED170D35A0B82925B24C3;// 0x1480(0x00D8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bomb_AnimBlueprint.Bomb_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Bomb_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_A231CFA1462ED170D35A0B82925B24C3();
	void ExecuteUbergraph_Bomb_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
