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

// BlueprintGeneratedClass BotContext.BotContext_C
// 0x0000 (0x0030 - 0x0030)
class UBotContext_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BotContext.BotContext_C");
		return ptr;
	}


	void ProvideSingleLocation(class UObject** QuerierObject, class AActor** QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject** QuerierObject, class AActor** QuerierActor, class AActor** ResultingActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
