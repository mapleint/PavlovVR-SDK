
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Flash_RU_AnimBlueprint.Flash_RU_AnimBlueprint_C.ExecuteUbergraph_Flash_RU_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlash_RU_AnimBlueprint_C::ExecuteUbergraph_Flash_RU_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flash_RU_AnimBlueprint.Flash_RU_AnimBlueprint_C.ExecuteUbergraph_Flash_RU_AnimBlueprint");

	UFlash_RU_AnimBlueprint_C_ExecuteUbergraph_Flash_RU_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
