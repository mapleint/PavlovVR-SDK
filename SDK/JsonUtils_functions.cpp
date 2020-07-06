
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

// Function JsonUtils.JsonUtilsObj.RemoveField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)

void UJsonUtilsObj::RemoveField(const struct FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.RemoveField");

	UJsonUtilsObj_RemoveField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.HasField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::HasField(const struct FString& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.HasField");

	UJsonUtilsObj_HasField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetStringField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// struct FString                 StringValue                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetStringField(const struct FString& FieldName, struct FString* StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetStringField");

	UJsonUtilsObj_GetStringField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringValue != nullptr)
		*StringValue = params.StringValue;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetObjField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UJsonUtilsObj::GetObjField(const struct FString& FieldName, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetObjField");

	UJsonUtilsObj_GetObjField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetIntField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// int                            NumberValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetIntField(const struct FString& FieldName, int* NumberValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetIntField");

	UJsonUtilsObj_GetIntField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberValue != nullptr)
		*NumberValue = params.NumberValue;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetFloatField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// float                          NumberValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetFloatField(const struct FString& FieldName, float* NumberValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetFloatField");

	UJsonUtilsObj_GetFloatField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberValue != nullptr)
		*NumberValue = params.NumberValue;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetFieldNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UJsonUtilsObj::GetFieldNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetFieldNames");

	UJsonUtilsObj_GetFieldNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetFieldAsTimeStamp
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// struct FDateTime               DateTime                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetFieldAsTimeStamp(const struct FString& FieldName, struct FDateTime* DateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetFieldAsTimeStamp");

	UJsonUtilsObj_GetFieldAsTimeStamp_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsValue*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsValue* UJsonUtilsObj::GetField(const struct FString& FieldName, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetField");

	UJsonUtilsObj_GetField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetBoolField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// bool                           BoolValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetBoolField(const struct FString& FieldName, bool* BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetBoolField");

	UJsonUtilsObj_GetBoolField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoolValue != nullptr)
		*BoolValue = params.BoolValue;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetArrayFieldAsStrings
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<struct FString>         StringArray                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetArrayFieldAsStrings(const struct FString& FieldName, TArray<struct FString>* StringArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayFieldAsStrings");

	UJsonUtilsObj_GetArrayFieldAsStrings_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringArray != nullptr)
		*StringArray = params.StringArray;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetArrayFieldAsInts
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<int>                    Ints                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetArrayFieldAsInts(const struct FString& FieldName, TArray<int>* Ints)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayFieldAsInts");

	UJsonUtilsObj_GetArrayFieldAsInts_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ints != nullptr)
		*Ints = params.Ints;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetArrayFieldAsFloats
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<float>                  Floats                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetArrayFieldAsFloats(const struct FString& FieldName, TArray<float>* Floats)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayFieldAsFloats");

	UJsonUtilsObj_GetArrayFieldAsFloats_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Floats != nullptr)
		*Floats = params.Floats;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetArrayFieldAsBools
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<bool>                   Bools                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::GetArrayFieldAsBools(const struct FString& FieldName, TArray<bool>* Bools)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayFieldAsBools");

	UJsonUtilsObj_GetArrayFieldAsBools_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bools != nullptr)
		*Bools = params.Bools;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetArrayField
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UJsonUtilsValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UJsonUtilsValue*> UJsonUtilsObj::GetArrayField(const struct FString& FieldName, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayField");

	UJsonUtilsObj_GetArrayField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.GetArrayAsObjects
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UJsonUtilsObj*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UJsonUtilsObj*> UJsonUtilsObj::GetArrayAsObjects(const struct FString& FieldName, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayAsObjects");

	UJsonUtilsObj_GetArrayAsObjects_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.ClearObject
// (Final, Native, Public, BlueprintCallable)

void UJsonUtilsObj::ClearObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.ClearObject");

	UJsonUtilsObj_ClearObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.AddTimestamp
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// struct FDateTime               DateTime                       (Parm, ZeroConstructor)

void UJsonUtilsObj::AddTimestamp(const struct FString& FieldName, const struct FDateTime& DateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddTimestamp");

	UJsonUtilsObj_AddTimestamp_Params params;
	params.FieldName = FieldName;
	params.DateTime = DateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.AddStringField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UJsonUtilsObj::AddStringField(const struct FString& FieldName, const struct FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddStringField");

	UJsonUtilsObj_AddStringField_Params params;
	params.FieldName = FieldName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.AddStringArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<struct FString>         StringArray                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::AddStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddStringArrayField");

	UJsonUtilsObj_AddStringArrayField_Params params;
	params.FieldName = FieldName;
	params.StringArray = StringArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.AddObjField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// class UJsonUtilsObj*           JsonUtilsObj                   (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsObj::AddObjField(const struct FString& FieldName, class UJsonUtilsObj* JsonUtilsObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddObjField");

	UJsonUtilsObj_AddObjField_Params params;
	params.FieldName = FieldName;
	params.JsonUtilsObj = JsonUtilsObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.AddObjectArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<class UJsonUtilsObj*>   JsonObjects                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::AddObjectArrayField(const struct FString& FieldName, TArray<class UJsonUtilsObj*> JsonObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddObjectArrayField");

	UJsonUtilsObj_AddObjectArrayField_Params params;
	params.FieldName = FieldName;
	params.JsonObjects = JsonObjects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.AddIntField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// int                            NumberValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsObj::AddIntField(const struct FString& FieldName, int NumberValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddIntField");

	UJsonUtilsObj_AddIntField_Params params;
	params.FieldName = FieldName;
	params.NumberValue = NumberValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.AddIntArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<int>                    IntArray                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::AddIntArrayField(const struct FString& FieldName, TArray<int> IntArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddIntArrayField");

	UJsonUtilsObj_AddIntArrayField_Params params;
	params.FieldName = FieldName;
	params.IntArray = IntArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.AddFloatField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// float                          NumberValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsObj::AddFloatField(const struct FString& FieldName, float NumberValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddFloatField");

	UJsonUtilsObj_AddFloatField_Params params;
	params.FieldName = FieldName;
	params.NumberValue = NumberValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.AddFloatArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<float>                  FloatArray                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::AddFloatArrayField(const struct FString& FieldName, TArray<float> FloatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddFloatArrayField");

	UJsonUtilsObj_AddFloatArrayField_Params params;
	params.FieldName = FieldName;
	params.FloatArray = FloatArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.AddField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// class UJsonUtilsValue*         JsonValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsObj::AddField(const struct FString& FieldName, class UJsonUtilsValue* JsonValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddField");

	UJsonUtilsObj_AddField_Params params;
	params.FieldName = FieldName;
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.AddBoolField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsObj::AddBoolField(const struct FString& FieldName, bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddBoolField");

	UJsonUtilsObj_AddBoolField_Params params;
	params.FieldName = FieldName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsObj.AddBoolArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<bool>                   BoolArray                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::AddBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddBoolArrayField");

	UJsonUtilsObj_AddBoolArrayField_Params params;
	params.FieldName = FieldName;
	params.BoolArray = BoolArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsObj.AddArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FieldName                      (Parm, ZeroConstructor)
// TArray<class UJsonUtilsValue*> JsonValues                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsObj::AddArrayField(const struct FString& FieldName, TArray<class UJsonUtilsValue*> JsonValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddArrayField");

	UJsonUtilsObj_AddArrayField_Params params;
	params.FieldName = FieldName;
	params.JsonValues = JsonValues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.SetVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERequestType                   RequestType                    (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsRequest::SetVerb(ERequestType RequestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetVerb");

	UJsonUtilsRequest_SetVerb_Params params;
	params.RequestType = RequestType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.SetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InURL                          (Parm, ZeroConstructor)

void UJsonUtilsRequest::SetURL(const struct FString& InURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetURL");

	UJsonUtilsRequest_SetURL_Params params;
	params.InURL = InURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.SetRequestUserAgent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UserAgentValue                 (Parm, ZeroConstructor)

void UJsonUtilsRequest::SetRequestUserAgent(const struct FString& UserAgentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetRequestUserAgent");

	UJsonUtilsRequest_SetRequestUserAgent_Params params;
	params.UserAgentValue = UserAgentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.SetCustomContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ContentType                    (Parm, ZeroConstructor)

void UJsonUtilsRequest::SetCustomContentType(const struct FString& ContentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetCustomContentType");

	UJsonUtilsRequest_SetCustomContentType_Params params;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.SetContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EContentType                   ContentType                    (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsRequest::SetContentType(EContentType ContentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetContentType");

	UJsonUtilsRequest_SetContentType_Params params;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.SetContentAsString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ContentString                  (Parm, ZeroConstructor)

void UJsonUtilsRequest::SetContentAsString(const struct FString& ContentString)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetContentAsString");

	UJsonUtilsRequest_SetContentAsString_Params params;
	params.ContentString = ContentString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.SetContentAsJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UJsonUtilsObj*           ContentObj                     (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsRequest::SetContentAsJson(class UJsonUtilsObj* ContentObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetContentAsJson");

	UJsonUtilsRequest_SetContentAsJson_Params params;
	params.ContentObj = ContentObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.SetContent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UJsonUtilsRequest::SetContent(TArray<unsigned char> Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetContent");

	UJsonUtilsRequest_SetContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.ProcessRequest
// (Final, Native, Public, BlueprintCallable)

void UJsonUtilsRequest::ProcessRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.ProcessRequest");

	UJsonUtilsRequest_ProcessRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UJsonUtilsRequest::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetUrl");

	UJsonUtilsRequest_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.GetResponseHeaders
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FString, struct FString> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, struct FString> UJsonUtilsRequest::GetResponseHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseHeaders");

	UJsonUtilsRequest_GetResponseHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.GetResponseCode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UJsonUtilsRequest::GetResponseCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseCode");

	UJsonUtilsRequest_GetResponseCode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.GetResponseAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UJsonUtilsRequest::GetResponseAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseAsString");

	UJsonUtilsRequest_GetResponseAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.GetResponseAsJsonArray
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UJsonUtilsValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UJsonUtilsValue*> UJsonUtilsRequest::GetResponseAsJsonArray(bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseAsJsonArray");

	UJsonUtilsRequest_GetResponseAsJsonArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.GetResponseAsJson
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UJsonUtilsRequest::GetResponseAsJson(bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseAsJson");

	UJsonUtilsRequest_GetResponseAsJson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.GetResponse
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UJsonUtilsRequest::GetResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponse");

	UJsonUtilsRequest_GetResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.GetRequestHeaders
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FString, struct FString> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, struct FString> UJsonUtilsRequest::GetRequestHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetRequestHeaders");

	UJsonUtilsRequest_GetRequestHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsRequest.EnableLogging
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UJsonUtilsRequest::EnableLogging(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.EnableLogging");

	UJsonUtilsRequest_EnableLogging_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.ClearRequestHeaders
// (Final, Native, Public, BlueprintCallable)

void UJsonUtilsRequest::ClearRequestHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.ClearRequestHeaders");

	UJsonUtilsRequest_ClearRequestHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsRequest.AddRequestHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeaderName                     (Parm, ZeroConstructor)
// struct FString                 HeaderValue                    (Parm, ZeroConstructor)

void UJsonUtilsRequest::AddRequestHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.AddRequestHeader");

	UJsonUtilsRequest_AddRequestHeader_Params params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JsonUtils.JsonUtilsValue.GetValueAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UJsonUtilsValue::GetValueAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsString");

	UJsonUtilsValue_GetValueAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsValue.GetValueAsObj
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UJsonUtilsValue::GetValueAsObj()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsObj");

	UJsonUtilsValue_GetValueAsObj_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsValue.GetValueAsInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UJsonUtilsValue::GetValueAsInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsInt");

	UJsonUtilsValue_GetValueAsInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsValue.GetValueAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UJsonUtilsValue::GetValueAsFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsFloat");

	UJsonUtilsValue_GetValueAsFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsValue.GetValueAsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsValue::GetValueAsBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsBool");

	UJsonUtilsValue_GetValueAsBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsValue.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EJsonValue                     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EJsonValue UJsonUtilsValue::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetType");

	UJsonUtilsValue_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsValue.GetArray
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UJsonUtilsValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UJsonUtilsValue*> UJsonUtilsValue::GetArray(bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetArray");

	UJsonUtilsValue_GetArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.StringToJsonValueArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UJsonUtilsValue*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UJsonUtilsValue*> UJsonUtilsLib::STATIC_StringToJsonValueArray(const struct FString& JsonString, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.StringToJsonValueArray");

	UJsonUtilsLib_StringToJsonValueArray_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.StringToJson
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 JsonString                     (Parm, ZeroConstructor)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UJsonUtilsLib::STATIC_StringToJson(const struct FString& JsonString, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.StringToJson");

	UJsonUtilsLib_StringToJson_Params params;
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.SaveJsonToFile
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UJsonUtilsObj*           JsonObj                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           bAllowOverwrite                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsLib::STATIC_SaveJsonToFile(class UJsonUtilsObj* JsonObj, const struct FString& Filename, bool bAllowOverwrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.SaveJsonToFile");

	UJsonUtilsLib_SaveJsonToFile_Params params;
	params.JsonObj = JsonObj;
	params.Filename = Filename;
	params.bAllowOverwrite = bAllowOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.MakeJsonStringVal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ValueString                    (Parm, ZeroConstructor)
// class UJsonUtilsValue*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsValue* UJsonUtilsLib::STATIC_MakeJsonStringVal(const struct FString& ValueString)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonStringVal");

	UJsonUtilsLib_MakeJsonStringVal_Params params;
	params.ValueString = ValueString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.MakeJsonObj
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UJsonUtilsLib::STATIC_MakeJsonObj()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonObj");

	UJsonUtilsLib_MakeJsonObj_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.MakeJsonIntValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ValueNumber                    (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsValue*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsValue* UJsonUtilsLib::STATIC_MakeJsonIntValue(int ValueNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonIntValue");

	UJsonUtilsLib_MakeJsonIntValue_Params params;
	params.ValueNumber = ValueNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.MakeJsonFloatValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ValueNumber                    (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsValue*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsValue* UJsonUtilsLib::STATIC_MakeJsonFloatValue(float ValueNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonFloatValue");

	UJsonUtilsLib_MakeJsonFloatValue_Params params;
	params.ValueNumber = ValueNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.MakeJsonBoolVal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ValueBool                      (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsValue*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsValue* UJsonUtilsLib::STATIC_MakeJsonBoolVal(bool ValueBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonBoolVal");

	UJsonUtilsLib_MakeJsonBoolVal_Params params;
	params.ValueBool = ValueBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.MakeHttpRequest
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonUtilsRequest*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsRequest* UJsonUtilsLib::STATIC_MakeHttpRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeHttpRequest");

	UJsonUtilsLib_MakeHttpRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.LoadJsonFromFile
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UJsonUtilsLib::STATIC_LoadJsonFromFile(const struct FString& Filename, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.LoadJsonFromFile");

	UJsonUtilsLib_LoadJsonFromFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.JsonToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UJsonUtilsObj*           JsonObj                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 JsonAsString                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsLib::STATIC_JsonToString(class UJsonUtilsObj* JsonObj, struct FString* JsonAsString)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.JsonToString");

	UJsonUtilsLib_JsonToString_Params params;
	params.JsonObj = JsonObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JsonAsString != nullptr)
		*JsonAsString = params.JsonAsString;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.JsonToCompressedData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UJsonUtilsObj*           JsonObj                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Data                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilsLib::STATIC_JsonToCompressedData(class UJsonUtilsObj* JsonObj, TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.JsonToCompressedData");

	UJsonUtilsLib_JsonToCompressedData_Params params;
	params.JsonObj = JsonObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function JsonUtils.JsonUtilsLib.CompressedDataToJson
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor)
// bool                           bSuccessful                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UJsonUtilsObj*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJsonUtilsObj* UJsonUtilsLib::STATIC_CompressedDataToJson(TArray<unsigned char> Data, bool* bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.CompressedDataToJson");

	UJsonUtilsLib_CompressedDataToJson_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
