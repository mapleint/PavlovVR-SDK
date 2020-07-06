#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PavlovProxy.Pavlov_CustomItem.SetPickDisabled
struct APavlov_CustomItem_SetPickDisabled_Params
{
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_CustomItem.OwnerDestroyed
struct APavlov_CustomItem_OwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_CustomItem.OnUsed
struct APavlov_CustomItem_OnUsed_Params
{
	bool                                               bJustPicked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_CustomItem.OnUse
struct APavlov_CustomItem_OnUse_Params
{
};

// Function PavlovProxy.Pavlov_CustomItem.OnPickup
struct APavlov_CustomItem_OnPickup_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnPickDisabled__DelegateSignature
struct APavlov_CustomItem_OnPickDisabled__DelegateSignature_Params
{
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetState__DelegateSignature
struct APavlov_CustomItem_OnGetState__DelegateSignature_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetPawn__DelegateSignature
struct APavlov_CustomItem_OnGetPawn__DelegateSignature_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnDropItem__DelegateSignature
struct APavlov_CustomItem_OnDropItem__DelegateSignature_Params
{
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_CustomItem.OnDrop
struct APavlov_CustomItem_OnDrop_Params
{
};

// Function PavlovProxy.Pavlov_CustomItem.GetOwningPawn
struct APavlov_CustomItem_GetOwningPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_CustomItem.GetItemState
struct APavlov_CustomItem_GetItemState_Params
{
	EProxyItemState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_CustomItem.Drop
struct APavlov_CustomItem_Drop_Params
{
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_CustomItem.CanPickupItem
struct APavlov_CustomItem_CanPickupItem_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrate
struct APavlov_GameLogic_SpawnLootCrate_Params
{
	struct FName                                       LootCrateID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnItemWRef
struct APavlov_GameLogic_SpawnItemWRef_Params
{
	struct FPavlovItemSpawnParams                      Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnItem
struct APavlov_GameLogic_SpawnItem_Params
{
	struct FPavlovItemSpawnParams                      Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnAttachments
struct APavlov_GameLogic_SpawnAttachments_Params
{
	struct FPavlovAttachmentSpawnParams                Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns
struct APavlov_GameLogic_SpawnAndPosessPawns_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.Spawn
struct APavlov_GameLogic_Spawn_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	bool                                               bAsGhost;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetZombiesToAutoSpawn
struct APavlov_GameLogic_SetZombiesToAutoSpawn_Params
{
	int                                                TotalZombies;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetZombieAutoSpawnProperties
struct APavlov_GameLogic_SetZombieAutoSpawnProperties_Params
{
	float                                              BatchTimeMin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BatchTimeMax;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZBatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxZCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetZBodyCount
struct APavlov_GameLogic_SetZBodyCount_Params
{
	int                                                BodyCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetTeamCash
struct APavlov_GameLogic_SetTeamCash_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetRoundState
struct APavlov_GameLogic_SetRoundState_Params
{
	EPavlovRoundState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality
struct APavlov_GameLogic_SetPlayerVitality_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Armour;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Helmet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam
struct APavlov_GameLogic_SetPlayerTeam_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag
struct APavlov_GameLogic_SetPlayerGag_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash
struct APavlov_GameLogic_SetPlayerCash_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled
struct APavlov_GameLogic_SetPlayerBuyingEnabled_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BuyZoneMaxDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled
struct APavlov_GameLogic_SetMovementDisabled_Params
{
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties
struct APavlov_GameLogic_SetGameModeProperties_Params
{
	struct FPavlovGameModeProperties                   Properties;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.SetFallDamage
struct APavlov_GameLogic_SetFallDamage_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash
struct APavlov_GameLogic_SetEveryoneCash_Params
{
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.SetCashPerZombieKill
struct APavlov_GameLogic_SetCashPerZombieKill_Params
{
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp
struct APavlov_GameLogic_PostRoundCleanUp_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnZombieKilled
struct APavlov_GameLogic_OnZombieKilled_Params
{
	class APlayerState*                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Zombie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSpawned;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged
struct APavlov_GameLogic_OnRoundStateChanged_Params
{
	EPavlovRoundState                                  OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd
struct APavlov_GameLogic_OnRoundEnd_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin
struct APavlov_GameLogic_OnRoundBegin_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned
struct APavlov_GameLogic_OnPlayerSpawned_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer
struct APavlov_GameLogic_OnPlayerLeftServer_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled
struct APavlov_GameLogic_OnPlayerKilled_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class APlayerState*                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHeadshot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KilledByItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer
struct APavlov_GameLogic_OnPlayerJoinedServer_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_GameLogic.OnCustomRconCommand
struct APavlov_GameLogic_OnCustomRconCommand_Params
{
	struct FString                                     RconCommand;                                              // (Parm, ZeroConstructor)
};

// Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit
struct APavlov_GameLogic_OnCustomGameModeInit_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam
struct APavlov_GameLogic_OnAssignTeam_Params
{
	struct FPavlovPlayerStatus                         Status;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                TeamId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged
struct APavlov_GameLogic_MulticastOnRoundStateChanged_Params
{
	bool                                               bStarting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.ManuallySpawnZombies
struct APavlov_GameLogic_ManuallySpawnZombies_Params
{
	TArray<struct FTransform>                          RandomLocations;                                          // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class ACharacter*>                          Zombies;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function PavlovProxy.Pavlov_GameLogic.KillAllZombies
struct APavlov_GameLogic_KillAllZombies_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.KickPlayer
struct APavlov_GameLogic_KickPlayer_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	bool                                               bBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore
struct APavlov_GameLogic_IncrementTeamScore_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore
struct APavlov_GameLogic_IncrementPlayerScore_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash
struct APavlov_GameLogic_GiveTeamCash_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash
struct APavlov_GameLogic_GivePlayerCash_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash
struct APavlov_GameLogic_GiveEveryoneCash_Params
{
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetZsToAutoSpawn
struct APavlov_GameLogic_GetZsToAutoSpawn_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetZAliveCount
struct APavlov_GameLogic_GetZAliveCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform
struct APavlov_GameLogic_GetSpawnTransform_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetRoundState
struct APavlov_GameLogic_GetRoundState_Params
{
	EPavlovRoundState                                  State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand
struct APavlov_GameLogic_GetPlayerHand_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType
struct APavlov_GameLogic_GetPavlovGameModeType_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovGameModeType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties
struct APavlov_GameLogic_GetGameModeProperties_Params
{
	struct FPavlovGameModeProperties                   Properties;                                               // (Parm, OutParm)
};

// Function PavlovProxy.Pavlov_GameLogic.CleanupZombieBodies
struct APavlov_GameLogic_CleanupZombieBodies_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.AddZombiesToAutoSpawn
struct APavlov_GameLogic_AddZombiesToAutoSpawn_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalAmountToSpawn;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GlobalInfo.SetLimitedAmmoType
struct UPavlov_GlobalInfo_SetLimitedAmmoType_Params
{
	ELimitedAmmoType                                   AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GlobalInfo.GetLimitedAmmoType
struct UPavlov_GlobalInfo_GetLimitedAmmoType_Params
{
	ELimitedAmmoType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GlobalInfo.DisableVoting
struct UPavlov_GlobalInfo_DisableVoting_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GlobalInfo.DisableKillfeedBeep
struct UPavlov_GlobalInfo_DisableKillfeedBeep_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GlobalInfo.DisableAttachmentMode
struct UPavlov_GlobalInfo_DisableAttachmentMode_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_GlobalInfo.AddItemToList
struct UPavlov_GlobalInfo_AddItemToList_Params
{
	struct FItemList                                   Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_HandProxy.TriggerDown
struct UPavlov_HandProxy_TriggerDown_Params
{
};

// Function PavlovProxy.Pavlov_HandProxy.ReplicateInteract_Server
struct UPavlov_HandProxy_ReplicateInteract_Server_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_HandProxy.Grab
struct UPavlov_HandProxy_Grab_Params
{
};

// Function PavlovProxy.Pavlov_HandProxy.GetPlayerProxy
struct UPavlov_HandProxy_GetPlayerProxy_Params
{
	class APavlov_PlayerProxy*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_HandProxy.GetOverlappingInteractInterface
struct UPavlov_HandProxy_GetOverlappingInteractInterface_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_InteractBox.InteractServer
struct UPavlov_InteractBox_InteractServer_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_HandProxy*                           HandProxy;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_InteractBox.InteractClient
struct UPavlov_InteractBox_InteractClient_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_HandProxy*                           HandProxy;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_InteractInterface.InteractServer
struct UPavlov_InteractInterface_InteractServer_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_HandProxy*                           HandProxy;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_InteractInterface.InteractClient
struct UPavlov_InteractInterface_InteractClient_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_HandProxy*                           HandProxy;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractServer
struct UPavlov_InteractSkeletalMesh_InteractServer_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_HandProxy*                           HandProxy;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractClient
struct UPavlov_InteractSkeletalMesh_InteractClient_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_HandProxy*                           HandProxy;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_InteractStaticMesh.InteractServer
struct UPavlov_InteractStaticMesh_InteractServer_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_HandProxy*                           HandProxy;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_InteractStaticMesh.InteractClient
struct UPavlov_InteractStaticMesh_InteractClient_Params
{
	EInteractType                                      InteractType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_HandProxy*                           HandProxy;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     InteractObj;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.SendMsg
struct UPavlov_Library_SendMsg_Params
{
	struct FMessage                                    Msg;                                                      // (Parm, OutParm, ReferenceParm)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.SendAllMsg
struct UPavlov_Library_SendAllMsg_Params
{
	struct FMessage                                    Msg;                                                      // (Parm, OutParm, ReferenceParm)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.SaveStringToFile
struct UPavlov_Library_SaveStringToFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bAllowOverwrite;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.SaveStringArray
struct UPavlov_Library_SaveStringArray_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SaveArray;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               AllowOverwrite;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.LogToConsole
struct UPavlov_Library_LogToConsole_Params
{
	struct FString                                     LogMsg;                                                   // (Parm, ZeroConstructor)
	bool                                               bError;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.LoadStringFromFile
struct UPavlov_Library_LoadStringFromFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.LoadStringArray
struct UPavlov_Library_LoadStringArray_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Strings;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.IsCommunityServer
struct UPavlov_Library_IsCommunityServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.HasPlayerProxy
struct UPavlov_Library_HasPlayerProxy_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.HasPlayerInfo
struct UPavlov_Library_HasPlayerInfo_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.HasMsgHandler
struct UPavlov_Library_HasMsgHandler_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.GetWhitelist
struct UPavlov_Library_GetWhitelist_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Whitelist;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function PavlovProxy.Pavlov_Library.GetPlayerProxy
struct UPavlov_Library_GetPlayerProxy_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlov_PlayerProxy*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.GetPlayerInfo
struct UPavlov_Library_GetPlayerInfo_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_PlayerInfo*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.GetMsgHandler
struct UPavlov_Library_GetMsgHandler_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_MsgHandler*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.GetModerators
struct UPavlov_Library_GetModerators_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Mods;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function PavlovProxy.Pavlov_Library.GetGlobalInfo
struct UPavlov_Library_GetGlobalInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_GlobalInfo*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.GetGameLogic
struct UPavlov_Library_GetGameLogic_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APavlov_GameLogic*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.GetDayOfWeek
struct UPavlov_Library_GetDayOfWeek_Params
{
	struct FDateTime                                   DateTime;                                                 // (Parm, ZeroConstructor)
	EDay                                               DayOfTheWeek;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.GetCustomItemByClass
struct UPavlov_Library_GetCustomItemByClass_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CustomItemClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APavlov_CustomItem*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.GetBanListInternal
struct UPavlov_Library_GetBanListInternal_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BanList;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.AddPlayerProxy
struct UPavlov_Library_AddPlayerProxy_Params
{
	class UClass*                                      PlayerProxyClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlov_PlayerProxy*                         PlayerProxy;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.AddPlayerInfo
struct UPavlov_Library_AddPlayerInfo_Params
{
	class UClass*                                      PlayerInfoClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_PlayerInfo*                          PlayerInfo;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_Library.AddMsgHandler
struct UPavlov_Library_AddMsgHandler_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlov_MsgHandler*                          MsgHandler;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_MsgHandler.SetMaxMessages
struct UPavlov_MsgHandler_SetMaxMessages_Params
{
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_MsgHandler.SendMessageToTeam
struct UPavlov_MsgHandler_SendMessageToTeam_Params
{
	struct FMessage                                    Msg;                                                      // (Parm, OutParm, ReferenceParm)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_MsgHandler.SendMessage
struct UPavlov_MsgHandler_SendMessage_Params
{
	struct FMessage                                    Msg;                                                      // (Parm, OutParm, ReferenceParm)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_MsgHandler.LocalSendMessage
struct UPavlov_MsgHandler_LocalSendMessage_Params
{
	struct FMessage                                    Msg;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function PavlovProxy.Pavlov_MsgHandler.GetPlayerState
struct UPavlov_MsgHandler_GetPlayerState_Params
{
	class APlayerState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_MsgHandler.GetMessages
struct UPavlov_MsgHandler_GetMessages_Params
{
	TArray<struct FMessage>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PavlovProxy.Pavlov_MsgHandler.GetMaxMessages
struct UPavlov_MsgHandler_GetMaxMessages_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_MsgHandler.Client_ReceivedMsg
struct UPavlov_MsgHandler_Client_ReceivedMsg_Params
{
	struct FMessage                                    Msg;                                                      // (Parm)
};

// Function PavlovProxy.Pavlov_PlayerInfo.SetRadioChannel
struct UPavlov_PlayerInfo_SetRadioChannel_Params
{
	int                                                NewRadioChannel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetTeamId__DelegateSignature
struct UPavlov_PlayerInfo_OnGetTeamId__DelegateSignature_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnDisableFallSound__DelegateSignature
struct UPavlov_PlayerInfo_OnDisableFallSound__DelegateSignature_Params
{
};

// Function PavlovProxy.Pavlov_PlayerInfo.GetTeam
struct UPavlov_PlayerInfo_GetTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerInfo.GetPlayerState
struct UPavlov_PlayerInfo_GetPlayerState_Params
{
	class APlayerState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerInfo.DisableFallSound
struct UPavlov_PlayerInfo_DisableFallSound_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.StartSkinRetryTimer
struct APavlov_PlayerProxy_StartSkinRetryTimer_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetVoiceAttenuation
struct APavlov_PlayerProxy_SetVoiceAttenuation_Params
{
	class USoundAttenuation*                           Attenuation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetSkinName
struct APavlov_PlayerProxy_SetSkinName_Params
{
	struct FName                                       NewSkin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerSkin
struct APavlov_PlayerProxy_SetPlayerSkin_Params
{
	struct FName                                       Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerCullDistance
struct APavlov_PlayerProxy_SetPlayerCullDistance_Params
{
	float                                              CullDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.RevivePlayer
struct APavlov_PlayerProxy_RevivePlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.RemoveAmmo
struct APavlov_PlayerProxy_RemoveAmmo_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.PlayerDied
struct APavlov_PlayerProxy_PlayerDied_Params
{
	class AActor*                                      KilledActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.PlayerDestroyed
struct APavlov_PlayerProxy_PlayerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.OwnerDied
struct APavlov_PlayerProxy_OwnerDied_Params
{
	class AActor*                                      KilledActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChangeFailed
struct APavlov_PlayerProxy_OnSkinChangeFailed_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChanged
struct APavlov_PlayerProxy_OnSkinChanged_Params
{
	struct FName                                       Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPlayerSkin__DelegateSignature
struct APavlov_PlayerProxy_OnSetPlayerSkin__DelegateSignature_Params
{
	struct FName                                       PlayerSkin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetAttenuation__DelegateSignature
struct APavlov_PlayerProxy_OnSetAttenuation__DelegateSignature_Params
{
	class USoundAttenuation*                           Attenuation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRevivePlayer__DelegateSignature
struct APavlov_PlayerProxy_OnRevivePlayer__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.OnRep_PlayerSkinChanged
struct APavlov_PlayerProxy_OnRep_PlayerSkinChanged_Params
{
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRemoveAmmo__DelegateSignature
struct APavlov_PlayerProxy_OnRemoveAmmo__DelegateSignature_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.OnPlayerDeath
struct APavlov_PlayerProxy_OnPlayerDeath_Params
{
	class AActor*                                      KilledActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsPickupDisabled__DelegateSignature
struct APavlov_PlayerProxy_OnIsPickupDisabled__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasItem__DelegateSignature
struct APavlov_PlayerProxy_OnHasItem__DelegateSignature_Params
{
	struct FName                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasAmmo__DelegateSignature
struct APavlov_PlayerProxy_OnHasAmmo__DelegateSignature_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetSkinSkeleton__DelegateSignature
struct APavlov_PlayerProxy_OnGetSkinSkeleton__DelegateSignature_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetInventorySlotVis__DelegateSignature
struct APavlov_PlayerProxy_OnGetInventorySlotVis__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetCompatibleSlot__DelegateSignature
struct APavlov_PlayerProxy_OnGetCompatibleSlot__DelegateSignature_Params
{
	struct FName                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAttachments__DelegateSignature
struct APavlov_PlayerProxy_OnGetAttachments__DelegateSignature_Params
{
	class AActor*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAmmoId__DelegateSignature
struct APavlov_PlayerProxy_OnGetAmmoId__DelegateSignature_Params
{
	class AActor*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItems__DelegateSignature
struct APavlov_PlayerProxy_OnDropItems__DelegateSignature_Params
{
	bool                                               bDominant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItem__DelegateSignature
struct APavlov_PlayerProxy_OnDropItem__DelegateSignature_Params
{
	struct FName                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromHandsOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropHeldItems__DelegateSignature
struct APavlov_PlayerProxy_OnDropHeldItems__DelegateSignature_Params
{
	bool                                               bDominant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBoth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDisablePickup__DelegateSignature
struct APavlov_PlayerProxy_OnDisablePickup__DelegateSignature_Params
{
	bool                                               bDisablePickup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnCanRevive__DelegateSignature
struct APavlov_PlayerProxy_OnCanRevive__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnAddAmmo__DelegateSignature
struct APavlov_PlayerProxy_OnAddAmmo__DelegateSignature_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.IsPickupDisabled
struct APavlov_PlayerProxy_IsPickupDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.InitializeClient
struct APavlov_PlayerProxy_InitializeClient_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.HasItem
struct APavlov_PlayerProxy_HasItem_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.HasAmmo
struct APavlov_PlayerProxy_HasAmmo_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoAmount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAttachments
struct APavlov_PlayerProxy_GetWeaponAttachments_Params
{
	class AActor*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Attachments;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAmmoId
struct APavlov_PlayerProxy_GetWeaponAmmoId_Params
{
	class AActor*                                      Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AmmoId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetVoiceAttenuation
struct APavlov_PlayerProxy_GetVoiceAttenuation_Params
{
	class USoundAttenuation*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetSkinSkeleton
struct APavlov_PlayerProxy_GetSkinSkeleton_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerVitality
struct APavlov_PlayerProxy_GetPlayerVitality_Params
{
	struct FPlayerVitality                             PlayerVitality;                                           // (Parm, OutParm)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkin
struct APavlov_PlayerProxy_GetPlayerSkin_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkeleton
struct APavlov_PlayerProxy_GetPlayerSkeleton_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetPawn
struct APavlov_PlayerProxy_GetPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetHeldItem
struct APavlov_PlayerProxy_GetHeldItem_Params
{
	bool                                               bDominantHand;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPlayerItem                                 Item;                                                     // (Parm, OutParm)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetCompatibleSlot
struct APavlov_PlayerProxy_GetCompatibleSlot_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetAllItems
struct APavlov_PlayerProxy_GetAllItems_Params
{
	TArray<struct FPlayerItem>                         Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetAllInventoryItems
struct APavlov_PlayerProxy_GetAllInventoryItems_Params
{
	TArray<struct FInventoryItem>                      InvItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function PavlovProxy.Pavlov_PlayerProxy.EnableClientInput
struct APavlov_PlayerProxy_EnableClientInput_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.DropItem
struct APavlov_PlayerProxy_DropItem_Params
{
	struct FName                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromHandsOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.DropHeld
struct APavlov_PlayerProxy_DropHeld_Params
{
	EHands                                             hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyItems;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.DropAll
struct APavlov_PlayerProxy_DropAll_Params
{
	bool                                               bDestroyItems;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInventoryOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.DisablePickup
struct APavlov_PlayerProxy_DisablePickup_Params
{
	bool                                               bDisablePickup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.DisableClientInput
struct APavlov_PlayerProxy_DisableClientInput_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.CanRevive
struct APavlov_PlayerProxy_CanRevive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PavlovProxy.Pavlov_PlayerProxy.AddAmmo
struct APavlov_PlayerProxy_AddAmmo_Params
{
	struct FName                                       AmmoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.PavlovProxyStatics.GetTeamScore
struct UPavlovProxyStatics_GetTeamScore_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn
struct UPavlovProxyStatics_GetPavlovPlayerStatusByPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (Parm, OutParm)
	bool                                               bSucceeded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus
struct UPavlovProxyStatics_GetPavlovPlayerStatus_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPavlovPlayerStatus                         PlayerStatus;                                             // (Parm, OutParm)
	bool                                               bSucceeded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
