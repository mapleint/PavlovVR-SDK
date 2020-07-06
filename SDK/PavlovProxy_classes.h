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

// Class PavlovProxy.Pavlov_AudioInterface
// 0x0000 (0x0028 - 0x0028)
class UPavlov_AudioInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_AudioInterface");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_AudioVolume
// 0x0058 (0x03B8 - 0x0360)
class APavlov_AudioVolume : public AVolume
{
public:
	TMap<EPavlovReverbType, class USoundSubmix*>       ReverbSubmixes;                                           // 0x0360(0x0050) (ZeroConstructor, Transient)
	bool                                               bForceOutdoor;                                            // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPavlovReverbType                                  ReverbType;                                               // 0x03B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_AudioVolume");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_BombSpot
// 0x0008 (0x0330 - 0x0328)
class APavlov_BombSpot : public AActor
{
public:
	bool                                               bIsB;                                                     // 0x0328(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_BombSpot");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_CustomItem
// 0x00C8 (0x03F0 - 0x0328)
class APavlov_CustomItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0328(0x0040) MISSED OFFSET
	EHoldingAnim                                       HoldingAnim;                                              // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipRollPick;                                            // 0x0369(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipYawPick;                                             // 0x036A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipYAxisPick;                                           // 0x036B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PickOffset;                                               // 0x036C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PickRotationOffset;                                       // 0x0378(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0384(0x000C) MISSED OFFSET
	struct FTransform                                  InventoryOffset;                                          // 0x0390(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bNeverDestroyInactive;                                    // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              SelfDestroyDelay;                                         // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInventoryDisabled;                                       // 0x03C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	TArray<unsigned char>                              ExcludeSlots;                                             // 0x03D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class USoundCue*                                   PickSound;                                                // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_CustomItem");
		return ptr;
	}


	void SetPickDisabled(bool bDisabled);
	void OwnerDestroyed(class AActor* DestroyedActor);
	void OnUsed(bool bJustPicked);
	void OnUse();
	void OnPickup(class APawn* Pawn, bool bDominant);
	void OnPickDisabled__DelegateSignature(bool bDisabled);
	unsigned char OnGetState__DelegateSignature();
	class APawn* OnGetPawn__DelegateSignature();
	void OnDropItem__DelegateSignature(bool bDestroy);
	void OnDrop();
	bool GetOwningPawn(class APawn** Pawn);
	EProxyItemState GetItemState();
	void Drop(bool bDestroy);
	bool CanPickupItem(class APawn* Pawn);
};


// Class PavlovProxy.Pavlov_GameLogic
// 0x0020 (0x0348 - 0x0328)
class APavlov_GameLogic : public AInfo
{
public:
	class UPavlov_Map*                                 definition;                                               // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GlobalInfoClass;                                          // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlayerInfoClass;                                          // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlayerProxyClass;                                         // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_GameLogic");
		return ptr;
	}


	void SpawnLootCrate(const struct FName& LootCrateID);
	void SpawnItemWRef(const struct FPavlovItemSpawnParams& Params, bool* bSuccessful, class AActor** Item);
	void SpawnItem(const struct FPavlovItemSpawnParams& Params);
	bool SpawnAttachments(const struct FPavlovAttachmentSpawnParams& Params);
	void SpawnAndPosessPawns();
	void Spawn(class AController* Controller, const struct FTransform& Transform, bool bAsGhost, class APawn** Pawn);
	void SetZombiesToAutoSpawn(int TotalZombies);
	void SetZombieAutoSpawnProperties(float BatchTimeMin, float BatchTimeMax, int ZBatchSize, int MaxZCount);
	void SetZBodyCount(int BodyCount);
	void SetTeamCash(int TeamId, int CashAmmount);
	void SetRoundState(EPavlovRoundState State);
	void SetPlayerVitality(class APlayerState* PlayerState, int Health, int Armour, int Helmet);
	void SetPlayerTeam(class APlayerState* PlayerState, int TeamId);
	void SetPlayerGag(class APlayerState* PlayerState, bool bEnabled);
	void SetPlayerCash(class APlayerState* PlayerState, int CashAmmount);
	void SetPlayerBuyingEnabled(class APlayerState* PlayerState, float Duration, float BuyZoneMaxDistance);
	void SetMovementDisabled(bool bDisabled);
	void SetGameModeProperties(const struct FPavlovGameModeProperties& Properties);
	void SetFallDamage(bool bEnabled);
	void SetEveryoneCash(int CashAmmount);
	void SetCashPerZombieKill(int Cash);
	void PostRoundCleanUp();
	void OnZombieKilled(class APlayerState* Killer, class ACharacter* Zombie, bool bAutoSpawned);
	void OnRoundStateChanged(EPavlovRoundState OldState, EPavlovRoundState NewState);
	void OnRoundEnd();
	void OnRoundBegin();
	void OnPlayerSpawned(const struct FPavlovPlayerStatus& PlayerStatus);
	void OnPlayerLeftServer(const struct FPavlovPlayerStatus& PlayerStatus);
	void OnPlayerKilled(const struct FPavlovPlayerStatus& PlayerStatus, class APlayerState* Killer, bool bHeadshot, const struct FName& KilledByItem);
	void OnPlayerJoinedServer(const struct FPavlovPlayerStatus& PlayerStatus);
	void OnCustomRconCommand(const struct FString& RconCommand);
	void OnCustomGameModeInit();
	void OnAssignTeam(const struct FPavlovPlayerStatus& Status, int* TeamId);
	void MulticastOnRoundStateChanged(bool bStarting);
	void ManuallySpawnZombies(TArray<struct FTransform> RandomLocations, int Amount, bool* bSuccessful, TArray<class ACharacter*>* Zombies);
	void KillAllZombies();
	void KickPlayer(class APlayerState* PlayerState, const struct FString& Reason, bool bBan);
	void IncrementTeamScore(int TeamId, int Score);
	void IncrementPlayerScore(class APlayerState* PlayerState, int Score);
	void GiveTeamCash(int TeamId, int CashAmmount);
	void GivePlayerCash(class APlayerState* PlayerState, int CashAmmount);
	void GiveEveryoneCash(int CashAmmount);
	int GetZsToAutoSpawn();
	int GetZAliveCount();
	void GetSpawnTransform(class AController* Controller, struct FTransform* Transform);
	void GetRoundState(EPavlovRoundState* State);
	class AActor* STATIC_GetPlayerHand(class APlayerState* PlayerState, bool bDominant);
	EPavlovGameModeType STATIC_GetPavlovGameModeType(class UObject* WorldContextObject);
	void GetGameModeProperties(struct FPavlovGameModeProperties* Properties);
	void CleanupZombieBodies();
	void AddZombiesToAutoSpawn(int Amount, int* TotalAmountToSpawn);
};


// Class PavlovProxy.Pavlov_GlobalInfo
// 0x0038 (0x0128 - 0x00F0)
class UPavlov_GlobalInfo : public UActorComponent
{
public:
	class UDataTable*                                  PlayerSkinTable;                                          // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  CustomItemTable;                                          // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELimitedAmmoType                                   LimitedAmmoType;                                          // 0x0100(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<struct FItemList>                           ItemList;                                                 // 0x0108(0x0010) (Net, ZeroConstructor)
	bool                                               bDisableAttachmentMode;                                   // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableVoting;                                           // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableKillfeedBeep;                                     // 0x011A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomServer;                                            // 0x011B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class APavlov_GameLogic*                           GameLogic;                                                // 0x0120(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_GlobalInfo");
		return ptr;
	}


	void SetLimitedAmmoType(ELimitedAmmoType AmmoType);
	ELimitedAmmoType GetLimitedAmmoType();
	void DisableVoting(bool bDisable);
	void DisableKillfeedBeep(bool bDisable);
	void DisableAttachmentMode(bool bDisable);
	void AddItemToList(const struct FItemList& Item);
};


// Class PavlovProxy.Pavlov_HandProxy
// 0x0000 (0x0580 - 0x0580)
class UPavlov_HandProxy : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_HandProxy");
		return ptr;
	}


	void TriggerDown();
	void ReplicateInteract_Server(EInteractType InteractType, class UObject* InteractObj);
	void Grab();
	class APavlov_PlayerProxy* GetPlayerProxy();
	class UObject* GetOverlappingInteractInterface();
};


// Class PavlovProxy.Pavlov_InteractBox
// 0x0030 (0x05B0 - 0x0580)
class UPavlov_InteractBox : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractBoxClient;                                      // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractBoxServer;                                      // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_InteractBox");
		return ptr;
	}


	void InteractServer(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj);
	void InteractClient(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj);
};


// Class PavlovProxy.Pavlov_InteractInterface
// 0x0000 (0x0028 - 0x0028)
class UPavlov_InteractInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_InteractInterface");
		return ptr;
	}


	void InteractServer(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj);
	void InteractClient(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj);
};


// Class PavlovProxy.Pavlov_InteractSkeletalMesh
// 0x0020 (0x0B50 - 0x0B30)
class UPavlov_InteractSkeletalMesh : public USkeletalMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnInteractSKClient;                                       // 0x0B30(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractSKServer;                                       // 0x0B40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_InteractSkeletalMesh");
		return ptr;
	}


	void InteractServer(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj);
	void InteractClient(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj);
};


// Class PavlovProxy.Pavlov_InteractStaticMesh
// 0x0020 (0x0610 - 0x05F0)
class UPavlov_InteractStaticMesh : public UStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnInteractSMClient;                                       // 0x05F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractSMServer;                                       // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_InteractStaticMesh");
		return ptr;
	}


	void InteractServer(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj);
	void InteractClient(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj);
};


// Class PavlovProxy.Pavlov_KillVolume
// 0x0000 (0x0360 - 0x0360)
class APavlov_KillVolume : public ATriggerVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_KillVolume");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Ladder
// 0x0010 (0x0338 - 0x0328)
class APavlov_Ladder : public AActor
{
public:
	class UBoxComponent*                               Volume;                                                   // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ClimbSpeed;                                               // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_Ladder");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Library
// 0x0000 (0x0028 - 0x0028)
class UPavlov_Library : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_Library");
		return ptr;
	}


	void STATIC_SendMsg(class APlayerState* PlayerState, struct FMessage* Msg);
	void STATIC_SendAllMsg(class UObject* WorldContextObject, struct FMessage* Msg);
	bool STATIC_SaveStringToFile(class UObject* WorldContextObject, const struct FString& Filename, bool bAllowOverwrite, struct FString* String);
	bool STATIC_SaveStringArray(class UObject* WorldContextObject, const struct FString& Filename, bool AllowOverwrite, TArray<struct FString>* SaveArray);
	void STATIC_LogToConsole(const struct FString& LogMsg, bool bError);
	bool STATIC_LoadStringFromFile(class UObject* WorldContextObject, const struct FString& Filename, struct FString* String);
	bool STATIC_LoadStringArray(class UObject* WorldContextObject, const struct FString& Filename, TArray<struct FString>* Strings);
	bool STATIC_IsCommunityServer(class UObject* WorldContextObject);
	bool STATIC_HasPlayerProxy(class APawn* Pawn);
	bool STATIC_HasPlayerInfo(class APlayerState* PlayerState);
	bool STATIC_HasMsgHandler(class APlayerState* PlayerState);
	void STATIC_GetWhitelist(class UObject* WorldContextObject, bool* bSuccessful, TArray<struct FString>* Whitelist);
	class APavlov_PlayerProxy* STATIC_GetPlayerProxy(class APawn* Pawn);
	class UPavlov_PlayerInfo* STATIC_GetPlayerInfo(class APlayerState* PlayerState);
	class UPavlov_MsgHandler* STATIC_GetMsgHandler(class APlayerState* PlayerState);
	void STATIC_GetModerators(class UObject* WorldContextObject, bool* bSuccessful, TArray<struct FString>* Mods);
	class UPavlov_GlobalInfo* STATIC_GetGlobalInfo(class UObject* WorldContextObject);
	class APavlov_GameLogic* STATIC_GetGameLogic(class UObject* WorldContextObject);
	void STATIC_GetDayOfWeek(const struct FDateTime& DateTime, EDay* DayOfTheWeek);
	class APavlov_CustomItem* STATIC_GetCustomItemByClass(class AActor* Item, class UClass* CustomItemClass, bool* bSuccessful);
	bool STATIC_GetBanListInternal(class UObject* WorldContextObject, TArray<struct FString>* BanList);
	bool STATIC_AddPlayerProxy(class UClass* PlayerProxyClass, class APawn* Pawn, class APavlov_PlayerProxy** PlayerProxy);
	bool STATIC_AddPlayerInfo(class UClass* PlayerInfoClass, class APlayerState* PlayerState, class UPavlov_PlayerInfo** PlayerInfo);
	bool STATIC_AddMsgHandler(class APlayerState* PlayerState, class UPavlov_MsgHandler** MsgHandler);
};


// Class PavlovProxy.Pavlov_Map
// 0x00B8 (0x00E8 - 0x0030)
class UPavlov_Map : public UDataAsset
{
public:
	struct FString                                     UniqueId;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Label;                                                    // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Thumbnail;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PavlovProxy.Pavlov_Map.Map
	unsigned char                                      UnknownData01[0x28];                                      // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PavlovProxy.Pavlov_Map.QuestMap
	bool                                               bHidden;                                                  // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                Compatibility;                                            // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomGameMode;                                          // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FString                                     CustomGameModeLabel;                                      // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapURL;                                                   // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCustom;                                                  // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_Map");
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_MsgHandler
// 0x0028 (0x0118 - 0x00F0)
class UPavlov_MsgHandler : public UActorComponent
{
public:
	TArray<struct FMessage>                            Messages;                                                 // 0x00F0(0x0010) (ZeroConstructor)
	int                                                MaxMessages;                                              // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMessageReceived;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_MsgHandler");
		return ptr;
	}


	void SetMaxMessages(int Max);
	void SendMessageToTeam(int TeamId, struct FMessage* Msg);
	void SendMessage(class APlayerState* PlayerState, struct FMessage* Msg);
	void LocalSendMessage(struct FMessage* Msg);
	class APlayerState* GetPlayerState();
	TArray<struct FMessage> GetMessages();
	int GetMaxMessages();
	void Client_ReceivedMsg(const struct FMessage& Msg);
};


// Class PavlovProxy.Pavlov_PlayerInfo
// 0x0028 (0x0118 - 0x00F0)
class UPavlov_PlayerInfo : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET
	int                                                RadioChannel;                                             // 0x0110(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_PlayerInfo");
		return ptr;
	}


	void SetRadioChannel(int NewRadioChannel);
	int OnGetTeamId__DelegateSignature();
	void OnDisableFallSound__DelegateSignature();
	int GetTeam();
	class APlayerState* GetPlayerState();
	void DisableFallSound();
};


// Class PavlovProxy.Pavlov_PlayerProxy
// 0x0180 (0x04A8 - 0x0328)
class APavlov_PlayerProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0328(0x0160) MISSED OFFSET
	struct FHandsProxy                                 HandsProxy;                                               // 0x0488(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	class UClass*                                      HandProxyClass;                                           // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerSkin;                                               // 0x04A0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_PlayerProxy");
		return ptr;
	}


	void StartSkinRetryTimer();
	void SetVoiceAttenuation(class USoundAttenuation* Attenuation);
	void SetSkinName(const struct FName& NewSkin);
	void SetPlayerSkin(const struct FName& Skin);
	void SetPlayerCullDistance(float CullDistance);
	bool RevivePlayer();
	int RemoveAmmo(const struct FName& AmmoId, int Amount);
	void PlayerDied(class AActor* KilledActor);
	void PlayerDestroyed(class AActor* DestroyedActor);
	void OwnerDied(class AActor* KilledActor);
	void OnSkinChangeFailed();
	void OnSkinChanged(const struct FName& Skin);
	void OnSetPlayerSkin__DelegateSignature(const struct FName& PlayerSkin);
	void OnSetAttenuation__DelegateSignature(class USoundAttenuation* Attenuation);
	bool OnRevivePlayer__DelegateSignature();
	void OnRep_PlayerSkinChanged();
	int OnRemoveAmmo__DelegateSignature(const struct FName& AmmoId, int Amount);
	void OnPlayerDeath(class AActor* KilledActor);
	bool OnIsPickupDisabled__DelegateSignature();
	class AActor* OnHasItem__DelegateSignature(const struct FName& Item);
	int OnHasAmmo__DelegateSignature(const struct FName& AmmoId);
	class USkeletalMeshComponent* OnGetSkinSkeleton__DelegateSignature();
	bool OnGetInventorySlotVis__DelegateSignature();
	unsigned char OnGetCompatibleSlot__DelegateSignature(const struct FName& Item);
	TArray<struct FName> OnGetAttachments__DelegateSignature(class AActor* Weapon);
	struct FName OnGetAmmoId__DelegateSignature(class AActor* Weapon);
	void OnDropItems__DelegateSignature(bool bDominant, bool bDestroy);
	bool OnDropItem__DelegateSignature(const struct FName& Item, bool bDestroy, bool bFromHandsOnly);
	void OnDropHeldItems__DelegateSignature(bool bDominant, bool bBoth, bool bDestroy);
	void OnDisablePickup__DelegateSignature(bool bDisablePickup);
	bool OnCanRevive__DelegateSignature();
	void OnAddAmmo__DelegateSignature(const struct FName& AmmoId, int Amount);
	bool IsPickupDisabled();
	void InitializeClient();
	void HasItem(const struct FName& ItemId, bool* bHasItem, class AActor** Item);
	bool HasAmmo(const struct FName& AmmoId, int* AmmoAmount);
	bool GetWeaponAttachments(class AActor* Weapon, TArray<struct FName>* Attachments);
	bool GetWeaponAmmoId(class AActor* Weapon, struct FName* AmmoId);
	class USoundAttenuation* GetVoiceAttenuation();
	class USkeletalMeshComponent* GetSkinSkeleton();
	void GetPlayerVitality(struct FPlayerVitality* PlayerVitality);
	struct FName GetPlayerSkin();
	class USkeletalMeshComponent* GetPlayerSkeleton();
	class APawn* GetPawn();
	void GetHeldItem(bool bDominantHand, bool* bHasItem, struct FPlayerItem* Item);
	bool GetCompatibleSlot(const struct FName& ItemId, unsigned char* Slot);
	void GetAllItems(TArray<struct FPlayerItem>* Items);
	void GetAllInventoryItems(TArray<struct FInventoryItem>* InvItems);
	void EnableClientInput();
	void DropItem(const struct FName& Item, bool bDestroy, bool bFromHandsOnly, bool* bSuccessful);
	void DropHeld(EHands hand, bool bDestroyItems);
	void DropAll(bool bDestroyItems, bool bInventoryOnly);
	void DisablePickup(bool bDisablePickup);
	void DisableClientInput();
	bool CanRevive();
	void AddAmmo(const struct FName& AmmoId, int AmountToAdd);
};


// Class PavlovProxy.Pavlov_Spawn
// 0x0008 (0x0360 - 0x0358)
class APavlov_Spawn : public APlayerStart
{
public:
	int                                                TeamId;                                                   // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamic;                                                 // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyTeam;                                                // 0x035D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecial;                                                 // 0x035E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x035F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.Pavlov_Spawn");
		return ptr;
	}

};


// Class PavlovProxy.PavlovProxyStatics
// 0x0000 (0x0028 - 0x0028)
class UPavlovProxyStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PavlovProxy.PavlovProxyStatics");
		return ptr;
	}


	void STATIC_GetTeamScore(class UObject* WorldContextObject, int TeamId, int* Score);
	void STATIC_GetPavlovPlayerStatusByPawn(class APawn* Pawn, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded);
	void STATIC_GetPavlovPlayerStatus(class APlayerState* PlayerState, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
