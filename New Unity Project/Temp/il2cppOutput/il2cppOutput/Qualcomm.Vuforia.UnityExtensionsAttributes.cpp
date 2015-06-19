#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttribute.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var;
extern TypeInfo* DebuggableAttribute_t867_il2cpp_TypeInfo_var;
extern TypeInfo* CompilationRelaxationsAttribute_t868_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t869_il2cpp_TypeInfo_var;
void g_Qualcomm_Vuforia_UnityExtensions_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1199);
		DebuggableAttribute_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1200);
		CompilationRelaxationsAttribute_t868_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1201);
		RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		ExtensionAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1202);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 10;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Qualcomm.Vuforia.UnityExtensions.Eyewear"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t867 * tmp;
		tmp = (DebuggableAttribute_t867 *)il2cpp_codegen_object_new (DebuggableAttribute_t867_il2cpp_TypeInfo_var);
		DebuggableAttribute__ctor_m4471(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t868 * tmp;
		tmp = (CompilationRelaxationsAttribute_t868 *)il2cpp_codegen_object_new (CompilationRelaxationsAttribute_t868_il2cpp_TypeInfo_var);
		CompilationRelaxationsAttribute__ctor_m4472(tmp, 8, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t115 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t115 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m245(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m246(tmp, true, NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Qualcomm.Vuforia.UnityExtensions.NUnitTests"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Qualcomm.Vuforia.UnityExtensions.Editor"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t869 * tmp;
		tmp = (ExtensionAttribute_t869 *)il2cpp_codegen_object_new (ExtensionAttribute_t869_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4473(tmp, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Qualcomm.Vuforia.UnityExtensions.Premium.Editor"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Qualcomm.Vuforia.UnityExtensions.Premium"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t866 * tmp;
		tmp = (InternalsVisibleToAttribute_t866 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t866_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m4470(tmp, il2cpp_codegen_string_new_wrapper("Qualcomm.Vuforia.UnityExtensions.UnitTests"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void BackgroundPlaneAbstractBehaviour_t2_CustomAttributesCacheGenerator_mNumDivisions(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExtensionAttribute_t869_il2cpp_TypeInfo_var;
void UnityCameraExtensions_t531_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExtensionAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1202);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExtensionAttribute_t869 * tmp;
		tmp = (ExtensionAttribute_t869 *)il2cpp_codegen_object_new (ExtensionAttribute_t869_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4473(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExtensionAttribute_t869_il2cpp_TypeInfo_var;
void UnityCameraExtensions_t531_CustomAttributesCacheGenerator_UnityCameraExtensions_GetPixelHeightInt_m2434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExtensionAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1202);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExtensionAttribute_t869 * tmp;
		tmp = (ExtensionAttribute_t869 *)il2cpp_codegen_object_new (ExtensionAttribute_t869_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4473(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExtensionAttribute_t869_il2cpp_TypeInfo_var;
void UnityCameraExtensions_t531_CustomAttributesCacheGenerator_UnityCameraExtensions_GetPixelWidthInt_m2435(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExtensionAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1202);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExtensionAttribute_t869 * tmp;
		tmp = (ExtensionAttribute_t869 *)il2cpp_codegen_object_new (ExtensionAttribute_t869_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4473(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExtensionAttribute_t869_il2cpp_TypeInfo_var;
void UnityCameraExtensions_t531_CustomAttributesCacheGenerator_UnityCameraExtensions_GetMaxDepthForVideoBackground_m2436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExtensionAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1202);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExtensionAttribute_t869 * tmp;
		tmp = (ExtensionAttribute_t869 *)il2cpp_codegen_object_new (ExtensionAttribute_t869_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4473(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExtensionAttribute_t869_il2cpp_TypeInfo_var;
void UnityCameraExtensions_t531_CustomAttributesCacheGenerator_UnityCameraExtensions_GetMinDepthForVideoBackground_m2437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExtensionAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1202);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExtensionAttribute_t869 * tmp;
		tmp = (ExtensionAttribute_t869 *)il2cpp_codegen_object_new (ExtensionAttribute_t869_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m4473(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void TrackableBehaviour_t15_CustomAttributesCacheGenerator_mTrackableName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void TrackableBehaviour_t15_CustomAttributesCacheGenerator_mPreviousScale(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void TrackableBehaviour_t15_CustomAttributesCacheGenerator_mPreserveChildSize(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void TrackableBehaviour_t15_CustomAttributesCacheGenerator_mInitializedInEditor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mDataSetPath(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mExtendedTracking(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mInitializeSmartTerrain(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mReconstructionToInitialize(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderBoundsMin(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderBoundsMax(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mIsSmartTerrainOccluderOffset(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderOffset(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderRotation(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderLockedInPlace(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mAutoSetOccluderFromTargetSize(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mAspectRatioXY(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mAspectRatioXZ(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mShowBoundingBox(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mBBoxMin(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mBBoxMax(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mPreviewImage(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void TrackableImpl_t544_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
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
void TrackableImpl_t544_CustomAttributesCacheGenerator_U3CIDU3Ek__BackingField(CustomAttributesCache* cache)
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
void TrackableImpl_t544_CustomAttributesCacheGenerator_TrackableImpl_get_Name_m2495(CustomAttributesCache* cache)
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
void TrackableImpl_t544_CustomAttributesCacheGenerator_TrackableImpl_set_Name_m2496(CustomAttributesCache* cache)
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
void TrackableImpl_t544_CustomAttributesCacheGenerator_TrackableImpl_get_ID_m2497(CustomAttributesCache* cache)
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
void TrackableImpl_t544_CustomAttributesCacheGenerator_TrackableImpl_set_ID_m2498(CustomAttributesCache* cache)
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
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
// Vuforia.ReconstructionAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ReconstructionAbstr.h"
extern const Il2CppType* ReconstructionAbstractBehaviour_t39_0_0_0_var;
extern TypeInfo* RequireComponent_t116_il2cpp_TypeInfo_var;
void ReconstructionFromTargetAbstractBehaviour_t41_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReconstructionAbstractBehaviour_t39_0_0_0_var = il2cpp_codegen_type_from_index(134);
		RequireComponent_t116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RequireComponent_t116 * tmp;
		tmp = (RequireComponent_t116 *)il2cpp_codegen_object_new (RequireComponent_t116_il2cpp_TypeInfo_var);
		RequireComponent__ctor_m248(tmp, il2cpp_codegen_type_get_object(ReconstructionAbstractBehaviour_t39_0_0_0_var), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void SmartTerrainTrackableBehaviour_t558_CustomAttributesCacheGenerator_mMeshFilterToUpdate(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void SmartTerrainTrackableBehaviour_t558_CustomAttributesCacheGenerator_mMeshColliderToUpdate(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void SmartTerrainTrackerAbstractBehaviour_t43_CustomAttributesCacheGenerator_mAutoInitTracker(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void SmartTerrainTrackerAbstractBehaviour_t43_CustomAttributesCacheGenerator_mAutoStartTracker(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void SmartTerrainTrackerAbstractBehaviour_t43_CustomAttributesCacheGenerator_mAutoInitBuilder(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void SmartTerrainTrackerAbstractBehaviour_t43_CustomAttributesCacheGenerator_mSceneUnitsToMillimeter(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void CylinderTargetAbstractBehaviour_t6_CustomAttributesCacheGenerator_mTopDiameterRatio(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void CylinderTargetAbstractBehaviour_t6_CustomAttributesCacheGenerator_mBottomDiameterRatio(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void DataSet_t561_CustomAttributesCacheGenerator_DataSet_Exists_m2589(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("DataSet.StorageType is deprecated, please use the QCARUnity.StorageType version of the Exists method instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void DataSet_t561_CustomAttributesCacheGenerator_DataSet_Load_m4617(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("DataSet.StorageType is deprecated, please use the QCARUnity.StorageType version of the Load method instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void DataSetLoadAbstractBehaviour_t8_CustomAttributesCacheGenerator_mDataSetsToLoad(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void DataSetLoadAbstractBehaviour_t8_CustomAttributesCacheGenerator_mDataSetsToActivate(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void DataSetLoadAbstractBehaviour_t8_CustomAttributesCacheGenerator_mExternalDatasetRoots(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_U3CCenterU3Ek__BackingField(CustomAttributesCache* cache)
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
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_U3CHalfExtentsU3Ek__BackingField(CustomAttributesCache* cache)
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
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_U3CRotationU3Ek__BackingField(CustomAttributesCache* cache)
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
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_get_Center_m2597(CustomAttributesCache* cache)
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
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_set_Center_m2598(CustomAttributesCache* cache)
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
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_get_HalfExtents_m2599(CustomAttributesCache* cache)
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
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_set_HalfExtents_m2600(CustomAttributesCache* cache)
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
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_get_Rotation_m2601(CustomAttributesCache* cache)
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
void OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_set_Rotation_m2602(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_U3CCenterU3Ek__BackingField(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_U3CHalfExtentsU3Ek__BackingField(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_U3CRotationYU3Ek__BackingField(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_get_Center_m2604(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_set_Center_m2605(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_get_HalfExtents_m2606(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_set_HalfExtents_m2607(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_get_RotationY_m2608(CustomAttributesCache* cache)
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
void OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_set_RotationY_m2609(CustomAttributesCache* cache)
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
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void DataSetImpl_t545_CustomAttributesCacheGenerator_DataSetImpl_Load_m2673(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("The DataSet.StorageType enumeration is deprecated, please use QCARUnity.StorageType instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void Tracker_t590_CustomAttributesCacheGenerator_U3CIsActiveU3Ek__BackingField(CustomAttributesCache* cache)
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
void Tracker_t590_CustomAttributesCacheGenerator_Tracker_get_IsActive_m2726(CustomAttributesCache* cache)
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
void Tracker_t590_CustomAttributesCacheGenerator_Tracker_set_IsActive_m2727(CustomAttributesCache* cache)
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
void MarkerImpl_t595_CustomAttributesCacheGenerator_U3CMarkerIDU3Ek__BackingField(CustomAttributesCache* cache)
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
void MarkerImpl_t595_CustomAttributesCacheGenerator_MarkerImpl_get_MarkerID_m2744(CustomAttributesCache* cache)
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
void MarkerImpl_t595_CustomAttributesCacheGenerator_MarkerImpl_set_MarkerID_m2745(CustomAttributesCache* cache)
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
void QCARManagerImpl_t628_CustomAttributesCacheGenerator_U3CVideoBackgroundTextureSetU3Ek__BackingField(CustomAttributesCache* cache)
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
void QCARManagerImpl_t628_CustomAttributesCacheGenerator_QCARManagerImpl_set_VideoBackgroundTextureSet_m2795(CustomAttributesCache* cache)
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
void QCARManagerImpl_t628_CustomAttributesCacheGenerator_QCARManagerImpl_get_VideoBackgroundTextureSet_m2796(CustomAttributesCache* cache)
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
void U3CU3Ec__DisplayClass3_t623_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void SmartTerrainTrackableImpl_t637_CustomAttributesCacheGenerator_U3CParentU3Ek__BackingField(CustomAttributesCache* cache)
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
void SmartTerrainTrackableImpl_t637_CustomAttributesCacheGenerator_SmartTerrainTrackableImpl_get_Parent_m2841(CustomAttributesCache* cache)
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
void SmartTerrainTrackableImpl_t637_CustomAttributesCacheGenerator_SmartTerrainTrackableImpl_set_Parent_m2842(CustomAttributesCache* cache)
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
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void WordList_t646_CustomAttributesCacheGenerator_WordList_LoadWordListFile_m4829(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("DataSet.StorageType is obsolete, please use the QCARUnity.StorageType enum overloaded method instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void WordList_t646_CustomAttributesCacheGenerator_WordList_AddWordsFromFile_m4832(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("DataSet.StorageType is obsolete, please use the QCARUnity.StorageType enum overloaded method instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void WordList_t646_CustomAttributesCacheGenerator_WordList_LoadFilterListFile_m4841(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("DataSet.StorageType is obsolete, please use the QCARUnity.StorageType enum overloaded method instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void WordListImpl_t666_CustomAttributesCacheGenerator_WordListImpl_LoadWordListFile_m2936(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("DataSet.StorageType is obsolete, please use the QCARUnity.StorageType enum overloaded method instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void WordListImpl_t666_CustomAttributesCacheGenerator_WordListImpl_AddWordsFromFile_m2939(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("DataSet.StorageType is obsolete, please use the QCARUnity.StorageType enum overloaded method instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void WordListImpl_t666_CustomAttributesCacheGenerator_WordListImpl_LoadFilterListFile_m2948(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("DataSet.StorageType is obsolete, please use the QCARUnity.StorageType enum overloaded method instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void ISmartTerrainEventHandler_t745_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("This interface will be removed with the next Vuforia release. Please use ReconstructionBehaviour.Register...Callback instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// Vuforia.QCARAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio.h"
extern const Il2CppType* QCARAbstractBehaviour_t38_0_0_0_var;
extern TypeInfo* RequireComponent_t116_il2cpp_TypeInfo_var;
void KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QCARAbstractBehaviour_t38_0_0_0_var = il2cpp_codegen_type_from_index(3);
		RequireComponent_t116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RequireComponent_t116 * tmp;
		tmp = (RequireComponent_t116 *)il2cpp_codegen_object_new (RequireComponent_t116_il2cpp_TypeInfo_var);
		RequireComponent__ctor_m248(tmp, il2cpp_codegen_type_get_object(QCARAbstractBehaviour_t38_0_0_0_var), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepARCameraAlive(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepTrackableBehavioursAlive(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepTextRecoBehaviourAlive(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepUDTBuildingBehaviourAlive(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepCloudRecoBehaviourAlive(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepSmartTerrainAlive(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mInitializedInEditor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mMaximumExtentEnabled(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mMaximumExtent(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mAutomaticStart(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mNavMeshUpdates(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mNavMeshPadding(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m3752(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("This ISmartTerrainEventHandler interface will be removed with the next Vuforia release. Please use ReconstructionBehaviour.Register...Callback instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void PropAbstractBehaviour_t36_CustomAttributesCacheGenerator_mBoxColliderToUpdate(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void TrackableSourceImpl_t694_CustomAttributesCacheGenerator_U3CTrackableSourcePtrU3Ek__BackingField(CustomAttributesCache* cache)
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
void TrackableSourceImpl_t694_CustomAttributesCacheGenerator_TrackableSourceImpl_get_TrackableSourcePtr_m3838(CustomAttributesCache* cache)
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
void TrackableSourceImpl_t694_CustomAttributesCacheGenerator_TrackableSourceImpl_set_TrackableSourcePtr_m3839(CustomAttributesCache* cache)
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
void WebCamImpl_t577_CustomAttributesCacheGenerator_U3CIsTextureSizeAvailableU3Ek__BackingField(CustomAttributesCache* cache)
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
void WebCamImpl_t577_CustomAttributesCacheGenerator_WebCamImpl_get_IsTextureSizeAvailable_m3864(CustomAttributesCache* cache)
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
void WebCamImpl_t577_CustomAttributesCacheGenerator_WebCamImpl_set_IsTextureSizeAvailable_m3865(CustomAttributesCache* cache)
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
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void ITrackerEventHandler_t756_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("This interface will be removed with the next Vuforia release. Please use QCARBehaviour.RegisterQCARStartedCallback and RegisterTrackablesUpdatedCallback instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void ImageTargetAbstractBehaviour_t21_CustomAttributesCacheGenerator_mAspectRatio(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void ImageTargetAbstractBehaviour_t21_CustomAttributesCacheGenerator_mImageTargetType(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void MarkerAbstractBehaviour_t29_CustomAttributesCacheGenerator_mMarkerID(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_VuforiaLicenseKey(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mCameraOffset(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mAutoAdjustStereoCameraSkewing(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mSceneScaleFactor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_CameraDeviceModeSetting(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_MaxSimultaneousImageTargets(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_MaxSimultaneousObjectTargets(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_UseDelayedLoadingObjectTargets(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_CameraDirection(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_MirrorVideoBackground(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mWorldCenterMode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mWorldCenter(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mPrimaryCamera(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mSecondaryCamera(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t456_il2cpp_TypeInfo_var;
void QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_QCARAbstractBehaviour_RegisterTrackerEventHandler_m3927(CustomAttributesCache* cache)
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
		ObsoleteAttribute__ctor_m2217(tmp, il2cpp_codegen_string_new_wrapper("The ITrackerEventHandler interface will be removed with the next Vuforia release. Please use QCARBehaviour.RegisterQCARStartedCallback and RegisterTrackablesUpdatedCallback instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mWordListFile(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mCustomWordListFile(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mAdditionalCustomWords(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mFilterMode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mFilterListFile(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mAdditionalFilterWords(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mWordPrefabCreationMode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mMaximumWordInstances(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern const Il2CppType* Camera_t103_0_0_0_var;
extern TypeInfo* RequireComponent_t116_il2cpp_TypeInfo_var;
void VideoBackgroundAbstractBehaviour_t53_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t103_0_0_0_var = il2cpp_codegen_type_from_index(48);
		RequireComponent_t116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RequireComponent_t116 * tmp;
		tmp = (RequireComponent_t116 *)il2cpp_codegen_object_new (RequireComponent_t116_il2cpp_TypeInfo_var);
		RequireComponent__ctor_m248(tmp, il2cpp_codegen_type_get_object(Camera_t103_0_0_0_var), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void VideoBackgroundAbstractBehaviour_t53_CustomAttributesCacheGenerator_U3CVideoBackGroundMirroredU3Ek__BackingField(CustomAttributesCache* cache)
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
void VideoBackgroundAbstractBehaviour_t53_CustomAttributesCacheGenerator_VideoBackgroundAbstractBehaviour_get_VideoBackGroundMirrored_m4007(CustomAttributesCache* cache)
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
void VideoBackgroundAbstractBehaviour_t53_CustomAttributesCacheGenerator_VideoBackgroundAbstractBehaviour_set_VideoBackGroundMirrored_m4008(CustomAttributesCache* cache)
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mSensitivity(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mHasUpdatedPose(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t454 * tmp;
		tmp = (SerializeField_t454 *)il2cpp_codegen_object_new (SerializeField_t454_il2cpp_TypeInfo_var);
		SerializeField__ctor_m2215(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mPrevTransform(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mPrevParent(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
void WebCamAbstractBehaviour_t59_CustomAttributesCacheGenerator_mPlayModeRenderVideo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
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
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void WebCamAbstractBehaviour_t59_CustomAttributesCacheGenerator_mDeviceNameSetInEditor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void WebCamAbstractBehaviour_t59_CustomAttributesCacheGenerator_mFlipHorizontally(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void WebCamAbstractBehaviour_t59_CustomAttributesCacheGenerator_mTurnOffWebCam(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void WordAbstractBehaviour_t65_CustomAttributesCacheGenerator_mMode(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t454_il2cpp_TypeInfo_var;
extern TypeInfo* HideInInspector_t870_il2cpp_TypeInfo_var;
void WordAbstractBehaviour_t65_CustomAttributesCacheGenerator_mSpecificWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		HideInInspector_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1203);
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
		HideInInspector_t870 * tmp;
		tmp = (HideInInspector_t870 *)il2cpp_codegen_object_new (HideInInspector_t870_il2cpp_TypeInfo_var);
		HideInInspector__ctor_m4487(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t455_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3EU7B66DCC020U2DEBD6U2D4DBAU2DA757U2D272BEBA33044U7D_t727_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Qualcomm_Vuforia_UnityExtensions_Assembly_AttributeGenerators[152] = 
{
	NULL,
	g_Qualcomm_Vuforia_UnityExtensions_Assembly_CustomAttributesCacheGenerator,
	BackgroundPlaneAbstractBehaviour_t2_CustomAttributesCacheGenerator_mNumDivisions,
	UnityCameraExtensions_t531_CustomAttributesCacheGenerator,
	UnityCameraExtensions_t531_CustomAttributesCacheGenerator_UnityCameraExtensions_GetPixelHeightInt_m2434,
	UnityCameraExtensions_t531_CustomAttributesCacheGenerator_UnityCameraExtensions_GetPixelWidthInt_m2435,
	UnityCameraExtensions_t531_CustomAttributesCacheGenerator_UnityCameraExtensions_GetMaxDepthForVideoBackground_m2436,
	UnityCameraExtensions_t531_CustomAttributesCacheGenerator_UnityCameraExtensions_GetMinDepthForVideoBackground_m2437,
	TrackableBehaviour_t15_CustomAttributesCacheGenerator_mTrackableName,
	TrackableBehaviour_t15_CustomAttributesCacheGenerator_mPreviousScale,
	TrackableBehaviour_t15_CustomAttributesCacheGenerator_mPreserveChildSize,
	TrackableBehaviour_t15_CustomAttributesCacheGenerator_mInitializedInEditor,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mDataSetPath,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mExtendedTracking,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mInitializeSmartTerrain,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mReconstructionToInitialize,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderBoundsMin,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderBoundsMax,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mIsSmartTerrainOccluderOffset,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderOffset,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderRotation,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mSmartTerrainOccluderLockedInPlace,
	DataSetTrackableBehaviour_t534_CustomAttributesCacheGenerator_mAutoSetOccluderFromTargetSize,
	ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mAspectRatioXY,
	ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mAspectRatioXZ,
	ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mShowBoundingBox,
	ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mBBoxMin,
	ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mBBoxMax,
	ObjectTargetAbstractBehaviour_t35_CustomAttributesCacheGenerator_mPreviewImage,
	TrackableImpl_t544_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	TrackableImpl_t544_CustomAttributesCacheGenerator_U3CIDU3Ek__BackingField,
	TrackableImpl_t544_CustomAttributesCacheGenerator_TrackableImpl_get_Name_m2495,
	TrackableImpl_t544_CustomAttributesCacheGenerator_TrackableImpl_set_Name_m2496,
	TrackableImpl_t544_CustomAttributesCacheGenerator_TrackableImpl_get_ID_m2497,
	TrackableImpl_t544_CustomAttributesCacheGenerator_TrackableImpl_set_ID_m2498,
	ReconstructionFromTargetAbstractBehaviour_t41_CustomAttributesCacheGenerator,
	SmartTerrainTrackableBehaviour_t558_CustomAttributesCacheGenerator_mMeshFilterToUpdate,
	SmartTerrainTrackableBehaviour_t558_CustomAttributesCacheGenerator_mMeshColliderToUpdate,
	SmartTerrainTrackerAbstractBehaviour_t43_CustomAttributesCacheGenerator_mAutoInitTracker,
	SmartTerrainTrackerAbstractBehaviour_t43_CustomAttributesCacheGenerator_mAutoStartTracker,
	SmartTerrainTrackerAbstractBehaviour_t43_CustomAttributesCacheGenerator_mAutoInitBuilder,
	SmartTerrainTrackerAbstractBehaviour_t43_CustomAttributesCacheGenerator_mSceneUnitsToMillimeter,
	CylinderTargetAbstractBehaviour_t6_CustomAttributesCacheGenerator_mTopDiameterRatio,
	CylinderTargetAbstractBehaviour_t6_CustomAttributesCacheGenerator_mBottomDiameterRatio,
	DataSet_t561_CustomAttributesCacheGenerator_DataSet_Exists_m2589,
	DataSet_t561_CustomAttributesCacheGenerator_DataSet_Load_m4617,
	DataSetLoadAbstractBehaviour_t8_CustomAttributesCacheGenerator_mDataSetsToLoad,
	DataSetLoadAbstractBehaviour_t8_CustomAttributesCacheGenerator_mDataSetsToActivate,
	DataSetLoadAbstractBehaviour_t8_CustomAttributesCacheGenerator_mExternalDatasetRoots,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_U3CCenterU3Ek__BackingField,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_U3CHalfExtentsU3Ek__BackingField,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_U3CRotationU3Ek__BackingField,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_get_Center_m2597,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_set_Center_m2598,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_get_HalfExtents_m2599,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_set_HalfExtents_m2600,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_get_Rotation_m2601,
	OrientedBoundingBox_t565_CustomAttributesCacheGenerator_OrientedBoundingBox_set_Rotation_m2602,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_U3CCenterU3Ek__BackingField,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_U3CHalfExtentsU3Ek__BackingField,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_U3CRotationYU3Ek__BackingField,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_get_Center_m2604,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_set_Center_m2605,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_get_HalfExtents_m2606,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_set_HalfExtents_m2607,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_get_RotationY_m2608,
	OrientedBoundingBox3D_t566_CustomAttributesCacheGenerator_OrientedBoundingBox3D_set_RotationY_m2609,
	DataSetImpl_t545_CustomAttributesCacheGenerator_DataSetImpl_Load_m2673,
	Tracker_t590_CustomAttributesCacheGenerator_U3CIsActiveU3Ek__BackingField,
	Tracker_t590_CustomAttributesCacheGenerator_Tracker_get_IsActive_m2726,
	Tracker_t590_CustomAttributesCacheGenerator_Tracker_set_IsActive_m2727,
	MarkerImpl_t595_CustomAttributesCacheGenerator_U3CMarkerIDU3Ek__BackingField,
	MarkerImpl_t595_CustomAttributesCacheGenerator_MarkerImpl_get_MarkerID_m2744,
	MarkerImpl_t595_CustomAttributesCacheGenerator_MarkerImpl_set_MarkerID_m2745,
	QCARManagerImpl_t628_CustomAttributesCacheGenerator_U3CVideoBackgroundTextureSetU3Ek__BackingField,
	QCARManagerImpl_t628_CustomAttributesCacheGenerator_QCARManagerImpl_set_VideoBackgroundTextureSet_m2795,
	QCARManagerImpl_t628_CustomAttributesCacheGenerator_QCARManagerImpl_get_VideoBackgroundTextureSet_m2796,
	U3CU3Ec__DisplayClass3_t623_CustomAttributesCacheGenerator,
	SmartTerrainTrackableImpl_t637_CustomAttributesCacheGenerator_U3CParentU3Ek__BackingField,
	SmartTerrainTrackableImpl_t637_CustomAttributesCacheGenerator_SmartTerrainTrackableImpl_get_Parent_m2841,
	SmartTerrainTrackableImpl_t637_CustomAttributesCacheGenerator_SmartTerrainTrackableImpl_set_Parent_m2842,
	WordList_t646_CustomAttributesCacheGenerator_WordList_LoadWordListFile_m4829,
	WordList_t646_CustomAttributesCacheGenerator_WordList_AddWordsFromFile_m4832,
	WordList_t646_CustomAttributesCacheGenerator_WordList_LoadFilterListFile_m4841,
	WordListImpl_t666_CustomAttributesCacheGenerator_WordListImpl_LoadWordListFile_m2936,
	WordListImpl_t666_CustomAttributesCacheGenerator_WordListImpl_AddWordsFromFile_m2939,
	WordListImpl_t666_CustomAttributesCacheGenerator_WordListImpl_LoadFilterListFile_m2948,
	ISmartTerrainEventHandler_t745_CustomAttributesCacheGenerator,
	KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator,
	KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepARCameraAlive,
	KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepTrackableBehavioursAlive,
	KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepTextRecoBehaviourAlive,
	KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepUDTBuildingBehaviourAlive,
	KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepCloudRecoBehaviourAlive,
	KeepAliveAbstractBehaviour_t27_CustomAttributesCacheGenerator_mKeepSmartTerrainAlive,
	ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mInitializedInEditor,
	ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mMaximumExtentEnabled,
	ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mMaximumExtent,
	ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mAutomaticStart,
	ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mNavMeshUpdates,
	ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_mNavMeshPadding,
	ReconstructionAbstractBehaviour_t39_CustomAttributesCacheGenerator_ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m3752,
	PropAbstractBehaviour_t36_CustomAttributesCacheGenerator_mBoxColliderToUpdate,
	TrackableSourceImpl_t694_CustomAttributesCacheGenerator_U3CTrackableSourcePtrU3Ek__BackingField,
	TrackableSourceImpl_t694_CustomAttributesCacheGenerator_TrackableSourceImpl_get_TrackableSourcePtr_m3838,
	TrackableSourceImpl_t694_CustomAttributesCacheGenerator_TrackableSourceImpl_set_TrackableSourcePtr_m3839,
	WebCamImpl_t577_CustomAttributesCacheGenerator_U3CIsTextureSizeAvailableU3Ek__BackingField,
	WebCamImpl_t577_CustomAttributesCacheGenerator_WebCamImpl_get_IsTextureSizeAvailable_m3864,
	WebCamImpl_t577_CustomAttributesCacheGenerator_WebCamImpl_set_IsTextureSizeAvailable_m3865,
	ITrackerEventHandler_t756_CustomAttributesCacheGenerator,
	ImageTargetAbstractBehaviour_t21_CustomAttributesCacheGenerator_mAspectRatio,
	ImageTargetAbstractBehaviour_t21_CustomAttributesCacheGenerator_mImageTargetType,
	MarkerAbstractBehaviour_t29_CustomAttributesCacheGenerator_mMarkerID,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_VuforiaLicenseKey,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mCameraOffset,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mAutoAdjustStereoCameraSkewing,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mSceneScaleFactor,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_CameraDeviceModeSetting,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_MaxSimultaneousImageTargets,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_MaxSimultaneousObjectTargets,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_UseDelayedLoadingObjectTargets,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_CameraDirection,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_MirrorVideoBackground,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mWorldCenterMode,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mWorldCenter,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mPrimaryCamera,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_mSecondaryCamera,
	QCARAbstractBehaviour_t38_CustomAttributesCacheGenerator_QCARAbstractBehaviour_RegisterTrackerEventHandler_m3927,
	TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mWordListFile,
	TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mCustomWordListFile,
	TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mAdditionalCustomWords,
	TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mFilterMode,
	TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mFilterListFile,
	TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mAdditionalFilterWords,
	TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mWordPrefabCreationMode,
	TextRecoAbstractBehaviour_t46_CustomAttributesCacheGenerator_mMaximumWordInstances,
	VideoBackgroundAbstractBehaviour_t53_CustomAttributesCacheGenerator,
	VideoBackgroundAbstractBehaviour_t53_CustomAttributesCacheGenerator_U3CVideoBackGroundMirroredU3Ek__BackingField,
	VideoBackgroundAbstractBehaviour_t53_CustomAttributesCacheGenerator_VideoBackgroundAbstractBehaviour_get_VideoBackGroundMirrored_m4007,
	VideoBackgroundAbstractBehaviour_t53_CustomAttributesCacheGenerator_VideoBackgroundAbstractBehaviour_set_VideoBackGroundMirrored_m4008,
	VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mName,
	VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mSensitivity,
	VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mHasUpdatedPose,
	VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mPrevTransform,
	VirtualButtonAbstractBehaviour_t57_CustomAttributesCacheGenerator_mPrevParent,
	WebCamAbstractBehaviour_t59_CustomAttributesCacheGenerator_mPlayModeRenderVideo,
	WebCamAbstractBehaviour_t59_CustomAttributesCacheGenerator_mDeviceNameSetInEditor,
	WebCamAbstractBehaviour_t59_CustomAttributesCacheGenerator_mFlipHorizontally,
	WebCamAbstractBehaviour_t59_CustomAttributesCacheGenerator_mTurnOffWebCam,
	WordAbstractBehaviour_t65_CustomAttributesCacheGenerator_mMode,
	WordAbstractBehaviour_t65_CustomAttributesCacheGenerator_mSpecificWord,
	U3CPrivateImplementationDetailsU3EU7B66DCC020U2DEBD6U2D4DBAU2DA757U2D272BEBA33044U7D_t727_CustomAttributesCacheGenerator,
};
