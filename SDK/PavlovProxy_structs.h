#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum PavlovProxy.EProxyItemState
enum class EProxyItemState : uint8_t
{
	EProxyItemState__InWorld       = 0,
	EProxyItemState__InHand        = 1,
	EProxyItemState__InInventory   = 2,
	EProxyItemState__EProxyItemState_MAX = 3
};


// Enum PavlovProxy.EHoldingAnim
enum class EHoldingAnim : uint8_t
{
	EHoldingAnim__GenericGrip1     = 0,
	EHoldingAnim__GenericGrip2     = 1,
	EHoldingAnim__PillGrip         = 2,
	EHoldingAnim__RifleGrip        = 3,
	EHoldingAnim__PistolGrip       = 4,
	EHoldingAnim__GrenadeGrip      = 5,
	EHoldingAnim__AmmoBoxGrip      = 6,
	EHoldingAnim__MagazineGrip     = 7,
	EHoldingAnim__VerticalGrip     = 8,
	EHoldingAnim__SuppressorGrip   = 9,
	EHoldingAnim__EHoldingAnim_MAX = 10
};


// Enum PavlovProxy.EInteractType
enum class EInteractType : uint8_t
{
	EInteractType__Grabbed         = 0,
	EInteractType__Trigger         = 1,
	EInteractType__EInteractType_MAX = 2
};


// Enum PavlovProxy.EHands
enum class EHands : uint8_t
{
	EHands__NonDominant            = 0,
	EHands__Dominant               = 1,
	EHands__Both                   = 2,
	EHands__EHands_MAX             = 3
};


// Enum PavlovProxy.EPavlovReverbType
enum class EPavlovReverbType : uint8_t
{
	EPavlovReverbType__None        = 0,
	EPavlovReverbType__ParkingGarage = 1,
	EPavlovReverbType__Warehouse   = 2,
	EPavlovReverbType__Tunnel      = 3,
	EPavlovReverbType__EPavlovReverbType_MAX = 4
};


// Enum PavlovProxy.EPavlovRoundState
enum class EPavlovRoundState : uint8_t
{
	EPavlovRoundState__Starting    = 0,
	EPavlovRoundState__StandBy     = 1,
	EPavlovRoundState__Started     = 2,
	EPavlovRoundState__Ended       = 3,
	EPavlovRoundState__EPavlovRoundState_MAX = 4
};


// Enum PavlovProxy.ELimitedAmmoType
enum class ELimitedAmmoType : uint8_t
{
	ELimitedAmmoType__Unlimited    = 0,
	ELimitedAmmoType__LimitedGeneric = 1,
	ELimitedAmmoType__LimitedSpecific = 2,
	ELimitedAmmoType__ELimitedAmmoType_MAX = 3
};


// Enum PavlovProxy.EPavlovGameModeType
enum class EPavlovGameModeType : uint8_t
{
	EPavlovGameModeType__Custom    = 0,
	EPavlovGameModeType__Deathmatch = 1,
	EPavlovGameModeType__TeamDeathmatch = 2,
	EPavlovGameModeType__SearchAndDestroy = 3,
	EPavlovGameModeType__LastManStanding = 4,
	EPavlovGameModeType__Siege     = 5,
	EPavlovGameModeType__GunGame   = 6,
	EPavlovGameModeType__CaptureTheFlag = 7,
	EPavlovGameModeType__TTT       = 8,
	EPavlovGameModeType__Jailbreak = 9,
	EPavlovGameModeType__ZombieCoop = 10,
	EPavlovGameModeType__EPavlovGameModeType_MAX = 11
};


// Enum PavlovProxy.EGloves
enum class EGloves : uint8_t
{
	EGloves__BareHands             = 0,
	EGloves__NATOGloves            = 1,
	EGloves__RussianGloves         = 2,
	EGloves__EGloves_MAX           = 3
};


// Enum PavlovProxy.EDay
enum class EDay : uint8_t
{
	EDay__Monday                   = 0,
	EDay__Tuesday                  = 1,
	EDay__Wednesday                = 2,
	EDay__Thursday                 = 3,
	EDay__Friday                   = 4,
	EDay__Saturday                 = 5,
	EDay__Sunday                   = 6,
	EDay__EDay_MAX                 = 7
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PavlovProxy.PavlovItemSpawnParams
// 0x0060
struct FPavlovItemSpawnParams
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                Player;                                                   // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDominantHand;                                            // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnInInventory;                                        // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                InventorySlot;                                            // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnInWorld;                                            // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData)
	bool                                               bSpawnWithMagazine;                                       // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct PavlovProxy.PavlovAttachmentSpawnParams
// 0x0030
struct FPavlovAttachmentSpawnParams
{
	TArray<struct FName>                               AttachmentsId;                                            // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class AActor*                                      WeaponToAttachTo;                                         // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachById;                                              // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       AttachToGunId;                                            // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                Player;                                                   // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PavlovProxy.PavlovGameModeProperties
// 0x002C
struct FPavlovGameModeProperties
{
	bool                                               bNoTeams;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysScore;                                             // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNoScoring;                                          // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                MaximumCash;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CashKillReward;                                           // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CashTeamKillPenalty;                                      // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncrementTeamScore;                                      // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRespawn;                                             // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              RespawnMaxDelay;                                          // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepBodies;                                              // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepPawnIfAlive;                                         // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                InactivityThreashold;                                     // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InactivityDormantThreashold;                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicSpawns;                                           // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnGhostOnLogin;                                       // 0x0025(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	int                                                RoundDuration;                                            // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PavlovProxy.PavlovPlayerStatus
// 0x0050
struct FPavlovPlayerStatus
{
	class APlayerState*                                PlayerState;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     SteamId;                                                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Cash;                                                     // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Health;                                                   // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Armour;                                                   // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHelmet;                                                  // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x003D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBuy;                                                  // 0x003E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouching;                                               // 0x003F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGagged;                                                  // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRightHanded;                                             // 0x0041(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              DeadTime;                                                 // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AliveTime;                                                // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct PavlovProxy.ItemList
// 0x0018
struct FItemList
{
	struct FName                                       ItemName;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomItem;                                              // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct PavlovProxy.Message
// 0x0028
struct FMessage
{
	struct FString                                     Sender;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Message;                                                  // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct PavlovProxy.HandsProxy
// 0x0010
struct FHandsProxy
{
	class UPavlov_HandProxy*                           NonDominantHand;                                          // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPavlov_HandProxy*                           DominantHand;                                             // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct PavlovProxy.PlayerVitality
// 0x000C
struct FPlayerVitality
{
	int                                                Health;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Armour;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHelmet;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct PavlovProxy.PlayerItem
// 0x0010
struct FPlayerItem
{
	class AActor*                                      Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PavlovProxy.InventoryItem
// 0x0018
struct FInventoryItem
{
	class AActor*                                      Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct PavlovProxy.CustomItemData
// 0x0008 (0x0010 - 0x0008)
struct FCustomItemData : public FTableRowBase
{
	class UClass*                                      CustomItemClass;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PavlovProxy.PlayerSkin
// 0x0010 (0x0018 - 0x0008)
struct FPlayerSkin : public FTableRowBase
{
	class USkeletalMesh*                               PlayerMesh;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGloves                                            HandMesh;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
