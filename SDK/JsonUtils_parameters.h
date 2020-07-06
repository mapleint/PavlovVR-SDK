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

// Function JsonUtils.JsonUtilsObj.RemoveField
struct UJsonUtilsObj_RemoveField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
};

// Function JsonUtils.JsonUtilsObj.HasField
struct UJsonUtilsObj_HasField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetStringField
struct UJsonUtilsObj_GetStringField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	struct FString                                     StringValue;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetObjField
struct UJsonUtilsObj_GetObjField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetIntField
struct UJsonUtilsObj_GetIntField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	int                                                NumberValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetFloatField
struct UJsonUtilsObj_GetFloatField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	float                                              NumberValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetFieldNames
struct UJsonUtilsObj_GetFieldNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsObj.GetFieldAsTimeStamp
struct UJsonUtilsObj_GetFieldAsTimeStamp_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	struct FDateTime                                   DateTime;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetField
struct UJsonUtilsObj_GetField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsValue*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetBoolField
struct UJsonUtilsObj_GetBoolField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               BoolValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetArrayFieldAsStrings
struct UJsonUtilsObj_GetArrayFieldAsStrings_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<struct FString>                             StringArray;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetArrayFieldAsInts
struct UJsonUtilsObj_GetArrayFieldAsInts_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<int>                                        Ints;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetArrayFieldAsFloats
struct UJsonUtilsObj_GetArrayFieldAsFloats_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<float>                                      Floats;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetArrayFieldAsBools
struct UJsonUtilsObj_GetArrayFieldAsBools_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<bool>                                       Bools;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.GetArrayField
struct UJsonUtilsObj_GetArrayField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UJsonUtilsValue*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsObj.GetArrayAsObjects
struct UJsonUtilsObj_GetArrayAsObjects_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UJsonUtilsObj*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsObj.ClearObject
struct UJsonUtilsObj_ClearObject_Params
{
};

// Function JsonUtils.JsonUtilsObj.AddTimestamp
struct UJsonUtilsObj_AddTimestamp_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	struct FDateTime                                   DateTime;                                                 // (Parm, ZeroConstructor)
};

// Function JsonUtils.JsonUtilsObj.AddStringField
struct UJsonUtilsObj_AddStringField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	struct FString                                     StringValue;                                              // (Parm, ZeroConstructor)
};

// Function JsonUtils.JsonUtilsObj.AddStringArrayField
struct UJsonUtilsObj_AddStringArrayField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<struct FString>                             StringArray;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddObjField
struct UJsonUtilsObj_AddObjField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	class UJsonUtilsObj*                               JsonUtilsObj;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddObjectArrayField
struct UJsonUtilsObj_AddObjectArrayField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<class UJsonUtilsObj*>                       JsonObjects;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddIntField
struct UJsonUtilsObj_AddIntField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	int                                                NumberValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddIntArrayField
struct UJsonUtilsObj_AddIntArrayField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<int>                                        IntArray;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddFloatField
struct UJsonUtilsObj_AddFloatField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	float                                              NumberValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddFloatArrayField
struct UJsonUtilsObj_AddFloatArrayField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<float>                                      FloatArray;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddField
struct UJsonUtilsObj_AddField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	class UJsonUtilsValue*                             JsonValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddBoolField
struct UJsonUtilsObj_AddBoolField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddBoolArrayField
struct UJsonUtilsObj_AddBoolArrayField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<bool>                                       BoolArray;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsObj.AddArrayField
struct UJsonUtilsObj_AddArrayField_Params
{
	struct FString                                     FieldName;                                                // (Parm, ZeroConstructor)
	TArray<class UJsonUtilsValue*>                     JsonValues;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsRequest.SetVerb
struct UJsonUtilsRequest_SetVerb_Params
{
	ERequestType                                       RequestType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsRequest.SetURL
struct UJsonUtilsRequest_SetURL_Params
{
	struct FString                                     InURL;                                                    // (Parm, ZeroConstructor)
};

// Function JsonUtils.JsonUtilsRequest.SetRequestUserAgent
struct UJsonUtilsRequest_SetRequestUserAgent_Params
{
	struct FString                                     UserAgentValue;                                           // (Parm, ZeroConstructor)
};

// Function JsonUtils.JsonUtilsRequest.SetCustomContentType
struct UJsonUtilsRequest_SetCustomContentType_Params
{
	struct FString                                     ContentType;                                              // (Parm, ZeroConstructor)
};

// Function JsonUtils.JsonUtilsRequest.SetContentType
struct UJsonUtilsRequest_SetContentType_Params
{
	EContentType                                       ContentType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsRequest.SetContentAsString
struct UJsonUtilsRequest_SetContentAsString_Params
{
	struct FString                                     ContentString;                                            // (Parm, ZeroConstructor)
};

// Function JsonUtils.JsonUtilsRequest.SetContentAsJson
struct UJsonUtilsRequest_SetContentAsJson_Params
{
	class UJsonUtilsObj*                               ContentObj;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsRequest.SetContent
struct UJsonUtilsRequest_SetContent_Params
{
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function JsonUtils.JsonUtilsRequest.ProcessRequest
struct UJsonUtilsRequest_ProcessRequest_Params
{
};

// Function JsonUtils.JsonUtilsRequest.GetUrl
struct UJsonUtilsRequest_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsRequest.GetResponseHeaders
struct UJsonUtilsRequest_GetResponseHeaders_Params
{
	TMap<struct FString, struct FString>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsRequest.GetResponseCode
struct UJsonUtilsRequest_GetResponseCode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsRequest.GetResponseAsString
struct UJsonUtilsRequest_GetResponseAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsRequest.GetResponseAsJsonArray
struct UJsonUtilsRequest_GetResponseAsJsonArray_Params
{
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UJsonUtilsValue*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsRequest.GetResponseAsJson
struct UJsonUtilsRequest_GetResponseAsJson_Params
{
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsRequest.GetResponse
struct UJsonUtilsRequest_GetResponse_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsRequest.GetRequestHeaders
struct UJsonUtilsRequest_GetRequestHeaders_Params
{
	TMap<struct FString, struct FString>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsRequest.EnableLogging
struct UJsonUtilsRequest_EnableLogging_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsRequest.ClearRequestHeaders
struct UJsonUtilsRequest_ClearRequestHeaders_Params
{
};

// Function JsonUtils.JsonUtilsRequest.AddRequestHeader
struct UJsonUtilsRequest_AddRequestHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, ZeroConstructor)
	struct FString                                     HeaderValue;                                              // (Parm, ZeroConstructor)
};

// Function JsonUtils.JsonUtilsValue.GetValueAsString
struct UJsonUtilsValue_GetValueAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsValue.GetValueAsObj
struct UJsonUtilsValue_GetValueAsObj_Params
{
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsValue.GetValueAsInt
struct UJsonUtilsValue_GetValueAsInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsValue.GetValueAsFloat
struct UJsonUtilsValue_GetValueAsFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsValue.GetValueAsBool
struct UJsonUtilsValue_GetValueAsBool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsValue.GetType
struct UJsonUtilsValue_GetType_Params
{
	EJsonValue                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsValue.GetArray
struct UJsonUtilsValue_GetArray_Params
{
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UJsonUtilsValue*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsLib.StringToJsonValueArray
struct UJsonUtilsLib_StringToJsonValueArray_Params
{
	struct FString                                     JsonString;                                               // (Parm, ZeroConstructor)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UJsonUtilsValue*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JsonUtils.JsonUtilsLib.StringToJson
struct UJsonUtilsLib_StringToJson_Params
{
	struct FString                                     JsonString;                                               // (Parm, ZeroConstructor)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.SaveJsonToFile
struct UJsonUtilsLib_SaveJsonToFile_Params
{
	class UJsonUtilsObj*                               JsonObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bAllowOverwrite;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.MakeJsonStringVal
struct UJsonUtilsLib_MakeJsonStringVal_Params
{
	struct FString                                     ValueString;                                              // (Parm, ZeroConstructor)
	class UJsonUtilsValue*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.MakeJsonObj
struct UJsonUtilsLib_MakeJsonObj_Params
{
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.MakeJsonIntValue
struct UJsonUtilsLib_MakeJsonIntValue_Params
{
	int                                                ValueNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsValue*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.MakeJsonFloatValue
struct UJsonUtilsLib_MakeJsonFloatValue_Params
{
	float                                              ValueNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsValue*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.MakeJsonBoolVal
struct UJsonUtilsLib_MakeJsonBoolVal_Params
{
	bool                                               ValueBool;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsValue*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.MakeHttpRequest
struct UJsonUtilsLib_MakeHttpRequest_Params
{
	class UJsonUtilsRequest*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.LoadJsonFromFile
struct UJsonUtilsLib_LoadJsonFromFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.JsonToString
struct UJsonUtilsLib_JsonToString_Params
{
	class UJsonUtilsObj*                               JsonObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     JsonAsString;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.JsonToCompressedData
struct UJsonUtilsLib_JsonToCompressedData_Params
{
	class UJsonUtilsObj*                               JsonObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Data;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JsonUtils.JsonUtilsLib.CompressedDataToJson
struct UJsonUtilsLib_CompressedDataToJson_Params
{
	TArray<unsigned char>                              Data;                                                     // (Parm, ZeroConstructor)
	bool                                               bSuccessful;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UJsonUtilsObj*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
