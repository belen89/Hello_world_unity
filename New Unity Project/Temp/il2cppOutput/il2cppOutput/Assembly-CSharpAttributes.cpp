#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern TypeInfo* RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t115 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t115 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t115_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m245(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m246(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// Vuforia.FactorySetter
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_FactorySetter.h"
// Vuforia.FactorySetter
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_FactorySetterMethodDeclarations.h"
extern TypeInfo* FactorySetter_t93_il2cpp_TypeInfo_var;
void ComponentFactoryStarterBehaviour_t23_CustomAttributesCacheGenerator_ComponentFactoryStarterBehaviour_SetBehaviourComponentFactory_m47(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FactorySetter_t93_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FactorySetter_t93 * tmp;
		tmp = (FactorySetter_t93 *)il2cpp_codegen_object_new (FactorySetter_t93_il2cpp_TypeInfo_var);
		FactorySetter__ctor_m247(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
// Vuforia.QCARBehaviour
#include "AssemblyU2DCSharp_Vuforia_QCARBehaviour.h"
extern const Il2CppType* QCARBehaviour_t37_0_0_0_var;
extern TypeInfo* RequireComponent_t116_il2cpp_TypeInfo_var;
void KeepAliveBehaviour_t26_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		QCARBehaviour_t37_0_0_0_var = il2cpp_codegen_type_from_index(52);
		RequireComponent_t116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RequireComponent_t116 * tmp;
		tmp = (RequireComponent_t116 *)il2cpp_codegen_object_new (RequireComponent_t116_il2cpp_TypeInfo_var);
		RequireComponent__ctor_m248(tmp, il2cpp_codegen_type_get_object(QCARBehaviour_t37_0_0_0_var), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern const Il2CppType* Camera_t103_0_0_0_var;
extern TypeInfo* RequireComponent_t116_il2cpp_TypeInfo_var;
void VideoBackgroundBehaviour_t52_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_Assembly_AttributeGenerators[5] = 
{
	NULL,
	g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator,
	ComponentFactoryStarterBehaviour_t23_CustomAttributesCacheGenerator_ComponentFactoryStarterBehaviour_SetBehaviourComponentFactory_m47,
	KeepAliveBehaviour_t26_CustomAttributesCacheGenerator,
	VideoBackgroundBehaviour_t52_CustomAttributesCacheGenerator,
};
