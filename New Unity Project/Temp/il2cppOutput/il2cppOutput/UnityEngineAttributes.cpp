#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t869_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1199);
		RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		ExtensionAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1202);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t115 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t115 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m245(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m246(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t869 * tmp;
		tmp = (ExtensionAttribute_t869 *)il2cpp_codegen_object_new (ExtensionAttribute_t869_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4473(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t896_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t896_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void AssetBundle_t898_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void AssetBundle_t898_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void AssetBundle_t898_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void LayerMask_t202_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void LayerMask_t202_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void LayerMask_t202_CustomAttributesCacheGenerator_LayerMask_t202_LayerMask_GetMask_m5068_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void RuntimePlatform_t902_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void RuntimePlatform_t902_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void RuntimePlatform_t902_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void RuntimePlatform_t902_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void RuntimePlatform_t902_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void SystemInfo_t904_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Coroutine_t271_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void ScriptableObject_t907_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void ScriptableObject_t907_CustomAttributesCacheGenerator_ScriptableObject_t907_ScriptableObject_Internal_CreateScriptableObject_m5075_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void ScriptableObject_t907_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void ScriptableObject_t907_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5098(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5099(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GcLeaderboard_t918_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GcLeaderboard_t918_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GcLeaderboard_t918_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GcLeaderboard_t918_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_mesh_m4065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_sharedMesh_m222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_set_sharedMesh_m4122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_t107_Mesh_Internal_Create_m5151_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_Clear_m5152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_t107_Mesh_Clear_m5152_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_Clear_m4066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_get_vertices_m223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_set_vertices_m4067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_set_normals_m4071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_get_uv_m4070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_set_uv_m4069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_INTERNAL_get_bounds_m5153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_get_triangles_m224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Mesh_t107_CustomAttributesCacheGenerator_Mesh_set_triangles_m4068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Renderer_t77_CustomAttributesCacheGenerator_Renderer_set_enabled_m142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Renderer_t77_CustomAttributesCacheGenerator_Renderer_get_material_m4383(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Renderer_t77_CustomAttributesCacheGenerator_Renderer_set_material_m4113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Renderer_t77_CustomAttributesCacheGenerator_Renderer_set_sharedMaterial_m182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Renderer_t77_CustomAttributesCacheGenerator_Renderer_get_materials_m181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Renderer_t77_CustomAttributesCacheGenerator_Renderer_set_sharedMaterials_m183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Renderer_t77_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m1780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Renderer_t77_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m1781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_get_width_m116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_get_height_m117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_get_dpi_m2139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_get_autorotateToPortrait_m4197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_set_autorotateToPortrait_m4201(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_get_autorotateToPortraitUpsideDown_m4198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_set_autorotateToPortraitUpsideDown_m4202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_get_autorotateToLandscapeLeft_m4195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_set_autorotateToLandscapeLeft_m4199(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_get_autorotateToLandscapeRight_m4196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_set_autorotateToLandscapeRight_m4200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_get_orientation_m150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_set_orientation_m4426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Screen_t920_CustomAttributesCacheGenerator_Screen_set_sleepTimeout_m4427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_INTERNAL_CALL_Vertex_m5174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_Begin_m229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_End_m231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_INTERNAL_CALL_MultMatrix_m5175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_PushMatrix_m225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_PopMatrix_m232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_SetRevertBackfacing_m4455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("Use invertCulling property"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_Clear_m4136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_t921_GL_Clear_m5176_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("1.0f"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_INTERNAL_CALL_Internal_Clear_m5178(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GL_t921_CustomAttributesCacheGenerator_GL_IssuePluginEvent_m4216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture_t276_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture_t276_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture_t276_CustomAttributesCacheGenerator_Texture_set_filterMode_m4458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture_t276_CustomAttributesCacheGenerator_Texture_set_wrapMode_m4459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture_t276_CustomAttributesCacheGenerator_Texture_GetNativeTextureID_m4460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_Internal_Create_m5184_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_get_format_m4150(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m1831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m1925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_SetPixels_m4155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_SetPixels_m5185_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_SetPixels_m5186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_SetPixels_m5186_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_SetAllPixels32_m5187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_SetPixels32_m4397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_SetPixels32_m5188_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixels_m4152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_GetPixels_m5189_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixels_m5190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_GetPixels_m5190_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m5191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_GetPixels32_m5191_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m4395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_Apply_m5192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_Apply_m5192_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_Apply_m5192_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_Apply_m4398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_Resize_m4151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_ReadPixels_m4394_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_GetTemporary_m5194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_t754_RenderTexture_GetTemporary_m5194_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_t754_RenderTexture_GetTemporary_m5194_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("RenderTextureFormat.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_t754_RenderTexture_GetTemporary_m5194_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("RenderTextureReadWrite.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_t754_RenderTexture_GetTemporary_m5194_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("1"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_GetTemporary_m4386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_ReleaseTemporary_m4396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_set_depth_m4389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_set_active_m4393(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUILayer_t924_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Gradient_t927_CustomAttributesCacheGenerator_Gradient_Init_m5204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Gradient_t927_CustomAttributesCacheGenerator_Gradient_Cleanup_m5205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void GUI_t73_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void GUI_t73_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void GUI_t73_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUI_t73_CustomAttributesCacheGenerator_GUI_set_changed_m5215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUI_t73_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUI_t73_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUI_t73_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoWindow_m5223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUILayoutUtility_t936_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUILayoutUtility_t936_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISettings_t944_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISettings_t944_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISettings_t944_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISettings_t944_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISettings_t944_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t463_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t463_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t463 * tmp;
		tmp = (ExecuteInEditMode_t463 *)il2cpp_codegen_object_new (ExecuteInEditMode_t463_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m2253(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUISkin_t929_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUIContent_t417_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUIContent_t417_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void GUIContent_t417_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyleState_t948_CustomAttributesCacheGenerator_GUIStyleState_Init_m5345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyleState_t948_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyleState_t948_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5347(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyleState_t948_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_Init_m5353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_left_m2156(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_set_left_m5355(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_right_m5356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_set_right_m5357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_top_m2157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_set_top_m5358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_bottom_m5359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m2149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_vertical_m2151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Init_m5367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_name_m5369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_set_name_m5370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m5379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m5381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5395(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m2037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m2038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m1954(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m1956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m2036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m1953(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m2035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m1972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m1968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_Init_m5399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_Cleanup_m5401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_get_rawType_m1986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_get_type_m5402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_get_modifiers_m1982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_get_character_m1984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_get_commandName_m5405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_get_keyCode_m1983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Event_t272_CustomAttributesCacheGenerator_Event_PopEvent_m1987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t450_il2cpp_TypeInfo_var;
void EventModifiers_t953_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t450 * tmp;
		tmp = (FlagsAttribute_t450 *)il2cpp_codegen_object_new (FlagsAttribute_t450_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2195(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m5414(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireCube_m5415(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m5416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m5417(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_matrix_m5418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void Vector2_t184_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void Vector3_t110_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void Color_t62_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t1057_il2cpp_TypeInfo_var;
void Color32_t379_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t1057_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1888);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t1057 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t1057 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t1057_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m6119(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void Quaternion_t113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Quaternion_t113_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m5438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Quaternion_t113_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Quaternion_t113_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToAxisAngleRad_m5442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void Matrix4x4_t112_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Bounds_t289_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Bounds_t289_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Bounds_t289_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Bounds_t289_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void Vector4_t371_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void Mathf_t383_CustomAttributesCacheGenerator_Mathf_t383_Mathf_Max_m4359_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Mathf_t383_CustomAttributesCacheGenerator_Mathf_t383_Mathf_SmoothDamp_m2062_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Mathf_t383_CustomAttributesCacheGenerator_Mathf_t383_Mathf_SmoothDamp_m2062_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Time.deltaTime"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t450_il2cpp_TypeInfo_var;
void DrivenTransformProperties_t956_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t450 * tmp;
		tmp = (FlagsAttribute_t450 *)il2cpp_codegen_object_new (FlagsAttribute_t450_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2195(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5530(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5537(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Resources_t960_CustomAttributesCacheGenerator_Resources_Load_m5544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Resources_t960_CustomAttributesCacheGenerator_Resources_UnloadUnusedAssets_m4334(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t961_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Shader_t106_CustomAttributesCacheGenerator_Shader_Find_m4382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Shader_t106_CustomAttributesCacheGenerator_Shader_PropertyToID_m5546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material__ctor_m216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("Creating materials from shader source string will be removed in the future. Use Shader assets instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_get_shader_m218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_SetTexture_m5548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_GetTexture_m5550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_SetFloat_m5552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_HasProperty_m5553(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_SetPass_m228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_Internal_CreateWithString_m5554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_t60_Material_Internal_CreateWithString_m5554_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m5555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_t60_Material_Internal_CreateWithShader_m5555_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void Material_t60_CustomAttributesCacheGenerator_Material_t60_Material_Internal_CreateWithMaterial_m5556_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t962_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t962_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t962_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t962_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5565(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_rect_m1897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m1892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_texture_m1889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_textureRect_m1922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_border_m1890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void DataUtility_t963_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m1908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void DataUtility_t963_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m1907(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void DataUtility_t963_CustomAttributesCacheGenerator_DataUtility_GetPadding_m1896(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void DataUtility_t963_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WWW_t964_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WWW_t964_CustomAttributesCacheGenerator_WWW_InitWWW_m5580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WWW_t964_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WWW_t964_CustomAttributesCacheGenerator_WWW_get_bytes_m5586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WWW_t964_CustomAttributesCacheGenerator_WWW_get_error_m5587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WWW_t964_CustomAttributesCacheGenerator_WWW_get_isDone_m5588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void WWWForm_t966_CustomAttributesCacheGenerator_WWWForm_AddField_m5592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void WWWForm_t966_CustomAttributesCacheGenerator_WWWForm_t966_WWWForm_AddField_m5593_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void WWWTranscoder_t967_CustomAttributesCacheGenerator_WWWTranscoder_t967_WWWTranscoder_QPEncode_m5600_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void WWWTranscoder_t967_CustomAttributesCacheGenerator_WWWTranscoder_t967_WWWTranscoder_SevenBitClean_m5603_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void CacheIndex_t968_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void UnityString_t969_CustomAttributesCacheGenerator_UnityString_t969_UnityString_Format_m5605_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void AsyncOperation_t897_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Application_t971_CustomAttributesCacheGenerator_Application_Quit_m124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Application_t971_CustomAttributesCacheGenerator_Application_get_isPlaying_m2040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Application_t971_CustomAttributesCacheGenerator_Application_get_isEditor_m2043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Application_t971_CustomAttributesCacheGenerator_Application_get_platform_m190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Application_t971_CustomAttributesCacheGenerator_Application_set_runInBackground_m4468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Application_t971_CustomAttributesCacheGenerator_Application_get_dataPath_m4399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Application_t971_CustomAttributesCacheGenerator_Application_get_unityVersion_m4217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Behaviour_t438_CustomAttributesCacheGenerator_Behaviour_get_enabled_m233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Behaviour_t438_CustomAttributesCacheGenerator_Behaviour_set_enabled_m243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Behaviour_t438_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m1704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1771(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_set_nearClipPlane_m4377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_set_farClipPlane_m4378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4375(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_set_orthographic_m4374(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_depth_m1665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_set_aspect_m4376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1785(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_set_cullingMask_m4379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_eventMask_m5619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5620(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_targetTexture_m4388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_set_targetTexture_m4387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m5623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_set_projectionMatrix_m5624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5627(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_main_m1784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_current_m220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_Render_m4390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var;
void CameraCallback_t972_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1209 * tmp;
		tmp = (EditorBrowsableAttribute_t1209 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6450(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Debug_t973_CustomAttributesCacheGenerator_Debug_Internal_Log_m5638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void Debug_t973_CustomAttributesCacheGenerator_Debug_t973_Debug_Internal_Log_m5638_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Debug_t973_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void Debug_t973_CustomAttributesCacheGenerator_Debug_t973_Debug_Internal_LogException_m5639_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Display_t976_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5665(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Display_t976_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Display_t976_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Display_t976_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5668(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Display_t976_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Display_t976_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Display_t976_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5671(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Display_t976_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void MonoBehaviour_t10_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void MonoBehaviour_t10_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void MonoBehaviour_t10_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_GetAxisRaw_m1756(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_GetButtonDown_m1755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_GetMouseButton_m1764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m1726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_get_mousePosition_m1727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m1729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_get_mousePresent_m1754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_GetTouch_m1762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_get_touchCount_m1763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m2039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_get_compositionString_m1958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Input_t384_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t450_il2cpp_TypeInfo_var;
void HideFlags_t979_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t450 * tmp;
		tmp = (FlagsAttribute_t450 *)il2cpp_codegen_object_new (FlagsAttribute_t450_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m2195(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m5680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_Destroy_m5681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_t69_Object_Destroy_m5681_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_Destroy_m203(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_t69_Object_DestroyImmediate_m5682_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m4211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_get_name_m2002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_set_name_m2110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m4083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_set_hideFlags_m217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_ToString_m252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_Instantiate_m4279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_FindObjectOfType_m112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Component_t74_CustomAttributesCacheGenerator_Component_get_transform_m204(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Component_t74_CustomAttributesCacheGenerator_Component_get_gameObject_m194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void Component_t74_CustomAttributesCacheGenerator_Component_GetComponent_m2164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Component_t74_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var;
void Component_t74_CustomAttributesCacheGenerator_Component_GetComponent_m6451(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1890);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1210 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1210 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6452(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void Component_t74_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m5690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Component_t74_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_t68_GameObject__ctor_m4380_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_CreatePrimitive_m4111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponent_m5692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 0, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5693(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponent_m6459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1890);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1210 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1210 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6452(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_get_transform_m234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_get_layer_m2006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_set_layer_m2007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_SetActive_m4114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m1705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_SendMessage_m5696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_t68_GameObject_SendMessage_m5696_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_t68_GameObject_SendMessage_m5696_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5697(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_AddComponent_m5698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1885);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t1114 * tmp;
		tmp = (TypeInferenceRuleAttribute_t1114 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t1114_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m6292(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void GameObject_t68_CustomAttributesCacheGenerator_GameObject_t68_GameObject_Internal_CreateGameObject_m5699_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5713(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_SetParent_m5715(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m5717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_get_root_m4404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_get_childCount_m2165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m2005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_Find_m4408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_lossyScale_m5720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Transform_t102_CustomAttributesCacheGenerator_Transform_GetChild_m2163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Time_t981_CustomAttributesCacheGenerator_Time_get_deltaTime_m5722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Time_t981_CustomAttributesCacheGenerator_Time_get_unscaledTime_m1758(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Time_t981_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m1798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Random_t982_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void PlayerPrefs_t983_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void PlayerPrefs_t983_CustomAttributesCacheGenerator_PlayerPrefs_t983_PlayerPrefs_GetString_m5726_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void PlayerPrefs_t983_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_Raycast_m5746_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_Raycast_m5746_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_Raycast_m1865_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_Raycast_m1865_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_RaycastAll_m1787_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_RaycastAll_m1787_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_RaycastAll_m5747_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_RaycastAll_m5747_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Physics_t985_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Collider_t80_CustomAttributesCacheGenerator_Collider_set_enabled_m143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void MeshCollider_t557_CustomAttributesCacheGenerator_MeshCollider_set_sharedMesh_m4123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_Raycast_m1866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_t392_Physics2D_Raycast_m5752_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_t392_Physics2D_Raycast_m5752_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_t392_Physics2D_Raycast_m5752_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("-Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t1111_il2cpp_TypeInfo_var;
void Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_t392_Physics2D_Raycast_m5752_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1882);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t1111 * tmp;
		tmp = (DefaultValueAttribute_t1111 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1111_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6287(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var;
void Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m1774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t1112 * tmp;
		tmp = (ExcludeFromDocsAttribute_t1112 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t1112_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m6291(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Collider2D_t394_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_Internal_CreateWebCamTexture_m5772(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t1063_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_t650_WebCamTexture_Internal_CreateWebCamTexture_m5772_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t1063_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1886);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t1063 * tmp;
		tmp = (WritableAttribute_t1063 *)il2cpp_codegen_object_new (WritableAttribute_t1063_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m6127(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_INTERNAL_CALL_Play_m5773(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_INTERNAL_CALL_Stop_m5774(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_get_isPlaying_m4232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_set_deviceName_m4234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_set_requestedFPS_m4235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_set_requestedWidth_m4236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_set_requestedHeight_m4237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_get_devices_m4391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_get_didUpdateThisFrame_m4231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void AnimationEvent_t995_CustomAttributesCacheGenerator_AnimationEvent_t995____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void AnimationCurve_t999_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void AnimationCurve_t999_CustomAttributesCacheGenerator_AnimationCurve_t999_AnimationCurve__ctor_m5798_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void AnimationCurve_t999_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void AnimationCurve_t999_CustomAttributesCacheGenerator_AnimationCurve_Init_m5802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t996_CustomAttributesCacheGenerator_AnimatorStateInfo_t996____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Animator_t373_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m2101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Animator_t373_CustomAttributesCacheGenerator_Animator_StringToHash_m5821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Animator_t373_CustomAttributesCacheGenerator_Animator_SetTriggerString_m5822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Animator_t373_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m5823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void CharacterInfo_t1005_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void CharacterInfo_t1005_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void CharacterInfo_t1005_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void CharacterInfo_t1005_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t456 * tmp;
		tmp = (ObsoleteAttribute_t456 *)il2cpp_codegen_object_new (ObsoleteAttribute_t456_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Font_t219_CustomAttributesCacheGenerator_Font_get_material_m2114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Font_t219_CustomAttributesCacheGenerator_Font_HasCharacter_m1985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Font_t219_CustomAttributesCacheGenerator_Font_get_dynamic_m2117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Font_t219_CustomAttributesCacheGenerator_Font_get_fontSize_m2119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t1006_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1209 * tmp;
		tmp = (EditorBrowsableAttribute_t1209 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6450(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_Init_m5851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m5852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m5855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m2001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m5856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m5857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m5858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m5859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m5860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m5861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m1978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m5862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m5863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m2025(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_renderMode_m1861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m2136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m1874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m2140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m1893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m2141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m1846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m1863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m1862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m1873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m1828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void Canvas_t227_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m2113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasGroup_t403_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m2091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasGroup_t403_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m5875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasGroup_t403_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m1845(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m5878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m1849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m2175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m1839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m5879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m5880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m1832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m1829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransformUtility_t405_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransformUtility_t405_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t1056_il2cpp_TypeInfo_var;
void RectTransformUtility_t405_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m1848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t1056_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1884);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t1056 * tmp;
		tmp = (WrapperlessIcall_t1056 *)il2cpp_codegen_object_new (WrapperlessIcall_t1056_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m6118(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Request_t1010_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Request_t1010_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Request_t1010_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Request_t1010_CustomAttributesCacheGenerator_Request_get_sourceId_m5889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Request_t1010_CustomAttributesCacheGenerator_Request_get_appId_m5890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Request_t1010_CustomAttributesCacheGenerator_Request_get_domain_m5891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Response_t1012_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Response_t1012_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Response_t1012_CustomAttributesCacheGenerator_Response_get_success_m5900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Response_t1012_CustomAttributesCacheGenerator_Response_set_success_m5901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Response_t1012_CustomAttributesCacheGenerator_Response_get_extendedInfo_m5902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Response_t1012_CustomAttributesCacheGenerator_Response_set_extendedInfo_m5903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m5908(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m5909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m5910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m5911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m5912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m5913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m5914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m5915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m5916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m5919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m5920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m5921(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m5922(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m5923(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m5924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m5925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m5926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m5927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m5928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m5929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m5930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1017_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1017_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1017_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m5934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1017_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m5935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1017_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m5936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchRequest_t1017_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m5937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m5940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m5941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m5942(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m5943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m5944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m5945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m5946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m5947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m5948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m5949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m5950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m5951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1019_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1019_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m5955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t1019_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m5956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1020_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1020_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1020_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m5959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1020_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m5960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1020_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m5961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void DropConnectionRequest_t1020_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m5962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m5965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m5966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m5967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m5968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m5969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m5970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m5971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m5972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m5975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m5976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m5977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m5978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m5979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m5980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m5984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m5985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_name_m5986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_name_m5987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m5988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m5989(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m5990(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m5991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m5992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m5993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m5994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m5995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m5996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m5997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m5998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchResponse_t1026_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchResponse_t1026_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void ListMatchResponse_t1026_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t1212_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t1027_il2cpp_TypeInfo_var;
void AppID_t1027_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1891);
		AppID_t1027_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1773);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1212 * tmp;
		tmp = (DefaultValueAttribute_t1212 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1212_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6470(tmp, Box(AppID_t1027_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t1212_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t1028_il2cpp_TypeInfo_var;
void SourceID_t1028_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1891);
		SourceID_t1028_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1772);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1212 * tmp;
		tmp = (DefaultValueAttribute_t1212 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1212_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6470(tmp, Box(SourceID_t1028_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t1212_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t1029_il2cpp_TypeInfo_var;
void NetworkID_t1029_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1891);
		NetworkID_t1029_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t1212 * tmp;
		tmp = (DefaultValueAttribute_t1212 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1212_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6470(tmp, Box(NetworkID_t1029_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t1212_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t1030_il2cpp_TypeInfo_var;
void NodeID_t1030_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1891);
		NodeID_t1030_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1778);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t1212 * tmp;
		tmp = (DefaultValueAttribute_t1212 *)il2cpp_codegen_object_new (DefaultValueAttribute_t1212_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m6470(tmp, Box(NodeID_t1030_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var;
void NetworkMatch_t1036_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t460 * tmp;
		tmp = (DebuggerHiddenAttribute_t460 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m2239(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1214_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1214_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t460 * tmp;
		tmp = (DebuggerHiddenAttribute_t460 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m2239(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1214_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t460 * tmp;
		tmp = (DebuggerHiddenAttribute_t460 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m2239(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t1214_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t460 * tmp;
		tmp = (DebuggerHiddenAttribute_t460 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t460_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m2239(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var;
void JsonArray_t1037_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1892);
		EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1215 * tmp;
		tmp = (GeneratedCodeAttribute_t1215 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t1209 * tmp;
		tmp = (EditorBrowsableAttribute_t1209 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6450(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void JsonObject_t1039_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1889);
		GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1892);
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1209 * tmp;
		tmp = (EditorBrowsableAttribute_t1209 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6450(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t1215 * tmp;
		tmp = (GeneratedCodeAttribute_t1215 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var;
void SimpleJson_t1042_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1892);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1215 * tmp;
		tmp = (GeneratedCodeAttribute_t1215 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var;
void SimpleJson_t1042_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1216 * tmp;
		tmp = (SuppressMessageAttribute_t1216 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6482(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6483(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var;
void SimpleJson_t1042_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1216 * tmp;
		tmp = (SuppressMessageAttribute_t1216 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6482(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var;
void SimpleJson_t1042_CustomAttributesCacheGenerator_SimpleJson_t1042____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1889);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t1209 * tmp;
		tmp = (EditorBrowsableAttribute_t1209 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t1209_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m6450(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1040_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1892);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1215 * tmp;
		tmp = (GeneratedCodeAttribute_t1215 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t1040_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1216 * tmp;
		tmp = (SuppressMessageAttribute_t1216 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6482(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6483(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1041_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1892);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1215 * tmp;
		tmp = (GeneratedCodeAttribute_t1215 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6481(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1041_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1216 * tmp;
		tmp = (SuppressMessageAttribute_t1216 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6482(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6483(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t1041_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6077(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t1216 * tmp;
		tmp = (SuppressMessageAttribute_t1216 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t1216_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m6482(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m6483(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var;
void ReflectionUtils_t1055_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1892);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t1215 * tmp;
		tmp = (GeneratedCodeAttribute_t1215 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t1215_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m6481(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void ReflectionUtils_t1055_CustomAttributesCacheGenerator_ReflectionUtils_t1055_ReflectionUtils_GetConstructorInfo_m6102_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void ReflectionUtils_t1055_CustomAttributesCacheGenerator_ReflectionUtils_t1055_ReflectionUtils_GetContructor_m6107_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void ReflectionUtils_t1055_CustomAttributesCacheGenerator_ReflectionUtils_t1055_ReflectionUtils_GetConstructorByReflection_m6109_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t471_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t1217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t471 * tmp;
		tmp = (DefaultMemberAttribute_t471 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t471_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m2282(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1048_CustomAttributesCacheGenerator_ConstructorDelegate_t1048_ConstructorDelegate_Invoke_m6087_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t465_il2cpp_TypeInfo_var;
void ConstructorDelegate_t1048_CustomAttributesCacheGenerator_ConstructorDelegate_t1048_ConstructorDelegate_BeginInvoke_m6088_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t465 * tmp;
		tmp = (ParamArrayAttribute_t465 *)il2cpp_codegen_object_new (ParamArrayAttribute_t465_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m2258(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1050_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1051_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1052_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1053_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1054_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t1057_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t464_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6509(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void RequireComponent_t116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void WritableAttribute_t1063_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t1064_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Achievement_t1079_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Achievement_t1079_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Achievement_t1079_CustomAttributesCacheGenerator_Achievement_get_id_m6160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Achievement_t1079_CustomAttributesCacheGenerator_Achievement_set_id_m6161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Achievement_t1079_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Achievement_t1079_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void AchievementDescription_t1080_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void AchievementDescription_t1080_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void AchievementDescription_t1080_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Score_t1081_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Score_t1081_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Score_t1081_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Score_t1081_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Score_t1081_CustomAttributesCacheGenerator_Score_get_value_m6182(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Score_t1081_CustomAttributesCacheGenerator_Score_set_value_m6183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_get_id_m6191(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_set_id_m6192(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_get_range_m6195(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_set_range_m6196(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t455 * tmp;
		tmp = (CompilerGeneratedAttribute_t455 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m2216(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void PropertyAttribute_t1091_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6509(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void TooltipAttribute_t468_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6509(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void SpaceAttribute_t466_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6509(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void RangeAttribute_t462_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6509(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void TextAreaAttribute_t469_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 256, NULL);
		AttributeUsageAttribute_set_Inherited_m6509(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void SelectionBaseAttribute_t467_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m6509(tmp, true, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var;
void StackTraceUtility_t1093_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1890);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1210 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1210 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6452(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var;
void StackTraceUtility_t1093_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1890);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1210 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1210 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6452(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var;
void StackTraceUtility_t1093_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1890);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1210 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1210 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t1210_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m6452(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t1094_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
void ArgumentCache_t1100_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
void ArgumentCache_t1100_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
void ArgumentCache_t1100_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ArgumentCache_t1100_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ArgumentCache_t1100_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ArgumentCache_t1100_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void PersistentCall_t1104_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("instance"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
void PersistentCall_t1104_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("methodName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
void PersistentCall_t1104_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("mode"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
void PersistentCall_t1104_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void PersistentCall_t1104_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
void PersistentCallGroup_t1106_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void UnityEventBase_t1109_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t453 * tmp;
		tmp = (FormerlySerializedAsAttribute_t453 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t453_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m2214(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void UnityEventBase_t1109_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t452_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t1110_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t452_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t452 * tmp;
		tmp = (AddComponentMenu_t452 *)il2cpp_codegen_object_new (AddComponentMenu_t452_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m2213(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t1111_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t1112_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t453_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m6510(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m6509(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t1114_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1894);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t1219 * tmp;
		tmp = (AttributeUsageAttribute_t1219 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1219_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m6508(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[785] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t896_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m5056,
	AssetBundleCreateRequest_t896_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m5057,
	AssetBundle_t898_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m5061,
	AssetBundle_t898_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m5062,
	AssetBundle_t898_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m5063,
	LayerMask_t202_CustomAttributesCacheGenerator_LayerMask_LayerToName_m5066,
	LayerMask_t202_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m5067,
	LayerMask_t202_CustomAttributesCacheGenerator_LayerMask_t202_LayerMask_GetMask_m5068_Arg0_ParameterInfo,
	RuntimePlatform_t902_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t902_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t902_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t902_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t902_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t904_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m5069,
	Coroutine_t271_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m5072,
	ScriptableObject_t907_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m5075,
	ScriptableObject_t907_CustomAttributesCacheGenerator_ScriptableObject_t907_ScriptableObject_Internal_CreateScriptableObject_m5075_Arg0_ParameterInfo,
	ScriptableObject_t907_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m5076,
	ScriptableObject_t907_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m5078,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m5083,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m5084,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m5085,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m5086,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m5087,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m5088,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m5089,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m5090,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m5091,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m5092,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m5093,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m5094,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m5095,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m5096,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m5097,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m5098,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m5099,
	GameCenterPlatform_t916_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m5103,
	GcLeaderboard_t918_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m5147,
	GcLeaderboard_t918_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m5148,
	GcLeaderboard_t918_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m5149,
	GcLeaderboard_t918_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m5150,
	MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_mesh_m4065,
	MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m4385,
	MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_get_sharedMesh_m222,
	MeshFilter_t101_CustomAttributesCacheGenerator_MeshFilter_set_sharedMesh_m4122,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_Internal_Create_m5151,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_t107_Mesh_Internal_Create_m5151_Arg0_ParameterInfo,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_Clear_m5152,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_t107_Mesh_Clear_m5152_Arg0_ParameterInfo,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_Clear_m4066,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_get_vertices_m223,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_set_vertices_m4067,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_set_normals_m4071,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_get_uv_m4070,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_set_uv_m4069,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_INTERNAL_get_bounds_m5153,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_RecalculateNormals_m4072,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_get_triangles_m224,
	Mesh_t107_CustomAttributesCacheGenerator_Mesh_set_triangles_m4068,
	Renderer_t77_CustomAttributesCacheGenerator_Renderer_set_enabled_m142,
	Renderer_t77_CustomAttributesCacheGenerator_Renderer_get_material_m4383,
	Renderer_t77_CustomAttributesCacheGenerator_Renderer_set_material_m4113,
	Renderer_t77_CustomAttributesCacheGenerator_Renderer_set_sharedMaterial_m182,
	Renderer_t77_CustomAttributesCacheGenerator_Renderer_get_materials_m181,
	Renderer_t77_CustomAttributesCacheGenerator_Renderer_set_sharedMaterials_m183,
	Renderer_t77_CustomAttributesCacheGenerator_Renderer_get_sortingLayerID_m1780,
	Renderer_t77_CustomAttributesCacheGenerator_Renderer_get_sortingOrder_m1781,
	Screen_t920_CustomAttributesCacheGenerator_Screen_get_width_m116,
	Screen_t920_CustomAttributesCacheGenerator_Screen_get_height_m117,
	Screen_t920_CustomAttributesCacheGenerator_Screen_get_dpi_m2139,
	Screen_t920_CustomAttributesCacheGenerator_Screen_get_autorotateToPortrait_m4197,
	Screen_t920_CustomAttributesCacheGenerator_Screen_set_autorotateToPortrait_m4201,
	Screen_t920_CustomAttributesCacheGenerator_Screen_get_autorotateToPortraitUpsideDown_m4198,
	Screen_t920_CustomAttributesCacheGenerator_Screen_set_autorotateToPortraitUpsideDown_m4202,
	Screen_t920_CustomAttributesCacheGenerator_Screen_get_autorotateToLandscapeLeft_m4195,
	Screen_t920_CustomAttributesCacheGenerator_Screen_set_autorotateToLandscapeLeft_m4199,
	Screen_t920_CustomAttributesCacheGenerator_Screen_get_autorotateToLandscapeRight_m4196,
	Screen_t920_CustomAttributesCacheGenerator_Screen_set_autorotateToLandscapeRight_m4200,
	Screen_t920_CustomAttributesCacheGenerator_Screen_get_orientation_m150,
	Screen_t920_CustomAttributesCacheGenerator_Screen_set_orientation_m4426,
	Screen_t920_CustomAttributesCacheGenerator_Screen_set_sleepTimeout_m4427,
	GL_t921_CustomAttributesCacheGenerator_GL_INTERNAL_CALL_Vertex_m5174,
	GL_t921_CustomAttributesCacheGenerator_GL_Begin_m229,
	GL_t921_CustomAttributesCacheGenerator_GL_End_m231,
	GL_t921_CustomAttributesCacheGenerator_GL_INTERNAL_CALL_MultMatrix_m5175,
	GL_t921_CustomAttributesCacheGenerator_GL_PushMatrix_m225,
	GL_t921_CustomAttributesCacheGenerator_GL_PopMatrix_m232,
	GL_t921_CustomAttributesCacheGenerator_GL_SetRevertBackfacing_m4455,
	GL_t921_CustomAttributesCacheGenerator_GL_Clear_m4136,
	GL_t921_CustomAttributesCacheGenerator_GL_t921_GL_Clear_m5176_Arg3_ParameterInfo,
	GL_t921_CustomAttributesCacheGenerator_GL_INTERNAL_CALL_Internal_Clear_m5178,
	GL_t921_CustomAttributesCacheGenerator_GL_IssuePluginEvent_m4216,
	Texture_t276_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m5180,
	Texture_t276_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m5181,
	Texture_t276_CustomAttributesCacheGenerator_Texture_set_filterMode_m4458,
	Texture_t276_CustomAttributesCacheGenerator_Texture_set_wrapMode_m4459,
	Texture_t276_CustomAttributesCacheGenerator_Texture_GetNativeTextureID_m4460,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m5184,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_Internal_Create_m5184_Arg0_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_get_format_m4150,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_get_whiteTexture_m1831,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixelBilinear_m1925,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_SetPixels_m4155,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_SetPixels_m5185_Arg1_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_SetPixels_m5186,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_SetPixels_m5186_Arg5_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_SetAllPixels32_m5187,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_SetPixels32_m4397,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_SetPixels32_m5188_Arg1_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixels_m4152,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_GetPixels_m5189_Arg0_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixels_m5190,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_GetPixels_m5190_Arg4_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m5191,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_GetPixels32_m5191_Arg0_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_GetPixels32_m4395,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_Apply_m5192,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_Apply_m5192_Arg0_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_Apply_m5192_Arg1_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_Apply_m4398,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_Resize_m4151,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_t223_Texture2D_ReadPixels_m4394_Arg3_ParameterInfo,
	Texture2D_t223_CustomAttributesCacheGenerator_Texture2D_INTERNAL_CALL_ReadPixels_m5193,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_GetTemporary_m5194,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_t754_RenderTexture_GetTemporary_m5194_Arg2_ParameterInfo,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_t754_RenderTexture_GetTemporary_m5194_Arg3_ParameterInfo,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_t754_RenderTexture_GetTemporary_m5194_Arg4_ParameterInfo,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_t754_RenderTexture_GetTemporary_m5194_Arg5_ParameterInfo,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_GetTemporary_m4386,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_ReleaseTemporary_m4396,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m5195,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m5196,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_set_depth_m4389,
	RenderTexture_t754_CustomAttributesCacheGenerator_RenderTexture_set_active_m4393,
	GUILayer_t924_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m5200,
	Gradient_t927_CustomAttributesCacheGenerator_Gradient_Init_m5204,
	Gradient_t927_CustomAttributesCacheGenerator_Gradient_Cleanup_m5205,
	GUI_t73_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t73_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t73_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m5212,
	GUI_t73_CustomAttributesCacheGenerator_GUI_set_changed_m5215,
	GUI_t73_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m5218,
	GUI_t73_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m5220,
	GUI_t73_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoWindow_m5223,
	GUILayoutUtility_t936_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m5235,
	GUILayoutUtility_t936_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5237,
	GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_get_systemCopyBuffer_m5268,
	GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_set_systemCopyBuffer_m5269,
	GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m5271,
	GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m5273,
	GUIUtility_t943_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m5277,
	GUISettings_t944_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t944_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t944_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t944_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t944_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t929_CustomAttributesCacheGenerator,
	GUISkin_t929_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t929_CustomAttributesCacheGenerator_m_box,
	GUISkin_t929_CustomAttributesCacheGenerator_m_button,
	GUISkin_t929_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t929_CustomAttributesCacheGenerator_m_label,
	GUISkin_t929_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t929_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t929_CustomAttributesCacheGenerator_m_window,
	GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t929_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t929_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t929_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t929_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t929_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t929_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t929_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t929_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t929_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t929_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t417_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t417_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t417_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t948_CustomAttributesCacheGenerator_GUIStyleState_Init_m5345,
	GUIStyleState_t948_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m5346,
	GUIStyleState_t948_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m5347,
	GUIStyleState_t948_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m5348,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_Init_m5353,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_Cleanup_m5354,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_left_m2156,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_set_left_m5355,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_right_m5356,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_set_right_m5357,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_top_m2157,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_set_top_m5358,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_bottom_m5359,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_set_bottom_m5360,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m2149,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_get_vertical_m2151,
	RectOffset_t327_CustomAttributesCacheGenerator_RectOffset_INTERNAL_CALL_Remove_m5362,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Init_m5367,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m5368,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_name_m5369,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_set_name_m5370,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m5372,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m5375,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m5376,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m5377,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m5378,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m5379,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m5380,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m5381,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Internal_GetLineHeight_m5382,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m5384,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5388,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m5390,
	GUIStyle_t935_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m5392,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m5395,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5397,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m2037,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m2038,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg1_ParameterInfo,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg2_ParameterInfo,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg3_ParameterInfo,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg4_ParameterInfo,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg5_ParameterInfo,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_t264_TouchScreenKeyboard_Open_m5398_Arg6_ParameterInfo,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m1954,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m1956,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_hideInput_m2036,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_active_m1953,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m2035,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m1972,
	TouchScreenKeyboard_t264_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_wasCanceled_m1968,
	Event_t272_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t272_CustomAttributesCacheGenerator_Event_Init_m5399,
	Event_t272_CustomAttributesCacheGenerator_Event_Cleanup_m5401,
	Event_t272_CustomAttributesCacheGenerator_Event_get_rawType_m1986,
	Event_t272_CustomAttributesCacheGenerator_Event_get_type_m5402,
	Event_t272_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m5404,
	Event_t272_CustomAttributesCacheGenerator_Event_get_modifiers_m1982,
	Event_t272_CustomAttributesCacheGenerator_Event_get_character_m1984,
	Event_t272_CustomAttributesCacheGenerator_Event_get_commandName_m5405,
	Event_t272_CustomAttributesCacheGenerator_Event_get_keyCode_m1983,
	Event_t272_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m5407,
	Event_t272_CustomAttributesCacheGenerator_Event_PopEvent_m1987,
	EventModifiers_t953_CustomAttributesCacheGenerator,
	Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawLine_m5414,
	Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawWireCube_m5415,
	Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_CALL_DrawCube_m5416,
	Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_color_m5417,
	Gizmos_t954_CustomAttributesCacheGenerator_Gizmos_INTERNAL_set_matrix_m5418,
	Vector2_t184_CustomAttributesCacheGenerator,
	Vector3_t110_CustomAttributesCacheGenerator,
	Color_t62_CustomAttributesCacheGenerator,
	Color32_t379_CustomAttributesCacheGenerator,
	Quaternion_t113_CustomAttributesCacheGenerator,
	Quaternion_t113_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m5438,
	Quaternion_t113_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m5439,
	Quaternion_t113_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToAxisAngleRad_m5442,
	Matrix4x4_t112_CustomAttributesCacheGenerator,
	Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m5452,
	Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m5454,
	Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m5456,
	Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m5459,
	Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m5468,
	Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m5471,
	Matrix4x4_t112_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m5472,
	Bounds_t289_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m5489,
	Bounds_t289_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m5492,
	Bounds_t289_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m5495,
	Bounds_t289_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m5499,
	Vector4_t371_CustomAttributesCacheGenerator,
	Mathf_t383_CustomAttributesCacheGenerator_Mathf_t383_Mathf_Max_m4359_Arg0_ParameterInfo,
	Mathf_t383_CustomAttributesCacheGenerator_Mathf_t383_Mathf_SmoothDamp_m2062_Arg4_ParameterInfo,
	Mathf_t383_CustomAttributesCacheGenerator_Mathf_t383_Mathf_SmoothDamp_m2062_Arg5_ParameterInfo,
	DrivenTransformProperties_t956_CustomAttributesCacheGenerator,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_rect_m5528,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMin_m5529,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMin_m5530,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchorMax_m5531,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchorMax_m5532,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_anchoredPosition_m5533,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_anchoredPosition_m5534,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_sizeDelta_m5535,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_sizeDelta_m5536,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_get_pivot_m5537,
	RectTransform_t225_CustomAttributesCacheGenerator_RectTransform_INTERNAL_set_pivot_m5538,
	Resources_t960_CustomAttributesCacheGenerator_Resources_Load_m5544,
	Resources_t960_CustomAttributesCacheGenerator_Resources_UnloadUnusedAssets_m4334,
	SerializePrivateVariables_t961_CustomAttributesCacheGenerator,
	Shader_t106_CustomAttributesCacheGenerator_Shader_Find_m4382,
	Shader_t106_CustomAttributesCacheGenerator_Shader_PropertyToID_m5546,
	Material_t60_CustomAttributesCacheGenerator_Material__ctor_m216,
	Material_t60_CustomAttributesCacheGenerator_Material_get_shader_m218,
	Material_t60_CustomAttributesCacheGenerator_Material_SetTexture_m5548,
	Material_t60_CustomAttributesCacheGenerator_Material_GetTexture_m5550,
	Material_t60_CustomAttributesCacheGenerator_Material_SetFloat_m5552,
	Material_t60_CustomAttributesCacheGenerator_Material_HasProperty_m5553,
	Material_t60_CustomAttributesCacheGenerator_Material_SetPass_m228,
	Material_t60_CustomAttributesCacheGenerator_Material_Internal_CreateWithString_m5554,
	Material_t60_CustomAttributesCacheGenerator_Material_t60_Material_Internal_CreateWithString_m5554_Arg0_ParameterInfo,
	Material_t60_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m5555,
	Material_t60_CustomAttributesCacheGenerator_Material_t60_Material_Internal_CreateWithShader_m5555_Arg0_ParameterInfo,
	Material_t60_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m5556,
	Material_t60_CustomAttributesCacheGenerator_Material_t60_Material_Internal_CreateWithMaterial_m5556_Arg0_ParameterInfo,
	SphericalHarmonicsL2_t962_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t962_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m5559,
	SphericalHarmonicsL2_t962_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m5562,
	SphericalHarmonicsL2_t962_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m5565,
	Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_rect_m1897,
	Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_pixelsPerUnit_m1892,
	Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_texture_m1889,
	Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_textureRect_m1922,
	Sprite_t245_CustomAttributesCacheGenerator_Sprite_get_border_m1890,
	DataUtility_t963_CustomAttributesCacheGenerator_DataUtility_GetInnerUV_m1908,
	DataUtility_t963_CustomAttributesCacheGenerator_DataUtility_GetOuterUV_m1907,
	DataUtility_t963_CustomAttributesCacheGenerator_DataUtility_GetPadding_m1896,
	DataUtility_t963_CustomAttributesCacheGenerator_DataUtility_Internal_GetMinSize_m5575,
	WWW_t964_CustomAttributesCacheGenerator_WWW_DestroyWWW_m5579,
	WWW_t964_CustomAttributesCacheGenerator_WWW_InitWWW_m5580,
	WWW_t964_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m5582,
	WWW_t964_CustomAttributesCacheGenerator_WWW_get_bytes_m5586,
	WWW_t964_CustomAttributesCacheGenerator_WWW_get_error_m5587,
	WWW_t964_CustomAttributesCacheGenerator_WWW_get_isDone_m5588,
	WWWForm_t966_CustomAttributesCacheGenerator_WWWForm_AddField_m5592,
	WWWForm_t966_CustomAttributesCacheGenerator_WWWForm_t966_WWWForm_AddField_m5593_Arg2_ParameterInfo,
	WWWTranscoder_t967_CustomAttributesCacheGenerator_WWWTranscoder_t967_WWWTranscoder_QPEncode_m5600_Arg1_ParameterInfo,
	WWWTranscoder_t967_CustomAttributesCacheGenerator_WWWTranscoder_t967_WWWTranscoder_SevenBitClean_m5603_Arg1_ParameterInfo,
	CacheIndex_t968_CustomAttributesCacheGenerator,
	UnityString_t969_CustomAttributesCacheGenerator_UnityString_t969_UnityString_Format_m5605_Arg1_ParameterInfo,
	AsyncOperation_t897_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m5607,
	Application_t971_CustomAttributesCacheGenerator_Application_Quit_m124,
	Application_t971_CustomAttributesCacheGenerator_Application_get_isPlaying_m2040,
	Application_t971_CustomAttributesCacheGenerator_Application_get_isEditor_m2043,
	Application_t971_CustomAttributesCacheGenerator_Application_get_platform_m190,
	Application_t971_CustomAttributesCacheGenerator_Application_set_runInBackground_m4468,
	Application_t971_CustomAttributesCacheGenerator_Application_get_dataPath_m4399,
	Application_t971_CustomAttributesCacheGenerator_Application_get_unityVersion_m4217,
	Behaviour_t438_CustomAttributesCacheGenerator_Behaviour_get_enabled_m233,
	Behaviour_t438_CustomAttributesCacheGenerator_Behaviour_set_enabled_m243,
	Behaviour_t438_CustomAttributesCacheGenerator_Behaviour_get_isActiveAndEnabled_m1704,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1771,
	Camera_t103_CustomAttributesCacheGenerator_Camera_set_nearClipPlane_m4377,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1770,
	Camera_t103_CustomAttributesCacheGenerator_Camera_set_farClipPlane_m4378,
	Camera_t103_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m4375,
	Camera_t103_CustomAttributesCacheGenerator_Camera_set_orthographic_m4374,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_depth_m1665,
	Camera_t103_CustomAttributesCacheGenerator_Camera_set_aspect_m4376,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1785,
	Camera_t103_CustomAttributesCacheGenerator_Camera_set_cullingMask_m4379,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_eventMask_m5619,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m5620,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m5621,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m5622,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_targetTexture_m4388,
	Camera_t103_CustomAttributesCacheGenerator_Camera_set_targetTexture_m4387,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_get_projectionMatrix_m5623,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_set_projectionMatrix_m5624,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_clearFlags_m5625,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m5626,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m5627,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m5628,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_main_m1784,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_current_m220,
	Camera_t103_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m5629,
	Camera_t103_CustomAttributesCacheGenerator_Camera_GetAllCameras_m5630,
	Camera_t103_CustomAttributesCacheGenerator_Camera_Render_m4390,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m5635,
	Camera_t103_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m5637,
	CameraCallback_t972_CustomAttributesCacheGenerator,
	Debug_t973_CustomAttributesCacheGenerator_Debug_Internal_Log_m5638,
	Debug_t973_CustomAttributesCacheGenerator_Debug_t973_Debug_Internal_Log_m5638_Arg2_ParameterInfo,
	Debug_t973_CustomAttributesCacheGenerator_Debug_Internal_LogException_m5639,
	Debug_t973_CustomAttributesCacheGenerator_Debug_t973_Debug_Internal_LogException_m5639_Arg1_ParameterInfo,
	Display_t976_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m5665,
	Display_t976_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m5666,
	Display_t976_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m5667,
	Display_t976_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m5668,
	Display_t976_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m5669,
	Display_t976_CustomAttributesCacheGenerator_Display_SetParamsImpl_m5670,
	Display_t976_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m5671,
	Display_t976_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m5672,
	MonoBehaviour_t10_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m5673,
	MonoBehaviour_t10_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5675,
	MonoBehaviour_t10_CustomAttributesCacheGenerator_MonoBehaviour_StopCoroutine_Auto_m5676,
	Input_t384_CustomAttributesCacheGenerator_Input_GetAxisRaw_m1756,
	Input_t384_CustomAttributesCacheGenerator_Input_GetButtonDown_m1755,
	Input_t384_CustomAttributesCacheGenerator_Input_GetMouseButton_m1764,
	Input_t384_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1725,
	Input_t384_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m1726,
	Input_t384_CustomAttributesCacheGenerator_Input_get_mousePosition_m1727,
	Input_t384_CustomAttributesCacheGenerator_Input_get_mouseScrollDelta_m1729,
	Input_t384_CustomAttributesCacheGenerator_Input_get_mousePresent_m1754,
	Input_t384_CustomAttributesCacheGenerator_Input_GetTouch_m1762,
	Input_t384_CustomAttributesCacheGenerator_Input_get_touchCount_m1763,
	Input_t384_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m2039,
	Input_t384_CustomAttributesCacheGenerator_Input_get_compositionString_m1958,
	Input_t384_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m5678,
	HideFlags_t979_CustomAttributesCacheGenerator,
	Object_t69_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m5680,
	Object_t69_CustomAttributesCacheGenerator_Object_Destroy_m5681,
	Object_t69_CustomAttributesCacheGenerator_Object_t69_Object_Destroy_m5681_Arg1_ParameterInfo,
	Object_t69_CustomAttributesCacheGenerator_Object_Destroy_m203,
	Object_t69_CustomAttributesCacheGenerator_Object_DestroyImmediate_m5682,
	Object_t69_CustomAttributesCacheGenerator_Object_t69_Object_DestroyImmediate_m5682_Arg1_ParameterInfo,
	Object_t69_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2042,
	Object_t69_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m4211,
	Object_t69_CustomAttributesCacheGenerator_Object_get_name_m2002,
	Object_t69_CustomAttributesCacheGenerator_Object_set_name_m2110,
	Object_t69_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m4083,
	Object_t69_CustomAttributesCacheGenerator_Object_set_hideFlags_m217,
	Object_t69_CustomAttributesCacheGenerator_Object_ToString_m252,
	Object_t69_CustomAttributesCacheGenerator_Object_Instantiate_m4279,
	Object_t69_CustomAttributesCacheGenerator_Object_FindObjectOfType_m112,
	Component_t74_CustomAttributesCacheGenerator_Component_get_transform_m204,
	Component_t74_CustomAttributesCacheGenerator_Component_get_gameObject_m194,
	Component_t74_CustomAttributesCacheGenerator_Component_GetComponent_m2164,
	Component_t74_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m5689,
	Component_t74_CustomAttributesCacheGenerator_Component_GetComponent_m6451,
	Component_t74_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m5690,
	Component_t74_CustomAttributesCacheGenerator_Component_GetComponentsForListInternal_m5691,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_t68_GameObject__ctor_m4380_Arg1_ParameterInfo,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_CreatePrimitive_m4111,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponent_m5692,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m5693,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponent_m6459,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m5694,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m5695,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_get_transform_m234,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_get_layer_m2006,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_set_layer_m2007,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_SetActive_m4114,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m1705,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_SendMessage_m5696,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_t68_GameObject_SendMessage_m5696_Arg1_ParameterInfo,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_t68_GameObject_SendMessage_m5696_Arg2_ParameterInfo,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m5697,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_AddComponent_m5698,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m5699,
	GameObject_t68_CustomAttributesCacheGenerator_GameObject_t68_GameObject_Internal_CreateGameObject_m5699_Arg0_ParameterInfo,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m5703,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m5704,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m5705,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m5706,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m5707,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m5708,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m5709,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m5710,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m5711,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m5712,
	Transform_t102_CustomAttributesCacheGenerator_Transform_get_parentInternal_m5713,
	Transform_t102_CustomAttributesCacheGenerator_Transform_set_parentInternal_m5714,
	Transform_t102_CustomAttributesCacheGenerator_Transform_SetParent_m5715,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m5716,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m5717,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m5718,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m5719,
	Transform_t102_CustomAttributesCacheGenerator_Transform_get_root_m4404,
	Transform_t102_CustomAttributesCacheGenerator_Transform_get_childCount_m2165,
	Transform_t102_CustomAttributesCacheGenerator_Transform_SetAsFirstSibling_m2005,
	Transform_t102_CustomAttributesCacheGenerator_Transform_Find_m4408,
	Transform_t102_CustomAttributesCacheGenerator_Transform_INTERNAL_get_lossyScale_m5720,
	Transform_t102_CustomAttributesCacheGenerator_Transform_GetChild_m2163,
	Time_t981_CustomAttributesCacheGenerator_Time_get_deltaTime_m5722,
	Time_t981_CustomAttributesCacheGenerator_Time_get_unscaledTime_m1758,
	Time_t981_CustomAttributesCacheGenerator_Time_get_unscaledDeltaTime_m1798,
	Random_t982_CustomAttributesCacheGenerator_Random_RandomRangeInt_m5724,
	PlayerPrefs_t983_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5726,
	PlayerPrefs_t983_CustomAttributesCacheGenerator_PlayerPrefs_t983_PlayerPrefs_GetString_m5726_Arg1_ParameterInfo,
	PlayerPrefs_t983_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m5727,
	Physics_t985_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m5745,
	Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_Raycast_m5746_Arg3_ParameterInfo,
	Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_Raycast_m5746_Arg4_ParameterInfo,
	Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_Raycast_m1865_Arg2_ParameterInfo,
	Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_Raycast_m1865_Arg3_ParameterInfo,
	Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_RaycastAll_m1787_Arg1_ParameterInfo,
	Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_RaycastAll_m1787_Arg2_ParameterInfo,
	Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_RaycastAll_m5747_Arg2_ParameterInfo,
	Physics_t985_CustomAttributesCacheGenerator_Physics_t985_Physics_RaycastAll_m5747_Arg3_ParameterInfo,
	Physics_t985_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m5748,
	Collider_t80_CustomAttributesCacheGenerator_Collider_set_enabled_m143,
	MeshCollider_t557_CustomAttributesCacheGenerator_MeshCollider_set_sharedMesh_m4123,
	Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_Internal_Raycast_m5751,
	Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_Raycast_m1866,
	Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_t392_Physics2D_Raycast_m5752_Arg2_ParameterInfo,
	Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_t392_Physics2D_Raycast_m5752_Arg3_ParameterInfo,
	Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_t392_Physics2D_Raycast_m5752_Arg4_ParameterInfo,
	Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_t392_Physics2D_Raycast_m5752_Arg5_ParameterInfo,
	Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m1774,
	Physics2D_t392_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m5753,
	Collider2D_t394_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m5755,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_Internal_CreateWebCamTexture_m5772,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_t650_WebCamTexture_Internal_CreateWebCamTexture_m5772_Arg0_ParameterInfo,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_INTERNAL_CALL_Play_m5773,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_INTERNAL_CALL_Stop_m5774,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_get_isPlaying_m4232,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_set_deviceName_m4234,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_set_requestedFPS_m4235,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_set_requestedWidth_m4236,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_set_requestedHeight_m4237,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_get_devices_m4391,
	WebCamTexture_t650_CustomAttributesCacheGenerator_WebCamTexture_get_didUpdateThisFrame_m4231,
	AnimationEvent_t995_CustomAttributesCacheGenerator_AnimationEvent_t995____data_PropertyInfo,
	AnimationCurve_t999_CustomAttributesCacheGenerator,
	AnimationCurve_t999_CustomAttributesCacheGenerator_AnimationCurve_t999_AnimationCurve__ctor_m5798_Arg0_ParameterInfo,
	AnimationCurve_t999_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m5800,
	AnimationCurve_t999_CustomAttributesCacheGenerator_AnimationCurve_Init_m5802,
	AnimatorStateInfo_t996_CustomAttributesCacheGenerator_AnimatorStateInfo_t996____nameHash_PropertyInfo,
	Animator_t373_CustomAttributesCacheGenerator_Animator_get_runtimeAnimatorController_m2101,
	Animator_t373_CustomAttributesCacheGenerator_Animator_StringToHash_m5821,
	Animator_t373_CustomAttributesCacheGenerator_Animator_SetTriggerString_m5822,
	Animator_t373_CustomAttributesCacheGenerator_Animator_ResetTriggerString_m5823,
	CharacterInfo_t1005_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t1005_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t1005_CustomAttributesCacheGenerator_width,
	CharacterInfo_t1005_CustomAttributesCacheGenerator_flipped,
	Font_t219_CustomAttributesCacheGenerator_Font_get_material_m2114,
	Font_t219_CustomAttributesCacheGenerator_Font_HasCharacter_m1985,
	Font_t219_CustomAttributesCacheGenerator_Font_get_dynamic_m2117,
	Font_t219_CustomAttributesCacheGenerator_Font_get_fontSize_m2119,
	FontTextureRebuildCallback_t1006_CustomAttributesCacheGenerator,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_Init_m5851,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m5852,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m5855,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m2001,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m5856,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m5857,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m5858,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m5859,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m5860,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m5861,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m1978,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m5862,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m5863,
	TextGenerator_t269_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m2025,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_renderMode_m1861,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_isRootCanvas_m2136,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_worldCamera_m1874,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_scaleFactor_m2118,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_set_scaleFactor_m2140,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_referencePixelsPerUnit_m1893,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_set_referencePixelsPerUnit_m2141,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_pixelPerfect_m1846,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_renderOrder_m1863,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_sortingOrder_m1862,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_get_cachedSortingLayerValue_m1873,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasMaterial_m1828,
	Canvas_t227_CustomAttributesCacheGenerator_Canvas_GetDefaultCanvasTextMaterial_m2113,
	CanvasGroup_t403_CustomAttributesCacheGenerator_CanvasGroup_get_interactable_m2091,
	CanvasGroup_t403_CustomAttributesCacheGenerator_CanvasGroup_get_blocksRaycasts_m5875,
	CanvasGroup_t403_CustomAttributesCacheGenerator_CanvasGroup_get_ignoreParentGroups_m1845,
	CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_INTERNAL_CALL_SetColor_m5878,
	CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_GetColor_m1849,
	CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_set_isMask_m2175,
	CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_SetMaterial_m1839,
	CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternal_m5879,
	CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_SetVerticesInternalArray_m5880,
	CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_Clear_m1832,
	CanvasRenderer_t226_CustomAttributesCacheGenerator_CanvasRenderer_get_absoluteDepth_m1829,
	RectTransformUtility_t405_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5882,
	RectTransformUtility_t405_CustomAttributesCacheGenerator_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5884,
	RectTransformUtility_t405_CustomAttributesCacheGenerator_RectTransformUtility_PixelAdjustRect_m1848,
	Request_t1010_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t1010_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t1010_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t1010_CustomAttributesCacheGenerator_Request_get_sourceId_m5889,
	Request_t1010_CustomAttributesCacheGenerator_Request_get_appId_m5890,
	Request_t1010_CustomAttributesCacheGenerator_Request_get_domain_m5891,
	Response_t1012_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t1012_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t1012_CustomAttributesCacheGenerator_Response_get_success_m5900,
	Response_t1012_CustomAttributesCacheGenerator_Response_set_success_m5901,
	Response_t1012_CustomAttributesCacheGenerator_Response_get_extendedInfo_m5902,
	Response_t1012_CustomAttributesCacheGenerator_Response_set_extendedInfo_m5903,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m5908,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m5909,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m5910,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m5911,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m5912,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m5913,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m5914,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m5915,
	CreateMatchRequest_t1015_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m5916,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m5919,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m5920,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m5921,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m5922,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m5923,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m5924,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m5925,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m5926,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m5927,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m5928,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m5929,
	CreateMatchResponse_t1016_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m5930,
	JoinMatchRequest_t1017_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t1017_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t1017_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m5934,
	JoinMatchRequest_t1017_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m5935,
	JoinMatchRequest_t1017_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m5936,
	JoinMatchRequest_t1017_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m5937,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m5940,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m5941,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m5942,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m5943,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m5944,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m5945,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m5946,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m5947,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m5948,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m5949,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m5950,
	JoinMatchResponse_t1018_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m5951,
	DestroyMatchRequest_t1019_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t1019_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m5955,
	DestroyMatchRequest_t1019_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m5956,
	DropConnectionRequest_t1020_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t1020_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t1020_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m5959,
	DropConnectionRequest_t1020_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m5960,
	DropConnectionRequest_t1020_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m5961,
	DropConnectionRequest_t1020_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m5962,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m5965,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m5966,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m5967,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m5968,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m5969,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m5970,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m5971,
	ListMatchRequest_t1021_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m5972,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m5975,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m5976,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m5977,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m5978,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m5979,
	MatchDirectConnectInfo_t1022_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m5980,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m5984,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m5985,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_name_m5986,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_name_m5987,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m5988,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m5989,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m5990,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m5991,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m5992,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m5993,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m5994,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m5995,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m5996,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m5997,
	MatchDesc_t1024_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m5998,
	ListMatchResponse_t1026_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t1026_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m6002,
	ListMatchResponse_t1026_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m6003,
	AppID_t1027_CustomAttributesCacheGenerator,
	SourceID_t1028_CustomAttributesCacheGenerator,
	NetworkID_t1029_CustomAttributesCacheGenerator,
	NodeID_t1030_CustomAttributesCacheGenerator,
	NetworkMatch_t1036_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m6471,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1214_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1214_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6477,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1214_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m6478,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t1214_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m6480,
	JsonArray_t1037_CustomAttributesCacheGenerator,
	JsonObject_t1039_CustomAttributesCacheGenerator,
	SimpleJson_t1042_CustomAttributesCacheGenerator,
	SimpleJson_t1042_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m6047,
	SimpleJson_t1042_CustomAttributesCacheGenerator_SimpleJson_NextToken_m6059,
	SimpleJson_t1042_CustomAttributesCacheGenerator_SimpleJson_t1042____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t1040_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t1040_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m6484,
	PocoJsonSerializerStrategy_t1041_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t1041_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m6076,
	PocoJsonSerializerStrategy_t1041_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m6077,
	ReflectionUtils_t1055_CustomAttributesCacheGenerator,
	ReflectionUtils_t1055_CustomAttributesCacheGenerator_ReflectionUtils_t1055_ReflectionUtils_GetConstructorInfo_m6102_Arg1_ParameterInfo,
	ReflectionUtils_t1055_CustomAttributesCacheGenerator_ReflectionUtils_t1055_ReflectionUtils_GetContructor_m6107_Arg1_ParameterInfo,
	ReflectionUtils_t1055_CustomAttributesCacheGenerator_ReflectionUtils_t1055_ReflectionUtils_GetConstructorByReflection_m6109_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t1217_CustomAttributesCacheGenerator,
	ConstructorDelegate_t1048_CustomAttributesCacheGenerator_ConstructorDelegate_t1048_ConstructorDelegate_Invoke_m6087_Arg0_ParameterInfo,
	ConstructorDelegate_t1048_CustomAttributesCacheGenerator_ConstructorDelegate_t1048_ConstructorDelegate_BeginInvoke_m6088_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t1050_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1051_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t1052_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t1053_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t1054_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t1057_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t464_CustomAttributesCacheGenerator,
	RequireComponent_t116_CustomAttributesCacheGenerator,
	WritableAttribute_t1063_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t1064_CustomAttributesCacheGenerator,
	Achievement_t1079_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t1079_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t1079_CustomAttributesCacheGenerator_Achievement_get_id_m6160,
	Achievement_t1079_CustomAttributesCacheGenerator_Achievement_set_id_m6161,
	Achievement_t1079_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m6162,
	Achievement_t1079_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m6163,
	AchievementDescription_t1080_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t1080_CustomAttributesCacheGenerator_AchievementDescription_get_id_m6170,
	AchievementDescription_t1080_CustomAttributesCacheGenerator_AchievementDescription_set_id_m6171,
	Score_t1081_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t1081_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t1081_CustomAttributesCacheGenerator_Score_get_leaderboardID_m6180,
	Score_t1081_CustomAttributesCacheGenerator_Score_set_leaderboardID_m6181,
	Score_t1081_CustomAttributesCacheGenerator_Score_get_value_m6182,
	Score_t1081_CustomAttributesCacheGenerator_Score_set_value_m6183,
	Leaderboard_t917_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t917_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t917_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t917_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_get_id_m6191,
	Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_set_id_m6192,
	Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m6193,
	Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m6194,
	Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_get_range_m6195,
	Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_set_range_m6196,
	Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m6197,
	Leaderboard_t917_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m6198,
	PropertyAttribute_t1091_CustomAttributesCacheGenerator,
	TooltipAttribute_t468_CustomAttributesCacheGenerator,
	SpaceAttribute_t466_CustomAttributesCacheGenerator,
	RangeAttribute_t462_CustomAttributesCacheGenerator,
	TextAreaAttribute_t469_CustomAttributesCacheGenerator,
	SelectionBaseAttribute_t467_CustomAttributesCacheGenerator,
	StackTraceUtility_t1093_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m6211,
	StackTraceUtility_t1093_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m6214,
	StackTraceUtility_t1093_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m6216,
	SharedBetweenAnimatorsAttribute_t1094_CustomAttributesCacheGenerator,
	ArgumentCache_t1100_CustomAttributesCacheGenerator_m_ObjectArgument,
	ArgumentCache_t1100_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	ArgumentCache_t1100_CustomAttributesCacheGenerator_m_IntArgument,
	ArgumentCache_t1100_CustomAttributesCacheGenerator_m_FloatArgument,
	ArgumentCache_t1100_CustomAttributesCacheGenerator_m_StringArgument,
	ArgumentCache_t1100_CustomAttributesCacheGenerator_m_BoolArgument,
	PersistentCall_t1104_CustomAttributesCacheGenerator_m_Target,
	PersistentCall_t1104_CustomAttributesCacheGenerator_m_MethodName,
	PersistentCall_t1104_CustomAttributesCacheGenerator_m_Mode,
	PersistentCall_t1104_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t1104_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t1106_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t1109_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t1109_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t1110_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t1111_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t1112_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t453_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t1114_CustomAttributesCacheGenerator,
};
