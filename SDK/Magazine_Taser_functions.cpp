
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

// Function Magazine_Taser.Magazine_Taser_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_Taser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Taser.Magazine_Taser_C.UserConstructionScript");

	AMagazine_Taser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
