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

// BlueprintGeneratedClass BaseGameMode.BaseGameMode_C
// 0x0048 (0x05F0 - 0x05A8)
class ABaseGameMode_C : public APavlovGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PostMatchDelay;                                           // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               GiveRandStream;                                           // 0x05BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AutoStart;                                                // 0x05C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckedForPlayersOnce;                                    // 0x05C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05C6(0x0002) MISSED OFFSET
	class UClass*                                      PostMatchOverlay;                                         // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostMatchOverlayDelay;                                    // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Terminating;                                              // 0x05D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05D5(0x0003) MISSED OFFSET
	class ABP_LootSpawnManager_C*                      LootSpawnManager;                                         // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               GMTags;                                                   // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseGameMode.BaseGameMode_C");
		return ptr;
	}


	void EndRound();
	class APawn* SpawnDefaultPawnFor(class AController** NewPlayer, class AActor** StartSpot);
	void UserConstructionScript();
	void K2_OnSetMatchState(struct FName* NewState);
	void OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn);
	void OnWaitingToStart();
	void ReceiveBeginPlay();
	void CheckForPlayers();
	void K2_OnLogout(class AController** ExitingController);
	void SpawnLootProxies();
	void OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState);
	void ExecuteUbergraph_BaseGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
