
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

// Function Gun_Pepe.Gun_Pepe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGun_Pepe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gun_Pepe.Gun_Pepe_C.UserConstructionScript");

	AGun_Pepe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
