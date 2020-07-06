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

// AnimBlueprintGeneratedClass Revolver_AnimBlueprint.Revolver_AnimBlueprint_C
// 0x0DE8 (0x1228 - 0x0440)
class URevolver_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6215DBC54AFDD30B4C688394753A3F9C;      // 0x0448(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B1453D9146CEC74BD9D266A4855C2808;// 0x0488(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_845BE0974E8D62657499ED80649CF317;// 0x05C0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33BA87444789CC1A44E05E8D1CB2C05A;// 0x06F8(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9D6E08B44F4675756D79F4977471A023;// 0x0830(0x00D8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A6E1BDEA4F80DC4593C266BFD922A4FD;// 0x0908(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_91F68C104E90090609D504A62037978B;// 0x0948(0x0038)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_DB4883994F39D3DA0193E89B36527BCE;// 0x0980(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7666FD294D9206F8A7227F923E791A21;// 0x09B0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FCCDD6344918B06537990B8E7BB71CD3;// 0x0A80(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_58AA3E0F4AE2E5A697A8CC9CF10D6689;// 0x0AC8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6BD892444A96C7468BE70DB3ED771526;// 0x0B08(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_246AB514410BB81998AC70956EFCAD79;// 0x0C40(0x0138)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_904140FF41BA5941113F68B7A0C86360;// 0x0D78(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F2A2250241E6F4C0AB489DB35D1E1BB6;// 0x0E48(0x00D8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CA6A5BCA4789F3DED39806AD6B8FD7CA;// 0x0F20(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_07043DE24FE0C65A594616AE8A1DFF5C;// 0x0F60(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A5C46C3E4759A1B1D63D8A8BB0DB9421;// 0x0FA8(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3E16FA7E442FF395D27050A62D3BC9D9;// 0x0FE8(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61382BE44DC20588E4D72FA154D24768;// 0x1028(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B574C1EE4C6D30C66E766193C584B483;// 0x1070(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9BE039E547125875A25447A659205EEA;// 0x11A8(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_87A8A2734B6A280D79DA7080CEA79FB1;// 0x11E8(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Revolver_AnimBlueprint.Revolver_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_B574C1EE4C6D30C66E766193C584B483();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_246AB514410BB81998AC70956EFCAD79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_6BD892444A96C7468BE70DB3ED771526();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_33BA87444789CC1A44E05E8D1CB2C05A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revolver_AnimBlueprint_AnimGraphNode_ModifyBone_845BE0974E8D62657499ED80649CF317();
	void ExecuteUbergraph_Revolver_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
