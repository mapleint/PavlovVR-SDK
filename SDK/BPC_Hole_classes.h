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

// BlueprintGeneratedClass BPC_Hole.BPC_Hole_C
// 0x0040 (0x0130 - 0x00F0)
class UBPC_Hole_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextureRenderTarget2D*                      Render_Target;                                            // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Draw_Mat;                                                 // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RenderTargetSize__Px_;                                    // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoleScaleMultiplier;                                      // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CurrentCmp;                                               // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              HoleSizeMin;                                              // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoleSizeMax;                                              // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Target_Mat;                                               // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitMovementScale;                                         // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BurnOffset;                                               // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Hole.BPC_Hole_C");
		return ptr;
	}


	void ClearHoles();
	void SetTexture(class UTexture* Texture);
	void ShakeHit(float ShakeValue);
	void InitShake(const struct FVector2D& UVHit, float EffectScale, bool StartShake_);
	void ReportHit(const struct FHitResult& HitResult, float EffectScale, bool StartTargetShake_);
	void DrawHit(const struct FVector2D& UVHit, float HoleSize, float BurnSize);
	void SetMeshMat(class UPrimitiveComponent* Prim_CMP, int ElementIndex, bool* Successful_);
	void ExecuteUbergraph_BPC_Hole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
