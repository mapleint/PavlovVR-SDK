
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

// Function PavlovProxy.Pavlov_CustomItem.SetPickDisabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_CustomItem::SetPickDisabled(bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.SetPickDisabled");

	APavlov_CustomItem_SetPickDisabled_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_CustomItem.OwnerDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_CustomItem::OwnerDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OwnerDestroyed");

	APavlov_CustomItem_OwnerDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_CustomItem.OnUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bJustPicked                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_CustomItem::OnUsed(bool bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OnUsed");

	APavlov_CustomItem_OnUsed_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_CustomItem.OnUse
// (Event, Public, BlueprintEvent)

void APavlov_CustomItem::OnUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OnUse");

	APavlov_CustomItem_OnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_CustomItem.OnPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDominant                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_CustomItem::OnPickup(class APawn* Pawn, bool bDominant)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OnPickup");

	APavlov_CustomItem_OnPickup_Params params;
	params.Pawn = Pawn;
	params.bDominant = bDominant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnPickDisabled__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_CustomItem::OnPickDisabled__DelegateSignature(bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_CustomItem.OnPickDisabled__DelegateSignature");

	APavlov_CustomItem_OnPickDisabled__DelegateSignature_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetState__DelegateSignature
// (Public, Delegate)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char APavlov_CustomItem::OnGetState__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetState__DelegateSignature");

	APavlov_CustomItem_OnGetState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetPawn__DelegateSignature
// (Public, Delegate)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* APavlov_CustomItem::OnGetPawn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetPawn__DelegateSignature");

	APavlov_CustomItem_OnGetPawn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnDropItem__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_CustomItem::OnDropItem__DelegateSignature(bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_CustomItem.OnDropItem__DelegateSignature");

	APavlov_CustomItem_OnDropItem__DelegateSignature_Params params;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_CustomItem.OnDrop
// (Event, Public, BlueprintEvent)

void APavlov_CustomItem::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OnDrop");

	APavlov_CustomItem_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_CustomItem.GetOwningPawn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_CustomItem::GetOwningPawn(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.GetOwningPawn");

	APavlov_CustomItem_GetOwningPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_CustomItem.GetItemState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EProxyItemState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EProxyItemState APavlov_CustomItem::GetItemState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.GetItemState");

	APavlov_CustomItem_GetItemState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_CustomItem.Drop
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_CustomItem::Drop(bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.Drop");

	APavlov_CustomItem_Drop_Params params;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_CustomItem.CanPickupItem
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_CustomItem::CanPickupItem(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.CanPickupItem");

	APavlov_CustomItem_CanPickupItem_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrate
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LootCrateID                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SpawnLootCrate(const struct FName& LootCrateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrate");

	APavlov_GameLogic_SpawnLootCrate_Params params;
	params.LootCrateID = LootCrateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SpawnItemWRef
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPavlovItemSpawnParams  Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SpawnItemWRef(const struct FPavlovItemSpawnParams& Params, bool* bSuccessful, class AActor** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnItemWRef");

	APavlov_GameLogic_SpawnItemWRef_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
	if (Item != nullptr)
		*Item = params.Item;
}


// Function PavlovProxy.Pavlov_GameLogic.SpawnItem
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPavlovItemSpawnParams  Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::SpawnItem(const struct FPavlovItemSpawnParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnItem");

	APavlov_GameLogic_SpawnItem_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SpawnAttachments
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPavlovAttachmentSpawnParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_GameLogic::SpawnAttachments(const struct FPavlovAttachmentSpawnParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnAttachments");

	APavlov_GameLogic_SpawnAttachments_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APavlov_GameLogic::SpawnAndPosessPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns");

	APavlov_GameLogic_SpawnAndPosessPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.Spawn
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// bool                           bAsGhost                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::Spawn(class AController* Controller, const struct FTransform& Transform, bool bAsGhost, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.Spawn");

	APavlov_GameLogic_Spawn_Params params;
	params.Controller = Controller;
	params.Transform = Transform;
	params.bAsGhost = bAsGhost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function PavlovProxy.Pavlov_GameLogic.SetZombiesToAutoSpawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            TotalZombies                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetZombiesToAutoSpawn(int TotalZombies)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetZombiesToAutoSpawn");

	APavlov_GameLogic_SetZombiesToAutoSpawn_Params params;
	params.TotalZombies = TotalZombies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetZombieAutoSpawnProperties
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          BatchTimeMin                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BatchTimeMax                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ZBatchSize                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxZCount                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetZombieAutoSpawnProperties(float BatchTimeMin, float BatchTimeMax, int ZBatchSize, int MaxZCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetZombieAutoSpawnProperties");

	APavlov_GameLogic_SetZombieAutoSpawnProperties_Params params;
	params.BatchTimeMin = BatchTimeMin;
	params.BatchTimeMax = BatchTimeMax;
	params.ZBatchSize = ZBatchSize;
	params.MaxZCount = MaxZCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetZBodyCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            BodyCount                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetZBodyCount(int BodyCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetZBodyCount");

	APavlov_GameLogic_SetZBodyCount_Params params;
	params.BodyCount = BodyCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetTeamCash
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetTeamCash(int TeamId, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetTeamCash");

	APavlov_GameLogic_SetTeamCash_Params params;
	params.TeamId = TeamId;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetRoundState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPavlovRoundState              State                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetRoundState(EPavlovRoundState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetRoundState");

	APavlov_GameLogic_SetRoundState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Health                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Armour                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Helmet                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerVitality(class APlayerState* PlayerState, int Health, int Armour, int Helmet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality");

	APavlov_GameLogic_SetPlayerVitality_Params params;
	params.PlayerState = PlayerState;
	params.Health = Health;
	params.Armour = Armour;
	params.Helmet = Helmet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerTeam(class APlayerState* PlayerState, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam");

	APavlov_GameLogic_SetPlayerTeam_Params params;
	params.PlayerState = PlayerState;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerGag(class APlayerState* PlayerState, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag");

	APavlov_GameLogic_SetPlayerGag_Params params;
	params.PlayerState = PlayerState;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerCash(class APlayerState* PlayerState, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash");

	APavlov_GameLogic_SetPlayerCash_Params params;
	params.PlayerState = PlayerState;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BuyZoneMaxDistance             (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetPlayerBuyingEnabled(class APlayerState* PlayerState, float Duration, float BuyZoneMaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled");

	APavlov_GameLogic_SetPlayerBuyingEnabled_Params params;
	params.PlayerState = PlayerState;
	params.Duration = Duration;
	params.BuyZoneMaxDistance = BuyZoneMaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetMovementDisabled(bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled");

	APavlov_GameLogic_SetMovementDisabled_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPavlovGameModeProperties Properties                     (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::SetGameModeProperties(const struct FPavlovGameModeProperties& Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties");

	APavlov_GameLogic_SetGameModeProperties_Params params;
	params.Properties = Properties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetFallDamage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetFallDamage(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetFallDamage");

	APavlov_GameLogic_SetFallDamage_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetEveryoneCash(int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash");

	APavlov_GameLogic_SetEveryoneCash_Params params;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.SetCashPerZombieKill
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::SetCashPerZombieKill(int Cash)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetCashPerZombieKill");

	APavlov_GameLogic_SetCashPerZombieKill_Params params;
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APavlov_GameLogic::PostRoundCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp");

	APavlov_GameLogic_PostRoundCleanUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnZombieKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Zombie                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoSpawned                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::OnZombieKilled(class APlayerState* Killer, class ACharacter* Zombie, bool bAutoSpawned)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnZombieKilled");

	APavlov_GameLogic_OnZombieKilled_Params params;
	params.Killer = Killer;
	params.Zombie = Zombie;
	params.bAutoSpawned = bAutoSpawned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPavlovRoundState              OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EPavlovRoundState              NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::OnRoundStateChanged(EPavlovRoundState OldState, EPavlovRoundState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged");

	APavlov_GameLogic_OnRoundStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd
// (Event, Public, BlueprintEvent)

void APavlov_GameLogic::OnRoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd");

	APavlov_GameLogic_OnRoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin
// (Event, Public, BlueprintEvent)

void APavlov_GameLogic::OnRoundBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin");

	APavlov_GameLogic_OnRoundBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     PlayerStatus                   (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::OnPlayerSpawned(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned");

	APavlov_GameLogic_OnPlayerSpawned_Params params;
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     PlayerStatus                   (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::OnPlayerLeftServer(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer");

	APavlov_GameLogic_OnPlayerLeftServer_Params params;
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     PlayerStatus                   (ConstParm, Parm, OutParm, ReferenceParm)
// class APlayerState*            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHeadshot                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KilledByItem                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::OnPlayerKilled(const struct FPavlovPlayerStatus& PlayerStatus, class APlayerState* Killer, bool bHeadshot, const struct FName& KilledByItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled");

	APavlov_GameLogic_OnPlayerKilled_Params params;
	params.PlayerStatus = PlayerStatus;
	params.Killer = Killer;
	params.bHeadshot = bHeadshot;
	params.KilledByItem = KilledByItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     PlayerStatus                   (ConstParm, Parm, OutParm, ReferenceParm)

void APavlov_GameLogic::OnPlayerJoinedServer(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer");

	APavlov_GameLogic_OnPlayerJoinedServer_Params params;
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnCustomRconCommand
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 RconCommand                    (Parm, ZeroConstructor)

void APavlov_GameLogic::OnCustomRconCommand(const struct FString& RconCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnCustomRconCommand");

	APavlov_GameLogic_OnCustomRconCommand_Params params;
	params.RconCommand = RconCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit
// (Event, Public, BlueprintEvent)

void APavlov_GameLogic::OnCustomGameModeInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit");

	APavlov_GameLogic_OnCustomGameModeInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPavlovPlayerStatus     Status                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            TeamId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::OnAssignTeam(const struct FPavlovPlayerStatus& Status, int* TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam");

	APavlov_GameLogic_OnAssignTeam_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamId != nullptr)
		*TeamId = params.TeamId;
}


// Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bStarting                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::MulticastOnRoundStateChanged(bool bStarting)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged");

	APavlov_GameLogic_MulticastOnRoundStateChanged_Params params;
	params.bStarting = bStarting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.ManuallySpawnZombies
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>      RandomLocations                (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class ACharacter*>      Zombies                        (Parm, OutParm, ZeroConstructor)

void APavlov_GameLogic::ManuallySpawnZombies(TArray<struct FTransform> RandomLocations, int Amount, bool* bSuccessful, TArray<class ACharacter*>* Zombies)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.ManuallySpawnZombies");

	APavlov_GameLogic_ManuallySpawnZombies_Params params;
	params.RandomLocations = RandomLocations;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
	if (Zombies != nullptr)
		*Zombies = params.Zombies;
}


// Function PavlovProxy.Pavlov_GameLogic.KillAllZombies
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APavlov_GameLogic::KillAllZombies()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.KillAllZombies");

	APavlov_GameLogic_KillAllZombies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.KickPlayer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// bool                           bBan                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::KickPlayer(class APlayerState* PlayerState, const struct FString& Reason, bool bBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.KickPlayer");

	APavlov_GameLogic_KickPlayer_Params params;
	params.PlayerState = PlayerState;
	params.Reason = Reason;
	params.bBan = bBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::IncrementTeamScore(int TeamId, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore");

	APavlov_GameLogic_IncrementTeamScore_Params params;
	params.TeamId = TeamId;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::IncrementPlayerScore(class APlayerState* PlayerState, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore");

	APavlov_GameLogic_IncrementPlayerScore_Params params;
	params.PlayerState = PlayerState;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::GiveTeamCash(int TeamId, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash");

	APavlov_GameLogic_GiveTeamCash_Params params;
	params.TeamId = TeamId;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::GivePlayerCash(class APlayerState* PlayerState, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash");

	APavlov_GameLogic_GivePlayerCash_Params params;
	params.PlayerState = PlayerState;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::GiveEveryoneCash(int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash");

	APavlov_GameLogic_GiveEveryoneCash_Params params;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.GetZsToAutoSpawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlov_GameLogic::GetZsToAutoSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetZsToAutoSpawn");

	APavlov_GameLogic_GetZsToAutoSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GameLogic.GetZAliveCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlov_GameLogic::GetZAliveCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetZAliveCount");

	APavlov_GameLogic_GetZAliveCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void APavlov_GameLogic::GetSpawnTransform(class AController* Controller, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform");

	APavlov_GameLogic_GetSpawnTransform_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function PavlovProxy.Pavlov_GameLogic.GetRoundState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPavlovRoundState              State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::GetRoundState(EPavlovRoundState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetRoundState");

	APavlov_GameLogic_GetRoundState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDominant                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APavlov_GameLogic::STATIC_GetPlayerHand(class APlayerState* PlayerState, bool bDominant)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand");

	APavlov_GameLogic_GetPlayerHand_Params params;
	params.PlayerState = PlayerState;
	params.bDominant = bDominant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EPavlovGameModeType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPavlovGameModeType APavlov_GameLogic::STATIC_GetPavlovGameModeType(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType");

	APavlov_GameLogic_GetPavlovGameModeType_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPavlovGameModeProperties Properties                     (Parm, OutParm)

void APavlov_GameLogic::GetGameModeProperties(struct FPavlovGameModeProperties* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties");

	APavlov_GameLogic_GetGameModeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Properties != nullptr)
		*Properties = params.Properties;
}


// Function PavlovProxy.Pavlov_GameLogic.CleanupZombieBodies
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void APavlov_GameLogic::CleanupZombieBodies()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.CleanupZombieBodies");

	APavlov_GameLogic_CleanupZombieBodies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GameLogic.AddZombiesToAutoSpawn
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalAmountToSpawn             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_GameLogic::AddZombiesToAutoSpawn(int Amount, int* TotalAmountToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.AddZombiesToAutoSpawn");

	APavlov_GameLogic_AddZombiesToAutoSpawn_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalAmountToSpawn != nullptr)
		*TotalAmountToSpawn = params.TotalAmountToSpawn;
}


// Function PavlovProxy.Pavlov_GlobalInfo.SetLimitedAmmoType
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// ELimitedAmmoType               AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_GlobalInfo::SetLimitedAmmoType(ELimitedAmmoType AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.SetLimitedAmmoType");

	UPavlov_GlobalInfo_SetLimitedAmmoType_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GlobalInfo.GetLimitedAmmoType
// (Final, Native, Public, Const)
// Parameters:
// ELimitedAmmoType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ELimitedAmmoType UPavlov_GlobalInfo::GetLimitedAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.GetLimitedAmmoType");

	UPavlov_GlobalInfo_GetLimitedAmmoType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_GlobalInfo.DisableVoting
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_GlobalInfo::DisableVoting(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.DisableVoting");

	UPavlov_GlobalInfo_DisableVoting_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GlobalInfo.DisableKillfeedBeep
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_GlobalInfo::DisableKillfeedBeep(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.DisableKillfeedBeep");

	UPavlov_GlobalInfo_DisableKillfeedBeep_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GlobalInfo.DisableAttachmentMode
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_GlobalInfo::DisableAttachmentMode(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.DisableAttachmentMode");

	UPavlov_GlobalInfo_DisableAttachmentMode_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_GlobalInfo.AddItemToList
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemList               Item                           (ConstParm, Parm, OutParm, ReferenceParm)

void UPavlov_GlobalInfo::AddItemToList(const struct FItemList& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.AddItemToList");

	UPavlov_GlobalInfo_AddItemToList_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_HandProxy.TriggerDown
// (Final, Native, Public)

void UPavlov_HandProxy::TriggerDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.TriggerDown");

	UPavlov_HandProxy_TriggerDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_HandProxy.ReplicateInteract_Server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_HandProxy::ReplicateInteract_Server(EInteractType InteractType, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.ReplicateInteract_Server");

	UPavlov_HandProxy_ReplicateInteract_Server_Params params;
	params.InteractType = InteractType;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_HandProxy.Grab
// (Final, Native, Public)

void UPavlov_HandProxy::Grab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.Grab");

	UPavlov_HandProxy_Grab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_HandProxy.GetPlayerProxy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APavlov_PlayerProxy*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlov_PlayerProxy* UPavlov_HandProxy::GetPlayerProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.GetPlayerProxy");

	UPavlov_HandProxy_GetPlayerProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_HandProxy.GetOverlappingInteractInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPavlov_HandProxy::GetOverlappingInteractInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.GetOverlappingInteractInterface");

	UPavlov_HandProxy_GetOverlappingInteractInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_InteractBox.InteractServer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_HandProxy*       HandProxy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_InteractBox::InteractServer(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractBox.InteractServer");

	UPavlov_InteractBox_InteractServer_Params params;
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_InteractBox.InteractClient
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_HandProxy*       HandProxy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_InteractBox::InteractClient(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractBox.InteractClient");

	UPavlov_InteractBox_InteractClient_Params params;
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_InteractInterface.InteractServer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_HandProxy*       HandProxy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_InteractInterface::InteractServer(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractInterface.InteractServer");

	UPavlov_InteractInterface_InteractServer_Params params;
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_InteractInterface.InteractClient
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_HandProxy*       HandProxy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_InteractInterface::InteractClient(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractInterface.InteractClient");

	UPavlov_InteractInterface_InteractClient_Params params;
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractServer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_HandProxy*       HandProxy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_InteractSkeletalMesh::InteractServer(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractServer");

	UPavlov_InteractSkeletalMesh_InteractServer_Params params;
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractClient
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_HandProxy*       HandProxy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_InteractSkeletalMesh::InteractClient(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractClient");

	UPavlov_InteractSkeletalMesh_InteractClient_Params params;
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_InteractStaticMesh.InteractServer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_HandProxy*       HandProxy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_InteractStaticMesh::InteractServer(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractStaticMesh.InteractServer");

	UPavlov_InteractStaticMesh_InteractServer_Params params;
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_InteractStaticMesh.InteractClient
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInteractType                  InteractType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_HandProxy*       HandProxy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 InteractObj                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_InteractStaticMesh::InteractClient(EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractStaticMesh.InteractClient");

	UPavlov_InteractStaticMesh_InteractClient_Params params;
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_Library.SendMsg
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMessage                Msg                            (Parm, OutParm, ReferenceParm)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_Library::STATIC_SendMsg(class APlayerState* PlayerState, struct FMessage* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.SendMsg");

	UPavlov_Library_SendMsg_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;
}


// Function PavlovProxy.Pavlov_Library.SendAllMsg
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMessage                Msg                            (Parm, OutParm, ReferenceParm)
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_Library::STATIC_SendAllMsg(class UObject* WorldContextObject, struct FMessage* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.SendAllMsg");

	UPavlov_Library_SendAllMsg_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;
}


// Function PavlovProxy.Pavlov_Library.SaveStringToFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           bAllowOverwrite                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_SaveStringToFile(class UObject* WorldContextObject, const struct FString& Filename, bool bAllowOverwrite, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.SaveStringToFile");

	UPavlov_Library_SaveStringToFile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;
	params.bAllowOverwrite = bAllowOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.SaveStringArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         SaveArray                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           AllowOverwrite                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_SaveStringArray(class UObject* WorldContextObject, const struct FString& Filename, bool AllowOverwrite, TArray<struct FString>* SaveArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.SaveStringArray");

	UPavlov_Library_SaveStringArray_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;
	params.AllowOverwrite = AllowOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveArray != nullptr)
		*SaveArray = params.SaveArray;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.LogToConsole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 LogMsg                         (Parm, ZeroConstructor)
// bool                           bError                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_Library::STATIC_LogToConsole(const struct FString& LogMsg, bool bError)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.LogToConsole");

	UPavlov_Library_LogToConsole_Params params;
	params.LogMsg = LogMsg;
	params.bError = bError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_Library.LoadStringFromFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_LoadStringFromFile(class UObject* WorldContextObject, const struct FString& Filename, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.LoadStringFromFile");

	UPavlov_Library_LoadStringFromFile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.LoadStringArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Strings                        (Parm, OutParm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_LoadStringArray(class UObject* WorldContextObject, const struct FString& Filename, TArray<struct FString>* Strings)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.LoadStringArray");

	UPavlov_Library_LoadStringArray_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Strings != nullptr)
		*Strings = params.Strings;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.IsCommunityServer
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_IsCommunityServer(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.IsCommunityServer");

	UPavlov_Library_IsCommunityServer_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.HasPlayerProxy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_HasPlayerProxy(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.HasPlayerProxy");

	UPavlov_Library_HasPlayerProxy_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.HasPlayerInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_HasPlayerInfo(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.HasPlayerInfo");

	UPavlov_Library_HasPlayerInfo_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.HasMsgHandler
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_HasMsgHandler(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.HasMsgHandler");

	UPavlov_Library_HasMsgHandler_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.GetWhitelist
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Whitelist                      (Parm, OutParm, ZeroConstructor)

void UPavlov_Library::STATIC_GetWhitelist(class UObject* WorldContextObject, bool* bSuccessful, TArray<struct FString>* Whitelist)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetWhitelist");

	UPavlov_Library_GetWhitelist_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
	if (Whitelist != nullptr)
		*Whitelist = params.Whitelist;
}


// Function PavlovProxy.Pavlov_Library.GetPlayerProxy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class APavlov_PlayerProxy*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlov_PlayerProxy* UPavlov_Library::STATIC_GetPlayerProxy(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetPlayerProxy");

	UPavlov_Library_GetPlayerProxy_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.GetPlayerInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_PlayerInfo*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPavlov_PlayerInfo* UPavlov_Library::STATIC_GetPlayerInfo(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetPlayerInfo");

	UPavlov_Library_GetPlayerInfo_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.GetMsgHandler
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_MsgHandler*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPavlov_MsgHandler* UPavlov_Library::STATIC_GetMsgHandler(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetMsgHandler");

	UPavlov_Library_GetMsgHandler_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.GetModerators
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Mods                           (Parm, OutParm, ZeroConstructor)

void UPavlov_Library::STATIC_GetModerators(class UObject* WorldContextObject, bool* bSuccessful, TArray<struct FString>* Mods)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetModerators");

	UPavlov_Library_GetModerators_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
	if (Mods != nullptr)
		*Mods = params.Mods;
}


// Function PavlovProxy.Pavlov_Library.GetGlobalInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_GlobalInfo*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPavlov_GlobalInfo* UPavlov_Library::STATIC_GetGlobalInfo(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetGlobalInfo");

	UPavlov_Library_GetGlobalInfo_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.GetGameLogic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APavlov_GameLogic*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlov_GameLogic* UPavlov_Library::STATIC_GetGameLogic(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetGameLogic");

	UPavlov_Library_GetGameLogic_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.GetDayOfWeek
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               DateTime                       (Parm, ZeroConstructor)
// EDay                           DayOfTheWeek                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPavlov_Library::STATIC_GetDayOfWeek(const struct FDateTime& DateTime, EDay* DayOfTheWeek)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetDayOfWeek");

	UPavlov_Library_GetDayOfWeek_Params params;
	params.DateTime = DateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DayOfTheWeek != nullptr)
		*DayOfTheWeek = params.DayOfTheWeek;
}


// Function PavlovProxy.Pavlov_Library.GetCustomItemByClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CustomItemClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APavlov_CustomItem*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlov_CustomItem* UPavlov_Library::STATIC_GetCustomItemByClass(class AActor* Item, class UClass* CustomItemClass, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetCustomItemByClass");

	UPavlov_Library_GetCustomItemByClass_Params params;
	params.Item = Item;
	params.CustomItemClass = CustomItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.GetBanListInternal
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         BanList                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_GetBanListInternal(class UObject* WorldContextObject, TArray<struct FString>* BanList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetBanListInternal");

	UPavlov_Library_GetBanListInternal_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BanList != nullptr)
		*BanList = params.BanList;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.AddPlayerProxy
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  PlayerProxyClass               (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class APavlov_PlayerProxy*     PlayerProxy                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_AddPlayerProxy(class UClass* PlayerProxyClass, class APawn* Pawn, class APavlov_PlayerProxy** PlayerProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.AddPlayerProxy");

	UPavlov_Library_AddPlayerProxy_Params params;
	params.PlayerProxyClass = PlayerProxyClass;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerProxy != nullptr)
		*PlayerProxy = params.PlayerProxy;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.AddPlayerInfo
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  PlayerInfoClass                (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_PlayerInfo*      PlayerInfo                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_AddPlayerInfo(class UClass* PlayerInfoClass, class APlayerState* PlayerState, class UPavlov_PlayerInfo** PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.AddPlayerInfo");

	UPavlov_Library_AddPlayerInfo_Params params;
	params.PlayerInfoClass = PlayerInfoClass;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_Library.AddMsgHandler
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlov_MsgHandler*      MsgHandler                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlov_Library::STATIC_AddMsgHandler(class APlayerState* PlayerState, class UPavlov_MsgHandler** MsgHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.AddMsgHandler");

	UPavlov_Library_AddMsgHandler_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MsgHandler != nullptr)
		*MsgHandler = params.MsgHandler;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_MsgHandler.SetMaxMessages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_MsgHandler::SetMaxMessages(int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.SetMaxMessages");

	UPavlov_MsgHandler_SetMaxMessages_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_MsgHandler.SendMessageToTeam
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMessage                Msg                            (Parm, OutParm, ReferenceParm)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_MsgHandler::SendMessageToTeam(int TeamId, struct FMessage* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.SendMessageToTeam");

	UPavlov_MsgHandler_SendMessageToTeam_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;
}


// Function PavlovProxy.Pavlov_MsgHandler.SendMessage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMessage                Msg                            (Parm, OutParm, ReferenceParm)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_MsgHandler::SendMessage(class APlayerState* PlayerState, struct FMessage* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.SendMessage");

	UPavlov_MsgHandler_SendMessage_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;
}


// Function PavlovProxy.Pavlov_MsgHandler.LocalSendMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMessage                Msg                            (Parm, OutParm, ReferenceParm)

void UPavlov_MsgHandler::LocalSendMessage(struct FMessage* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.LocalSendMessage");

	UPavlov_MsgHandler_LocalSendMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;
}


// Function PavlovProxy.Pavlov_MsgHandler.GetPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerState* UPavlov_MsgHandler::GetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.GetPlayerState");

	UPavlov_MsgHandler_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_MsgHandler.GetMessages
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMessage>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMessage> UPavlov_MsgHandler::GetMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.GetMessages");

	UPavlov_MsgHandler_GetMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_MsgHandler.GetMaxMessages
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlov_MsgHandler::GetMaxMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.GetMaxMessages");

	UPavlov_MsgHandler_GetMaxMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_MsgHandler.Client_ReceivedMsg
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FMessage                Msg                            (Parm)

void UPavlov_MsgHandler::Client_ReceivedMsg(const struct FMessage& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.Client_ReceivedMsg");

	UPavlov_MsgHandler_Client_ReceivedMsg_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerInfo.SetRadioChannel
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewRadioChannel                (Parm, ZeroConstructor, IsPlainOldData)

void UPavlov_PlayerInfo::SetRadioChannel(int NewRadioChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.SetRadioChannel");

	UPavlov_PlayerInfo_SetRadioChannel_Params params;
	params.NewRadioChannel = NewRadioChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetTeamId__DelegateSignature
// (Public, Delegate)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlov_PlayerInfo::OnGetTeamId__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetTeamId__DelegateSignature");

	UPavlov_PlayerInfo_OnGetTeamId__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnDisableFallSound__DelegateSignature
// (Public, Delegate)

void UPavlov_PlayerInfo::OnDisableFallSound__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnDisableFallSound__DelegateSignature");

	UPavlov_PlayerInfo_OnDisableFallSound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerInfo.GetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlov_PlayerInfo::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.GetTeam");

	UPavlov_PlayerInfo_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerInfo.GetPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerState* UPavlov_PlayerInfo::GetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.GetPlayerState");

	UPavlov_PlayerInfo_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerInfo.DisableFallSound
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)

void UPavlov_PlayerInfo::DisableFallSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.DisableFallSound");

	UPavlov_PlayerInfo_DisableFallSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.StartSkinRetryTimer
// (Final, Native, Private)

void APavlov_PlayerProxy::StartSkinRetryTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.StartSkinRetryTimer");

	APavlov_PlayerProxy_StartSkinRetryTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.SetVoiceAttenuation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAttenuation*       Attenuation                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::SetVoiceAttenuation(class USoundAttenuation* Attenuation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetVoiceAttenuation");

	APavlov_PlayerProxy_SetVoiceAttenuation_Params params;
	params.Attenuation = Attenuation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.SetSkinName
// (Final, Native, Public)
// Parameters:
// struct FName                   NewSkin                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::SetSkinName(const struct FName& NewSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetSkinName");

	APavlov_PlayerProxy_SetSkinName_Params params;
	params.NewSkin = NewSkin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerSkin
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Skin                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::SetPlayerSkin(const struct FName& Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerSkin");

	APavlov_PlayerProxy_SetPlayerSkin_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerCullDistance
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          CullDistance                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::SetPlayerCullDistance(float CullDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerCullDistance");

	APavlov_PlayerProxy_SetPlayerCullDistance_Params params;
	params.CullDistance = CullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.RevivePlayer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::RevivePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.RevivePlayer");

	APavlov_PlayerProxy_RevivePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.RemoveAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlov_PlayerProxy::RemoveAmmo(const struct FName& AmmoId, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.RemoveAmmo");

	APavlov_PlayerProxy_RemoveAmmo_Params params;
	params.AmmoId = AmmoId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.PlayerDied
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class AActor*                  KilledActor                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::PlayerDied(class AActor* KilledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.PlayerDied");

	APavlov_PlayerProxy_PlayerDied_Params params;
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.PlayerDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::PlayerDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.PlayerDestroyed");

	APavlov_PlayerProxy_PlayerDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.OwnerDied
// (Final, Native, Public)
// Parameters:
// class AActor*                  KilledActor                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OwnerDied(class AActor* KilledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OwnerDied");

	APavlov_PlayerProxy_OwnerDied_Params params;
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChangeFailed
// (Final, Native, Private)

void APavlov_PlayerProxy::OnSkinChangeFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChangeFailed");

	APavlov_PlayerProxy_OnSkinChangeFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   Skin                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OnSkinChanged(const struct FName& Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChanged");

	APavlov_PlayerProxy_OnSkinChanged_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPlayerSkin__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FName                   PlayerSkin                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OnSetPlayerSkin__DelegateSignature(const struct FName& PlayerSkin)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPlayerSkin__DelegateSignature");

	APavlov_PlayerProxy_OnSetPlayerSkin__DelegateSignature_Params params;
	params.PlayerSkin = PlayerSkin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetAttenuation__DelegateSignature
// (Public, Delegate)
// Parameters:
// class USoundAttenuation*       Attenuation                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OnSetAttenuation__DelegateSignature(class USoundAttenuation* Attenuation)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetAttenuation__DelegateSignature");

	APavlov_PlayerProxy_OnSetAttenuation__DelegateSignature_Params params;
	params.Attenuation = Attenuation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRevivePlayer__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::OnRevivePlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRevivePlayer__DelegateSignature");

	APavlov_PlayerProxy_OnRevivePlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.OnRep_PlayerSkinChanged
// (Final, Native, Private)

void APavlov_PlayerProxy::OnRep_PlayerSkinChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OnRep_PlayerSkinChanged");

	APavlov_PlayerProxy_OnRep_PlayerSkinChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRemoveAmmo__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlov_PlayerProxy::OnRemoveAmmo__DelegateSignature(const struct FName& AmmoId, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRemoveAmmo__DelegateSignature");

	APavlov_PlayerProxy_OnRemoveAmmo__DelegateSignature_Params params;
	params.AmmoId = AmmoId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.OnPlayerDeath
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  KilledActor                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OnPlayerDeath(class AActor* KilledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OnPlayerDeath");

	APavlov_PlayerProxy_OnPlayerDeath_Params params;
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsPickupDisabled__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::OnIsPickupDisabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsPickupDisabled__DelegateSignature");

	APavlov_PlayerProxy_OnIsPickupDisabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasItem__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FName                   Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APavlov_PlayerProxy::OnHasItem__DelegateSignature(const struct FName& Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasItem__DelegateSignature");

	APavlov_PlayerProxy_OnHasItem__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasAmmo__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlov_PlayerProxy::OnHasAmmo__DelegateSignature(const struct FName& AmmoId)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasAmmo__DelegateSignature");

	APavlov_PlayerProxy_OnHasAmmo__DelegateSignature_Params params;
	params.AmmoId = AmmoId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetSkinSkeleton__DelegateSignature
// (Public, Delegate)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* APavlov_PlayerProxy::OnGetSkinSkeleton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetSkinSkeleton__DelegateSignature");

	APavlov_PlayerProxy_OnGetSkinSkeleton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetInventorySlotVis__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::OnGetInventorySlotVis__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetInventorySlotVis__DelegateSignature");

	APavlov_PlayerProxy_OnGetInventorySlotVis__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetCompatibleSlot__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FName                   Item                           (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char APavlov_PlayerProxy::OnGetCompatibleSlot__DelegateSignature(const struct FName& Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetCompatibleSlot__DelegateSignature");

	APavlov_PlayerProxy_OnGetCompatibleSlot__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAttachments__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AActor*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> APavlov_PlayerProxy::OnGetAttachments__DelegateSignature(class AActor* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAttachments__DelegateSignature");

	APavlov_PlayerProxy_OnGetAttachments__DelegateSignature_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAmmoId__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AActor*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APavlov_PlayerProxy::OnGetAmmoId__DelegateSignature(class AActor* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAmmoId__DelegateSignature");

	APavlov_PlayerProxy_OnGetAmmoId__DelegateSignature_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItems__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           bDominant                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OnDropItems__DelegateSignature(bool bDominant, bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItems__DelegateSignature");

	APavlov_PlayerProxy_OnDropItems__DelegateSignature_Params params;
	params.bDominant = bDominant;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItem__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FName                   Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromHandsOnly                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::OnDropItem__DelegateSignature(const struct FName& Item, bool bDestroy, bool bFromHandsOnly)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItem__DelegateSignature");

	APavlov_PlayerProxy_OnDropItem__DelegateSignature_Params params;
	params.Item = Item;
	params.bDestroy = bDestroy;
	params.bFromHandsOnly = bFromHandsOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropHeldItems__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           bDominant                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBoth                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OnDropHeldItems__DelegateSignature(bool bDominant, bool bBoth, bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropHeldItems__DelegateSignature");

	APavlov_PlayerProxy_OnDropHeldItems__DelegateSignature_Params params;
	params.bDominant = bDominant;
	params.bBoth = bBoth;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDisablePickup__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           bDisablePickup                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OnDisablePickup__DelegateSignature(bool bDisablePickup)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDisablePickup__DelegateSignature");

	APavlov_PlayerProxy_OnDisablePickup__DelegateSignature_Params params;
	params.bDisablePickup = bDisablePickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnCanRevive__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::OnCanRevive__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnCanRevive__DelegateSignature");

	APavlov_PlayerProxy_OnCanRevive__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnAddAmmo__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::OnAddAmmo__DelegateSignature(const struct FName& AmmoId, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnAddAmmo__DelegateSignature");

	APavlov_PlayerProxy_OnAddAmmo__DelegateSignature_Params params;
	params.AmmoId = AmmoId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.IsPickupDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::IsPickupDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.IsPickupDisabled");

	APavlov_PlayerProxy_IsPickupDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.InitializeClient
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void APavlov_PlayerProxy::InitializeClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.InitializeClient");

	APavlov_PlayerProxy_InitializeClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.HasItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::HasItem(const struct FName& ItemId, bool* bHasItem, class AActor** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.HasItem");

	APavlov_PlayerProxy_HasItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasItem != nullptr)
		*bHasItem = params.bHasItem;
	if (Item != nullptr)
		*Item = params.Item;
}


// Function PavlovProxy.Pavlov_PlayerProxy.HasAmmo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoAmount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::HasAmmo(const struct FName& AmmoId, int* AmmoAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.HasAmmo");

	APavlov_PlayerProxy_HasAmmo_Params params;
	params.AmmoId = AmmoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoAmount != nullptr)
		*AmmoAmount = params.AmmoAmount;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAttachments
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Attachments                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::GetWeaponAttachments(class AActor* Weapon, TArray<struct FName>* Attachments)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAttachments");

	APavlov_PlayerProxy_GetWeaponAttachments_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attachments != nullptr)
		*Attachments = params.Attachments;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAmmoId
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AmmoId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::GetWeaponAmmoId(class AActor* Weapon, struct FName* AmmoId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAmmoId");

	APavlov_PlayerProxy_GetWeaponAmmoId_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoId != nullptr)
		*AmmoId = params.AmmoId;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetVoiceAttenuation
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USoundAttenuation*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundAttenuation* APavlov_PlayerProxy::GetVoiceAttenuation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetVoiceAttenuation");

	APavlov_PlayerProxy_GetVoiceAttenuation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetSkinSkeleton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* APavlov_PlayerProxy::GetSkinSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetSkinSkeleton");

	APavlov_PlayerProxy_GetSkinSkeleton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerVitality
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPlayerVitality         PlayerVitality                 (Parm, OutParm)

void APavlov_PlayerProxy::GetPlayerVitality(struct FPlayerVitality* PlayerVitality)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerVitality");

	APavlov_PlayerProxy_GetPlayerVitality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerVitality != nullptr)
		*PlayerVitality = params.PlayerVitality;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APavlov_PlayerProxy::GetPlayerSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkin");

	APavlov_PlayerProxy_GetPlayerSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkeleton
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* APavlov_PlayerProxy::GetPlayerSkeleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkeleton");

	APavlov_PlayerProxy_GetPlayerSkeleton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* APavlov_PlayerProxy::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetPawn");

	APavlov_PlayerProxy_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetHeldItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bDominantHand                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPlayerItem             Item                           (Parm, OutParm)

void APavlov_PlayerProxy::GetHeldItem(bool bDominantHand, bool* bHasItem, struct FPlayerItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetHeldItem");

	APavlov_PlayerProxy_GetHeldItem_Params params;
	params.bDominantHand = bDominantHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasItem != nullptr)
		*bHasItem = params.bHasItem;
	if (Item != nullptr)
		*Item = params.Item;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetCompatibleSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::GetCompatibleSlot(const struct FName& ItemId, unsigned char* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetCompatibleSlot");

	APavlov_PlayerProxy_GetCompatibleSlot_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetAllItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPlayerItem>     Items                          (Parm, OutParm, ZeroConstructor)

void APavlov_PlayerProxy::GetAllItems(TArray<struct FPlayerItem>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetAllItems");

	APavlov_PlayerProxy_GetAllItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function PavlovProxy.Pavlov_PlayerProxy.GetAllInventoryItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInventoryItem>  InvItems                       (Parm, OutParm, ZeroConstructor)

void APavlov_PlayerProxy::GetAllInventoryItems(TArray<struct FInventoryItem>* InvItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetAllInventoryItems");

	APavlov_PlayerProxy_GetAllInventoryItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InvItems != nullptr)
		*InvItems = params.InvItems;
}


// Function PavlovProxy.Pavlov_PlayerProxy.EnableClientInput
// (Final, Native, Private)

void APavlov_PlayerProxy::EnableClientInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.EnableClientInput");

	APavlov_PlayerProxy_EnableClientInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.DropItem
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromHandsOnly                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::DropItem(const struct FName& Item, bool bDestroy, bool bFromHandsOnly, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DropItem");

	APavlov_PlayerProxy_DropItem_Params params;
	params.Item = Item;
	params.bDestroy = bDestroy;
	params.bFromHandsOnly = bFromHandsOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
}


// Function PavlovProxy.Pavlov_PlayerProxy.DropHeld
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// EHands                         hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyItems                  (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::DropHeld(EHands hand, bool bDestroyItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DropHeld");

	APavlov_PlayerProxy_DropHeld_Params params;
	params.hand = hand;
	params.bDestroyItems = bDestroyItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.DropAll
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDestroyItems                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInventoryOnly                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::DropAll(bool bDestroyItems, bool bInventoryOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DropAll");

	APavlov_PlayerProxy_DropAll_Params params;
	params.bDestroyItems = bDestroyItems;
	params.bInventoryOnly = bInventoryOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.DisablePickup
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisablePickup                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::DisablePickup(bool bDisablePickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DisablePickup");

	APavlov_PlayerProxy_DisablePickup_Params params;
	params.bDisablePickup = bDisablePickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.DisableClientInput
// (Net, NetReliable, Native, Event, Public, NetClient)

void APavlov_PlayerProxy::DisableClientInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DisableClientInput");

	APavlov_PlayerProxy_DisableClientInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.Pavlov_PlayerProxy.CanRevive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlov_PlayerProxy::CanRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.CanRevive");

	APavlov_PlayerProxy_CanRevive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PavlovProxy.Pavlov_PlayerProxy.AddAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AmmoId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountToAdd                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlov_PlayerProxy::AddAmmo(const struct FName& AmmoId, int AmountToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.AddAmmo");

	APavlov_PlayerProxy_AddAmmo_Params params;
	params.AmmoId = AmmoId;
	params.AmountToAdd = AmountToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PavlovProxy.PavlovProxyStatics.GetTeamScore
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPavlovProxyStatics::STATIC_GetTeamScore(class UObject* WorldContextObject, int TeamId, int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetTeamScore");

	UPavlovProxyStatics_GetTeamScore_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FPavlovPlayerStatus     PlayerStatus                   (Parm, OutParm)
// bool                           bSucceeded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPavlovProxyStatics::STATIC_GetPavlovPlayerStatusByPawn(class APawn* Pawn, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn");

	UPavlovProxyStatics_GetPavlovPlayerStatusByPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerStatus != nullptr)
		*PlayerStatus = params.PlayerStatus;
	if (bSucceeded != nullptr)
		*bSucceeded = params.bSucceeded;
}


// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FPavlovPlayerStatus     PlayerStatus                   (Parm, OutParm)
// bool                           bSucceeded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPavlovProxyStatics::STATIC_GetPavlovPlayerStatus(class APlayerState* PlayerState, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus");

	UPavlovProxyStatics_GetPavlovPlayerStatus_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerStatus != nullptr)
		*PlayerStatus = params.PlayerStatus;
	if (bSucceeded != nullptr)
		*bSucceeded = params.bSucceeded;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
