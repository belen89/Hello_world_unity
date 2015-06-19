#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// Metadata Definition System.Text.RegularExpressions.IMachine
extern TypeInfo IMachine_t1526_il2cpp_TypeInfo;
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo IMachine_t1526_IMachine_Scan_m7883_ParameterInfos[] = 
{
	{"regex", 0, 134218234, 0, &Regex_t792_0_0_0},
	{"text", 1, 134218235, 0, &String_t_0_0_0},
	{"start", 2, 134218236, 0, &Int32_t123_0_0_0},
	{"end", 3, 134218237, 0, &Int32_t123_0_0_0},
};
extern const Il2CppType Match_t1517_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.IMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern const MethodInfo IMachine_Scan_m7883_MethodInfo = 
{
	"Scan"/* name */
	, NULL/* method */
	, &IMachine_t1526_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1517_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t123_Int32_t123/* invoker_method */
	, IMachine_t1526_IMachine_Scan_m7883_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 587/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo IMachine_t1526_IMachine_Split_m7884_ParameterInfos[] = 
{
	{"regex", 0, 134218238, 0, &Regex_t792_0_0_0},
	{"input", 1, 134218239, 0, &String_t_0_0_0},
	{"count", 2, 134218240, 0, &Int32_t123_0_0_0},
	{"startat", 3, 134218241, 0, &Int32_t123_0_0_0},
};
extern const Il2CppType StringU5BU5D_t791_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.String[] System.Text.RegularExpressions.IMachine::Split(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern const MethodInfo IMachine_Split_m7884_MethodInfo = 
{
	"Split"/* name */
	, NULL/* method */
	, &IMachine_t1526_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t791_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t123_Int32_t123/* invoker_method */
	, IMachine_t1526_IMachine_Split_m7884_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 588/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo IMachine_t1526_IMachine_Replace_m7885_ParameterInfos[] = 
{
	{"regex", 0, 134218242, 0, &Regex_t792_0_0_0},
	{"input", 1, 134218243, 0, &String_t_0_0_0},
	{"replacement", 2, 134218244, 0, &String_t_0_0_0},
	{"count", 3, 134218245, 0, &Int32_t123_0_0_0},
	{"startat", 4, 134218246, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.IMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern const MethodInfo IMachine_Replace_m7885_MethodInfo = 
{
	"Replace"/* name */
	, NULL/* method */
	, &IMachine_t1526_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t123_Int32_t123/* invoker_method */
	, IMachine_t1526_IMachine_Replace_m7885_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 589/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IMachine_t1526_MethodInfos[] =
{
	&IMachine_Scan_m7883_MethodInfo,
	&IMachine_Split_m7884_MethodInfo,
	&IMachine_Replace_m7885_MethodInfo,
	NULL
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType IMachine_t1526_0_0_0;
extern const Il2CppType IMachine_t1526_1_0_0;
struct IMachine_t1526;
const Il2CppTypeDefinitionMetadata IMachine_t1526_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IMachine_t1526_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IMachine"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, IMachine_t1526_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IMachine_t1526_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IMachine_t1526_0_0_0/* byval_arg */
	, &IMachine_t1526_1_0_0/* this_arg */
	, &IMachine_t1526_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Text.RegularExpressions.IMachineFactory
extern TypeInfo IMachineFactory_t1530_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.IMachineFactory::NewInstance()
extern const MethodInfo IMachineFactory_NewInstance_m7886_MethodInfo = 
{
	"NewInstance"/* name */
	, NULL/* method */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* declaring_type */
	, &IMachine_t1526_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 590/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IDictionary_t1531_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Text.RegularExpressions.IMachineFactory::get_Mapping()
extern const MethodInfo IMachineFactory_get_Mapping_m7887_MethodInfo = 
{
	"get_Mapping"/* name */
	, NULL/* method */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t1531_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 591/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IDictionary_t1531_0_0_0;
static const ParameterInfo IMachineFactory_t1530_IMachineFactory_set_Mapping_m7888_ParameterInfos[] = 
{
	{"value", 0, 134218247, 0, &IDictionary_t1531_0_0_0},
};
extern const Il2CppType Void_t117_0_0_0;
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IMachineFactory::set_Mapping(System.Collections.IDictionary)
extern const MethodInfo IMachineFactory_set_Mapping_m7888_MethodInfo = 
{
	"set_Mapping"/* name */
	, NULL/* method */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, IMachineFactory_t1530_IMachineFactory_set_Mapping_m7888_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 592/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.IMachineFactory::get_GroupCount()
extern const MethodInfo IMachineFactory_get_GroupCount_m7889_MethodInfo = 
{
	"get_GroupCount"/* name */
	, NULL/* method */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 593/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.IMachineFactory::get_Gap()
extern const MethodInfo IMachineFactory_get_Gap_m7890_MethodInfo = 
{
	"get_Gap"/* name */
	, NULL/* method */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 594/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo IMachineFactory_t1530_IMachineFactory_set_Gap_m7891_ParameterInfos[] = 
{
	{"value", 0, 134218248, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IMachineFactory::set_Gap(System.Int32)
extern const MethodInfo IMachineFactory_set_Gap_m7891_MethodInfo = 
{
	"set_Gap"/* name */
	, NULL/* method */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, IMachineFactory_t1530_IMachineFactory_set_Gap_m7891_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 595/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String[] System.Text.RegularExpressions.IMachineFactory::get_NamesMapping()
extern const MethodInfo IMachineFactory_get_NamesMapping_m7892_MethodInfo = 
{
	"get_NamesMapping"/* name */
	, NULL/* method */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t791_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 596/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t791_0_0_0;
static const ParameterInfo IMachineFactory_t1530_IMachineFactory_set_NamesMapping_m7893_ParameterInfos[] = 
{
	{"value", 0, 134218249, 0, &StringU5BU5D_t791_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IMachineFactory::set_NamesMapping(System.String[])
extern const MethodInfo IMachineFactory_set_NamesMapping_m7893_MethodInfo = 
{
	"set_NamesMapping"/* name */
	, NULL/* method */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, IMachineFactory_t1530_IMachineFactory_set_NamesMapping_m7893_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 597/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IMachineFactory_t1530_MethodInfos[] =
{
	&IMachineFactory_NewInstance_m7886_MethodInfo,
	&IMachineFactory_get_Mapping_m7887_MethodInfo,
	&IMachineFactory_set_Mapping_m7888_MethodInfo,
	&IMachineFactory_get_GroupCount_m7889_MethodInfo,
	&IMachineFactory_get_Gap_m7890_MethodInfo,
	&IMachineFactory_set_Gap_m7891_MethodInfo,
	&IMachineFactory_get_NamesMapping_m7892_MethodInfo,
	&IMachineFactory_set_NamesMapping_m7893_MethodInfo,
	NULL
};
extern const MethodInfo IMachineFactory_get_Mapping_m7887_MethodInfo;
extern const MethodInfo IMachineFactory_set_Mapping_m7888_MethodInfo;
static const PropertyInfo IMachineFactory_t1530____Mapping_PropertyInfo = 
{
	&IMachineFactory_t1530_il2cpp_TypeInfo/* parent */
	, "Mapping"/* name */
	, &IMachineFactory_get_Mapping_m7887_MethodInfo/* get */
	, &IMachineFactory_set_Mapping_m7888_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMachineFactory_get_GroupCount_m7889_MethodInfo;
static const PropertyInfo IMachineFactory_t1530____GroupCount_PropertyInfo = 
{
	&IMachineFactory_t1530_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, &IMachineFactory_get_GroupCount_m7889_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMachineFactory_get_Gap_m7890_MethodInfo;
extern const MethodInfo IMachineFactory_set_Gap_m7891_MethodInfo;
static const PropertyInfo IMachineFactory_t1530____Gap_PropertyInfo = 
{
	&IMachineFactory_t1530_il2cpp_TypeInfo/* parent */
	, "Gap"/* name */
	, &IMachineFactory_get_Gap_m7890_MethodInfo/* get */
	, &IMachineFactory_set_Gap_m7891_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IMachineFactory_get_NamesMapping_m7892_MethodInfo;
extern const MethodInfo IMachineFactory_set_NamesMapping_m7893_MethodInfo;
static const PropertyInfo IMachineFactory_t1530____NamesMapping_PropertyInfo = 
{
	&IMachineFactory_t1530_il2cpp_TypeInfo/* parent */
	, "NamesMapping"/* name */
	, &IMachineFactory_get_NamesMapping_m7892_MethodInfo/* get */
	, &IMachineFactory_set_NamesMapping_m7893_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IMachineFactory_t1530_PropertyInfos[] =
{
	&IMachineFactory_t1530____Mapping_PropertyInfo,
	&IMachineFactory_t1530____GroupCount_PropertyInfo,
	&IMachineFactory_t1530____Gap_PropertyInfo,
	&IMachineFactory_t1530____NamesMapping_PropertyInfo,
	NULL
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType IMachineFactory_t1530_0_0_0;
extern const Il2CppType IMachineFactory_t1530_1_0_0;
struct IMachineFactory_t1530;
const Il2CppTypeDefinitionMetadata IMachineFactory_t1530_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IMachineFactory_t1530_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IMachineFactory"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, IMachineFactory_t1530_MethodInfos/* methods */
	, IMachineFactory_t1530_PropertyInfos/* properties */
	, NULL/* events */
	, &IMachineFactory_t1530_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IMachineFactory_t1530_0_0_0/* byval_arg */
	, &IMachineFactory_t1530_1_0_0/* this_arg */
	, &IMachineFactory_t1530_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 8/* method_count */
	, 4/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.FactoryCache/Key
#include "System_System_Text_RegularExpressions_FactoryCache_Key.h"
// Metadata Definition System.Text.RegularExpressions.FactoryCache/Key
extern TypeInfo Key_t1537_il2cpp_TypeInfo;
// System.Text.RegularExpressions.FactoryCache/Key
#include "System_System_Text_RegularExpressions_FactoryCache_KeyMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType RegexOptions_t1533_0_0_0;
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Key_t1537_Key__ctor_m7291_ParameterInfos[] = 
{
	{"pattern", 0, 134218256, 0, &String_t_0_0_0},
	{"options", 1, 134218257, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache/Key::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Key__ctor_m7291_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Key__ctor_m7291/* method */
	, &Key_t1537_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123/* invoker_method */
	, Key_t1537_Key__ctor_m7291_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 602/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.FactoryCache/Key::GetHashCode()
extern const MethodInfo Key_GetHashCode_m7292_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Key_GetHashCode_m7292/* method */
	, &Key_t1537_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 603/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Key_t1537_Key_Equals_m7293_ParameterInfos[] = 
{
	{"o", 0, 134218258, 0, &Object_t_0_0_0},
};
extern const Il2CppType Boolean_t125_0_0_0;
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.FactoryCache/Key::Equals(System.Object)
extern const MethodInfo Key_Equals_m7293_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Key_Equals_m7293/* method */
	, &Key_t1537_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Key_t1537_Key_Equals_m7293_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 604/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.FactoryCache/Key::ToString()
extern const MethodInfo Key_ToString_m7294_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Key_ToString_m7294/* method */
	, &Key_t1537_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 605/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Key_t1537_MethodInfos[] =
{
	&Key__ctor_m7291_MethodInfo,
	&Key_GetHashCode_m7292_MethodInfo,
	&Key_Equals_m7293_MethodInfo,
	&Key_ToString_m7294_MethodInfo,
	NULL
};
extern const MethodInfo Key_Equals_m7293_MethodInfo;
extern const MethodInfo Object_Finalize_m250_MethodInfo;
extern const MethodInfo Key_GetHashCode_m7292_MethodInfo;
extern const MethodInfo Key_ToString_m7294_MethodInfo;
static const Il2CppMethodReference Key_t1537_VTable[] =
{
	&Key_Equals_m7293_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Key_GetHashCode_m7292_MethodInfo,
	&Key_ToString_m7294_MethodInfo,
};
static bool Key_t1537_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Key_t1537_0_0_0;
extern const Il2CppType Key_t1537_1_0_0;
extern TypeInfo FactoryCache_t1529_il2cpp_TypeInfo;
extern const Il2CppType FactoryCache_t1529_0_0_0;
struct Key_t1537;
const Il2CppTypeDefinitionMetadata Key_t1537_DefinitionMetadata = 
{
	&FactoryCache_t1529_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Key_t1537_VTable/* vtableMethods */
	, Key_t1537_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 503/* fieldStart */

};
TypeInfo Key_t1537_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Key"/* name */
	, ""/* namespaze */
	, Key_t1537_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Key_t1537_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Key_t1537_0_0_0/* byval_arg */
	, &Key_t1537_1_0_0/* this_arg */
	, &Key_t1537_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Key_t1537)/* instance_size */
	, sizeof (Key_t1537)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCache.h"
// Metadata Definition System.Text.RegularExpressions.FactoryCache
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCacheMethodDeclarations.h"
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo FactoryCache_t1529_FactoryCache__ctor_m7295_ParameterInfos[] = 
{
	{"capacity", 0, 134218250, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
extern const MethodInfo FactoryCache__ctor_m7295_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FactoryCache__ctor_m7295/* method */
	, &FactoryCache_t1529_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, FactoryCache_t1529_FactoryCache__ctor_m7295_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 598/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType RegexOptions_t1533_0_0_0;
extern const Il2CppType IMachineFactory_t1530_0_0_0;
static const ParameterInfo FactoryCache_t1529_FactoryCache_Add_m7296_ParameterInfos[] = 
{
	{"pattern", 0, 134218251, 0, &String_t_0_0_0},
	{"options", 1, 134218252, 0, &RegexOptions_t1533_0_0_0},
	{"factory", 2, 134218253, 0, &IMachineFactory_t1530_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
extern const MethodInfo FactoryCache_Add_m7296_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&FactoryCache_Add_m7296/* method */
	, &FactoryCache_t1529_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123_Object_t/* invoker_method */
	, FactoryCache_t1529_FactoryCache_Add_m7296_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 599/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
extern const MethodInfo FactoryCache_Cleanup_m7297_MethodInfo = 
{
	"Cleanup"/* name */
	, (methodPointerType)&FactoryCache_Cleanup_m7297/* method */
	, &FactoryCache_t1529_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 600/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo FactoryCache_t1529_FactoryCache_Lookup_m7298_ParameterInfos[] = 
{
	{"pattern", 0, 134218254, 0, &String_t_0_0_0},
	{"options", 1, 134218255, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo FactoryCache_Lookup_m7298_MethodInfo = 
{
	"Lookup"/* name */
	, (methodPointerType)&FactoryCache_Lookup_m7298/* method */
	, &FactoryCache_t1529_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1530_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t123/* invoker_method */
	, FactoryCache_t1529_FactoryCache_Lookup_m7298_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 601/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FactoryCache_t1529_MethodInfos[] =
{
	&FactoryCache__ctor_m7295_MethodInfo,
	&FactoryCache_Add_m7296_MethodInfo,
	&FactoryCache_Cleanup_m7297_MethodInfo,
	&FactoryCache_Lookup_m7298_MethodInfo,
	NULL
};
static const Il2CppType* FactoryCache_t1529_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Key_t1537_0_0_0,
};
extern const MethodInfo Object_Equals_m323_MethodInfo;
extern const MethodInfo Object_GetHashCode_m324_MethodInfo;
extern const MethodInfo Object_ToString_m325_MethodInfo;
static const Il2CppMethodReference FactoryCache_t1529_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool FactoryCache_t1529_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType FactoryCache_t1529_1_0_0;
struct FactoryCache_t1529;
const Il2CppTypeDefinitionMetadata FactoryCache_t1529_DefinitionMetadata = 
{
	NULL/* declaringType */
	, FactoryCache_t1529_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, FactoryCache_t1529_VTable/* vtableMethods */
	, FactoryCache_t1529_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 505/* fieldStart */

};
TypeInfo FactoryCache_t1529_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "FactoryCache"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, FactoryCache_t1529_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FactoryCache_t1529_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &FactoryCache_t1529_0_0_0/* byval_arg */
	, &FactoryCache_t1529_1_0_0/* this_arg */
	, &FactoryCache_t1529_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FactoryCache_t1529)/* instance_size */
	, sizeof (FactoryCache_t1529)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_Node.h"
// Metadata Definition System.Text.RegularExpressions.MRUList/Node
extern TypeInfo Node_t1539_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_NodeMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Node_t1539_Node__ctor_m7299_ParameterInfos[] = 
{
	{"value", 0, 134218260, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList/Node::.ctor(System.Object)
extern const MethodInfo Node__ctor_m7299_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Node__ctor_m7299/* method */
	, &Node_t1539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Node_t1539_Node__ctor_m7299_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 609/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Node_t1539_MethodInfos[] =
{
	&Node__ctor_m7299_MethodInfo,
	NULL
};
static const Il2CppMethodReference Node_t1539_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool Node_t1539_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Node_t1539_0_0_0;
extern const Il2CppType Node_t1539_1_0_0;
extern TypeInfo MRUList_t1538_il2cpp_TypeInfo;
extern const Il2CppType MRUList_t1538_0_0_0;
struct Node_t1539;
const Il2CppTypeDefinitionMetadata Node_t1539_DefinitionMetadata = 
{
	&MRUList_t1538_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Node_t1539_VTable/* vtableMethods */
	, Node_t1539_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 508/* fieldStart */

};
TypeInfo Node_t1539_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Node"/* name */
	, ""/* namespaze */
	, Node_t1539_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Node_t1539_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Node_t1539_0_0_0/* byval_arg */
	, &Node_t1539_1_0_0/* this_arg */
	, &Node_t1539_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Node_t1539)/* instance_size */
	, sizeof (Node_t1539)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUList.h"
// Metadata Definition System.Text.RegularExpressions.MRUList
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUListMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::.ctor()
extern const MethodInfo MRUList__ctor_m7300_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MRUList__ctor_m7300/* method */
	, &MRUList_t1538_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 606/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MRUList_t1538_MRUList_Use_m7301_ParameterInfos[] = 
{
	{"o", 0, 134218259, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::Use(System.Object)
extern const MethodInfo MRUList_Use_m7301_MethodInfo = 
{
	"Use"/* name */
	, (methodPointerType)&MRUList_Use_m7301/* method */
	, &MRUList_t1538_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, MRUList_t1538_MRUList_Use_m7301_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 607/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.MRUList::Evict()
extern const MethodInfo MRUList_Evict_m7302_MethodInfo = 
{
	"Evict"/* name */
	, (methodPointerType)&MRUList_Evict_m7302/* method */
	, &MRUList_t1538_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 608/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MRUList_t1538_MethodInfos[] =
{
	&MRUList__ctor_m7300_MethodInfo,
	&MRUList_Use_m7301_MethodInfo,
	&MRUList_Evict_m7302_MethodInfo,
	NULL
};
static const Il2CppType* MRUList_t1538_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Node_t1539_0_0_0,
};
static const Il2CppMethodReference MRUList_t1538_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool MRUList_t1538_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType MRUList_t1538_1_0_0;
struct MRUList_t1538;
const Il2CppTypeDefinitionMetadata MRUList_t1538_DefinitionMetadata = 
{
	NULL/* declaringType */
	, MRUList_t1538_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MRUList_t1538_VTable/* vtableMethods */
	, MRUList_t1538_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 511/* fieldStart */

};
TypeInfo MRUList_t1538_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MRUList"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MRUList_t1538_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MRUList_t1538_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MRUList_t1538_0_0_0/* byval_arg */
	, &MRUList_t1538_1_0_0/* this_arg */
	, &MRUList_t1538_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MRUList_t1538)/* instance_size */
	, sizeof (MRUList_t1538)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// Metadata Definition System.Text.RegularExpressions.Category
extern TypeInfo Category_t1540_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_CategoryMethodDeclarations.h"
static const MethodInfo* Category_t1540_MethodInfos[] =
{
	NULL
};
extern const MethodInfo Enum_Equals_m2309_MethodInfo;
extern const MethodInfo Enum_GetHashCode_m2310_MethodInfo;
extern const MethodInfo Enum_ToString_m2311_MethodInfo;
extern const MethodInfo Enum_ToString_m2312_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToBoolean_m2313_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToByte_m2314_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToChar_m2315_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDateTime_m2316_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDecimal_m2317_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDouble_m2318_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt16_m2319_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt32_m2320_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt64_m2321_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSByte_m2322_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSingle_m2323_MethodInfo;
extern const MethodInfo Enum_ToString_m2324_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToType_m2325_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt16_m2326_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt32_m2327_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt64_m2328_MethodInfo;
extern const MethodInfo Enum_CompareTo_m2329_MethodInfo;
extern const MethodInfo Enum_GetTypeCode_m2330_MethodInfo;
static const Il2CppMethodReference Category_t1540_VTable[] =
{
	&Enum_Equals_m2309_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Enum_GetHashCode_m2310_MethodInfo,
	&Enum_ToString_m2311_MethodInfo,
	&Enum_ToString_m2312_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2313_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2314_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2315_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2316_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2317_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2318_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2319_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2320_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2321_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2322_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2323_MethodInfo,
	&Enum_ToString_m2324_MethodInfo,
	&Enum_System_IConvertible_ToType_m2325_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2326_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2327_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2328_MethodInfo,
	&Enum_CompareTo_m2329_MethodInfo,
	&Enum_GetTypeCode_m2330_MethodInfo,
};
static bool Category_t1540_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IFormattable_t473_0_0_0;
extern const Il2CppType IConvertible_t474_0_0_0;
extern const Il2CppType IComparable_t475_0_0_0;
static Il2CppInterfaceOffsetPair Category_t1540_InterfacesOffsets[] = 
{
	{ &IFormattable_t473_0_0_0, 4},
	{ &IConvertible_t474_0_0_0, 5},
	{ &IComparable_t475_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Category_t1540_0_0_0;
extern const Il2CppType Category_t1540_1_0_0;
extern const Il2CppType Enum_t476_0_0_0;
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo UInt16_t415_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Category_t1540_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Category_t1540_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t476_0_0_0/* parent */
	, Category_t1540_VTable/* vtableMethods */
	, Category_t1540_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 513/* fieldStart */

};
TypeInfo Category_t1540_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Category"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Category_t1540_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UInt16_t415_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Category_t1540_0_0_0/* byval_arg */
	, &Category_t1540_1_0_0/* this_arg */
	, &Category_t1540_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Category_t1540)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Category_t1540)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint16_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 146/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtils.h"
// Metadata Definition System.Text.RegularExpressions.CategoryUtils
extern TypeInfo CategoryUtils_t1541_il2cpp_TypeInfo;
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CategoryUtils_t1541_CategoryUtils_CategoryFromName_m7303_ParameterInfos[] = 
{
	{"name", 0, 134218261, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Category_t1540_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
extern const MethodInfo CategoryUtils_CategoryFromName_m7303_MethodInfo = 
{
	"CategoryFromName"/* name */
	, (methodPointerType)&CategoryUtils_CategoryFromName_m7303/* method */
	, &CategoryUtils_t1541_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1540_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1540_Object_t/* invoker_method */
	, CategoryUtils_t1541_CategoryUtils_CategoryFromName_m7303_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 610/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1540_0_0_0;
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo CategoryUtils_t1541_CategoryUtils_IsCategory_m7304_ParameterInfos[] = 
{
	{"cat", 0, 134218262, 0, &Category_t1540_0_0_0},
	{"c", 1, 134218263, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_UInt16_t415_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
extern const MethodInfo CategoryUtils_IsCategory_m7304_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m7304/* method */
	, &CategoryUtils_t1541_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_UInt16_t415_Int16_t501/* invoker_method */
	, CategoryUtils_t1541_CategoryUtils_IsCategory_m7304_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 611/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UnicodeCategory_t1662_0_0_0;
extern const Il2CppType UnicodeCategory_t1662_0_0_0;
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo CategoryUtils_t1541_CategoryUtils_IsCategory_m7305_ParameterInfos[] = 
{
	{"uc", 0, 134218264, 0, &UnicodeCategory_t1662_0_0_0},
	{"c", 1, 134218265, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
extern const MethodInfo CategoryUtils_IsCategory_m7305_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m7305/* method */
	, &CategoryUtils_t1541_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123_Int16_t501/* invoker_method */
	, CategoryUtils_t1541_CategoryUtils_IsCategory_m7305_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 612/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CategoryUtils_t1541_MethodInfos[] =
{
	&CategoryUtils_CategoryFromName_m7303_MethodInfo,
	&CategoryUtils_IsCategory_m7304_MethodInfo,
	&CategoryUtils_IsCategory_m7305_MethodInfo,
	NULL
};
static const Il2CppMethodReference CategoryUtils_t1541_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool CategoryUtils_t1541_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CategoryUtils_t1541_0_0_0;
extern const Il2CppType CategoryUtils_t1541_1_0_0;
struct CategoryUtils_t1541;
const Il2CppTypeDefinitionMetadata CategoryUtils_t1541_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CategoryUtils_t1541_VTable/* vtableMethods */
	, CategoryUtils_t1541_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo CategoryUtils_t1541_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CategoryUtils"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, CategoryUtils_t1541_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CategoryUtils_t1541_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CategoryUtils_t1541_0_0_0/* byval_arg */
	, &CategoryUtils_t1541_1_0_0/* this_arg */
	, &CategoryUtils_t1541_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CategoryUtils_t1541)/* instance_size */
	, sizeof (CategoryUtils_t1541)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
// Metadata Definition System.Text.RegularExpressions.LinkRef
extern TypeInfo LinkRef_t1542_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRefMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkRef::.ctor()
extern const MethodInfo LinkRef__ctor_m7306_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkRef__ctor_m7306/* method */
	, &LinkRef_t1542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 613/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LinkRef_t1542_MethodInfos[] =
{
	&LinkRef__ctor_m7306_MethodInfo,
	NULL
};
static const Il2CppMethodReference LinkRef_t1542_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool LinkRef_t1542_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType LinkRef_t1542_0_0_0;
extern const Il2CppType LinkRef_t1542_1_0_0;
struct LinkRef_t1542;
const Il2CppTypeDefinitionMetadata LinkRef_t1542_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, LinkRef_t1542_VTable/* vtableMethods */
	, LinkRef_t1542_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo LinkRef_t1542_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkRef"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkRef_t1542_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &LinkRef_t1542_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &LinkRef_t1542_0_0_0/* byval_arg */
	, &LinkRef_t1542_1_0_0/* this_arg */
	, &LinkRef_t1542_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkRef_t1542)/* instance_size */
	, sizeof (LinkRef_t1542)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Text.RegularExpressions.ICompiler
extern TypeInfo ICompiler_t1605_il2cpp_TypeInfo;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.ICompiler::GetMachineFactory()
extern const MethodInfo ICompiler_GetMachineFactory_m7894_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1530_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 614/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFalse()
extern const MethodInfo ICompiler_EmitFalse_m7895_MethodInfo = 
{
	"EmitFalse"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 615/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTrue()
extern const MethodInfo ICompiler_EmitTrue_m7896_MethodInfo = 
{
	"EmitTrue"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 616/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitCharacter_m7897_ParameterInfos[] = 
{
	{"c", 0, 134218266, 0, &Char_t412_0_0_0},
	{"negate", 1, 134218267, 0, &Boolean_t125_0_0_0},
	{"ignore", 2, 134218268, 0, &Boolean_t125_0_0_0},
	{"reverse", 3, 134218269, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501_SByte_t126_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitCharacter_m7897_MethodInfo = 
{
	"EmitCharacter"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501_SByte_t126_SByte_t126_SByte_t126/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitCharacter_m7897_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 617/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1540_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitCategory_m7898_ParameterInfos[] = 
{
	{"cat", 0, 134218270, 0, &Category_t1540_0_0_0},
	{"negate", 1, 134218271, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218272, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitCategory_m7898_MethodInfo = 
{
	"EmitCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126_SByte_t126/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitCategory_m7898_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 618/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1540_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitNotCategory_m7899_ParameterInfos[] = 
{
	{"cat", 0, 134218273, 0, &Category_t1540_0_0_0},
	{"negate", 1, 134218274, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218275, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitNotCategory_m7899_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126_SByte_t126/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitNotCategory_m7899_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 619/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitRange_m7900_ParameterInfos[] = 
{
	{"lo", 0, 134218276, 0, &Char_t412_0_0_0},
	{"hi", 1, 134218277, 0, &Char_t412_0_0_0},
	{"negate", 2, 134218278, 0, &Boolean_t125_0_0_0},
	{"ignore", 3, 134218279, 0, &Boolean_t125_0_0_0},
	{"reverse", 4, 134218280, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501_Int16_t501_SByte_t126_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitRange_m7900_MethodInfo = 
{
	"EmitRange"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501_Int16_t501_SByte_t126_SByte_t126_SByte_t126/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitRange_m7900_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 620/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType BitArray_t1578_0_0_0;
extern const Il2CppType BitArray_t1578_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitSet_m7901_ParameterInfos[] = 
{
	{"lo", 0, 134218281, 0, &Char_t412_0_0_0},
	{"set", 1, 134218282, 0, &BitArray_t1578_0_0_0},
	{"negate", 2, 134218283, 0, &Boolean_t125_0_0_0},
	{"ignore", 3, 134218284, 0, &Boolean_t125_0_0_0},
	{"reverse", 4, 134218285, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501_Object_t_SByte_t126_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitSet_m7901_MethodInfo = 
{
	"EmitSet"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501_Object_t_SByte_t126_SByte_t126_SByte_t126/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitSet_m7901_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 621/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitString_m7902_ParameterInfos[] = 
{
	{"str", 0, 134218286, 0, &String_t_0_0_0},
	{"ignore", 1, 134218287, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218288, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitString_m7902_MethodInfo = 
{
	"EmitString"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126_SByte_t126/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitString_m7902_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 622/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Position_t1536_0_0_0;
extern const Il2CppType Position_t1536_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitPosition_m7903_ParameterInfos[] = 
{
	{"pos", 0, 134218289, 0, &Position_t1536_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern const MethodInfo ICompiler_EmitPosition_m7903_MethodInfo = 
{
	"EmitPosition"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitPosition_m7903_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 623/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitOpen_m7904_ParameterInfos[] = 
{
	{"gid", 0, 134218290, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitOpen(System.Int32)
extern const MethodInfo ICompiler_EmitOpen_m7904_MethodInfo = 
{
	"EmitOpen"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitOpen_m7904_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 624/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitClose_m7905_ParameterInfos[] = 
{
	{"gid", 0, 134218291, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitClose(System.Int32)
extern const MethodInfo ICompiler_EmitClose_m7905_MethodInfo = 
{
	"EmitClose"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitClose_m7905_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 625/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitBalanceStart_m7906_ParameterInfos[] = 
{
	{"gid", 0, 134218292, 0, &Int32_t123_0_0_0},
	{"balance", 1, 134218293, 0, &Int32_t123_0_0_0},
	{"capture", 2, 134218294, 0, &Boolean_t125_0_0_0},
	{"tail", 3, 134218295, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitBalanceStart_m7906_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitBalanceStart_m7906_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 626/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalance()
extern const MethodInfo ICompiler_EmitBalance_m7907_MethodInfo = 
{
	"EmitBalance"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 627/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitReference_m7908_ParameterInfos[] = 
{
	{"gid", 0, 134218296, 0, &Int32_t123_0_0_0},
	{"ignore", 1, 134218297, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218298, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern const MethodInfo ICompiler_EmitReference_m7908_MethodInfo = 
{
	"EmitReference"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_SByte_t126_SByte_t126/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitReference_m7908_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 628/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitIfDefined_m7909_ParameterInfos[] = 
{
	{"gid", 0, 134218299, 0, &Int32_t123_0_0_0},
	{"tail", 1, 134218300, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitIfDefined_m7909_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitIfDefined_m7909_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 629/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitSub_m7910_ParameterInfos[] = 
{
	{"tail", 0, 134218301, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitSub_m7910_MethodInfo = 
{
	"EmitSub"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitSub_m7910_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 630/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitTest_m7911_ParameterInfos[] = 
{
	{"yes", 0, 134218302, 0, &LinkRef_t1542_0_0_0},
	{"tail", 1, 134218303, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitTest_m7911_MethodInfo = 
{
	"EmitTest"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitTest_m7911_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 631/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitBranch_m7912_ParameterInfos[] = 
{
	{"next", 0, 134218304, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitBranch_m7912_MethodInfo = 
{
	"EmitBranch"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitBranch_m7912_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 632/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitJump_m7913_ParameterInfos[] = 
{
	{"target", 0, 134218305, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitJump_m7913_MethodInfo = 
{
	"EmitJump"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitJump_m7913_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 633/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitRepeat_m7914_ParameterInfos[] = 
{
	{"min", 0, 134218306, 0, &Int32_t123_0_0_0},
	{"max", 1, 134218307, 0, &Int32_t123_0_0_0},
	{"lazy", 2, 134218308, 0, &Boolean_t125_0_0_0},
	{"until", 3, 134218309, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitRepeat_m7914_MethodInfo = 
{
	"EmitRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitRepeat_m7914_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 634/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitUntil_m7915_ParameterInfos[] = 
{
	{"repeat", 0, 134218310, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitUntil_m7915_MethodInfo = 
{
	"EmitUntil"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitUntil_m7915_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 635/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitIn_m7916_ParameterInfos[] = 
{
	{"tail", 0, 134218311, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitIn_m7916_MethodInfo = 
{
	"EmitIn"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitIn_m7916_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 636/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitInfo_m7917_ParameterInfos[] = 
{
	{"count", 0, 134218312, 0, &Int32_t123_0_0_0},
	{"min", 1, 134218313, 0, &Int32_t123_0_0_0},
	{"max", 2, 134218314, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern const MethodInfo ICompiler_EmitInfo_m7917_MethodInfo = 
{
	"EmitInfo"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_Int32_t123/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitInfo_m7917_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 637/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitFastRepeat_m7918_ParameterInfos[] = 
{
	{"min", 0, 134218315, 0, &Int32_t123_0_0_0},
	{"max", 1, 134218316, 0, &Int32_t123_0_0_0},
	{"lazy", 2, 134218317, 0, &Boolean_t125_0_0_0},
	{"tail", 3, 134218318, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitFastRepeat_m7918_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitFastRepeat_m7918_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 638/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_EmitAnchor_m7919_ParameterInfos[] = 
{
	{"reverse", 0, 134218319, 0, &Boolean_t125_0_0_0},
	{"offset", 1, 134218320, 0, &Int32_t123_0_0_0},
	{"tail", 2, 134218321, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_SByte_t126_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_EmitAnchor_m7919_MethodInfo = 
{
	"EmitAnchor"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_SByte_t126_Int32_t123_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_EmitAnchor_m7919_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 639/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd()
extern const MethodInfo ICompiler_EmitBranchEnd_m7920_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 640/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd()
extern const MethodInfo ICompiler_EmitAlternationEnd_m7921_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 641/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink()
extern const MethodInfo ICompiler_NewLink_m7922_MethodInfo = 
{
	"NewLink"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1542_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 642/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo ICompiler_t1605_ICompiler_ResolveLink_m7923_ParameterInfos[] = 
{
	{"link", 0, 134218322, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo ICompiler_ResolveLink_m7923_MethodInfo = 
{
	"ResolveLink"/* name */
	, NULL/* method */
	, &ICompiler_t1605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ICompiler_t1605_ICompiler_ResolveLink_m7923_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 643/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ICompiler_t1605_MethodInfos[] =
{
	&ICompiler_GetMachineFactory_m7894_MethodInfo,
	&ICompiler_EmitFalse_m7895_MethodInfo,
	&ICompiler_EmitTrue_m7896_MethodInfo,
	&ICompiler_EmitCharacter_m7897_MethodInfo,
	&ICompiler_EmitCategory_m7898_MethodInfo,
	&ICompiler_EmitNotCategory_m7899_MethodInfo,
	&ICompiler_EmitRange_m7900_MethodInfo,
	&ICompiler_EmitSet_m7901_MethodInfo,
	&ICompiler_EmitString_m7902_MethodInfo,
	&ICompiler_EmitPosition_m7903_MethodInfo,
	&ICompiler_EmitOpen_m7904_MethodInfo,
	&ICompiler_EmitClose_m7905_MethodInfo,
	&ICompiler_EmitBalanceStart_m7906_MethodInfo,
	&ICompiler_EmitBalance_m7907_MethodInfo,
	&ICompiler_EmitReference_m7908_MethodInfo,
	&ICompiler_EmitIfDefined_m7909_MethodInfo,
	&ICompiler_EmitSub_m7910_MethodInfo,
	&ICompiler_EmitTest_m7911_MethodInfo,
	&ICompiler_EmitBranch_m7912_MethodInfo,
	&ICompiler_EmitJump_m7913_MethodInfo,
	&ICompiler_EmitRepeat_m7914_MethodInfo,
	&ICompiler_EmitUntil_m7915_MethodInfo,
	&ICompiler_EmitIn_m7916_MethodInfo,
	&ICompiler_EmitInfo_m7917_MethodInfo,
	&ICompiler_EmitFastRepeat_m7918_MethodInfo,
	&ICompiler_EmitAnchor_m7919_MethodInfo,
	&ICompiler_EmitBranchEnd_m7920_MethodInfo,
	&ICompiler_EmitAlternationEnd_m7921_MethodInfo,
	&ICompiler_NewLink_m7922_MethodInfo,
	&ICompiler_ResolveLink_m7923_MethodInfo,
	NULL
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType ICompiler_t1605_1_0_0;
struct ICompiler_t1605;
const Il2CppTypeDefinitionMetadata ICompiler_t1605_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ICompiler_t1605_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ICompiler_t1605_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ICompiler_t1605_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ICompiler_t1605_0_0_0/* byval_arg */
	, &ICompiler_t1605_1_0_0/* this_arg */
	, &ICompiler_t1605_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 30/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactory.h"
// Metadata Definition System.Text.RegularExpressions.InterpreterFactory
extern TypeInfo InterpreterFactory_t1543_il2cpp_TypeInfo;
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactoryMethodDeclarations.h"
extern const Il2CppType UInt16U5BU5D_t1462_0_0_0;
extern const Il2CppType UInt16U5BU5D_t1462_0_0_0;
static const ParameterInfo InterpreterFactory_t1543_InterpreterFactory__ctor_m7307_ParameterInfos[] = 
{
	{"pattern", 0, 134218323, 0, &UInt16U5BU5D_t1462_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
extern const MethodInfo InterpreterFactory__ctor_m7307_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InterpreterFactory__ctor_m7307/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, InterpreterFactory_t1543_InterpreterFactory__ctor_m7307_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 644/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
extern const MethodInfo InterpreterFactory_NewInstance_m7308_MethodInfo = 
{
	"NewInstance"/* name */
	, (methodPointerType)&InterpreterFactory_NewInstance_m7308/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &IMachine_t1526_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 645/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
extern const MethodInfo InterpreterFactory_get_GroupCount_m7309_MethodInfo = 
{
	"get_GroupCount"/* name */
	, (methodPointerType)&InterpreterFactory_get_GroupCount_m7309/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 646/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
extern const MethodInfo InterpreterFactory_get_Gap_m7310_MethodInfo = 
{
	"get_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_get_Gap_m7310/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 647/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo InterpreterFactory_t1543_InterpreterFactory_set_Gap_m7311_ParameterInfos[] = 
{
	{"value", 0, 134218324, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
extern const MethodInfo InterpreterFactory_set_Gap_m7311_MethodInfo = 
{
	"set_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_set_Gap_m7311/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, InterpreterFactory_t1543_InterpreterFactory_set_Gap_m7311_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 648/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
extern const MethodInfo InterpreterFactory_get_Mapping_m7312_MethodInfo = 
{
	"get_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_Mapping_m7312/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t1531_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 649/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IDictionary_t1531_0_0_0;
static const ParameterInfo InterpreterFactory_t1543_InterpreterFactory_set_Mapping_m7313_ParameterInfos[] = 
{
	{"value", 0, 134218325, 0, &IDictionary_t1531_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern const MethodInfo InterpreterFactory_set_Mapping_m7313_MethodInfo = 
{
	"set_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_Mapping_m7313/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, InterpreterFactory_t1543_InterpreterFactory_set_Mapping_m7313_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 650/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
extern const MethodInfo InterpreterFactory_get_NamesMapping_m7314_MethodInfo = 
{
	"get_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_NamesMapping_m7314/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t791_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 651/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t791_0_0_0;
static const ParameterInfo InterpreterFactory_t1543_InterpreterFactory_set_NamesMapping_m7315_ParameterInfos[] = 
{
	{"value", 0, 134218326, 0, &StringU5BU5D_t791_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
extern const MethodInfo InterpreterFactory_set_NamesMapping_m7315_MethodInfo = 
{
	"set_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_NamesMapping_m7315/* method */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, InterpreterFactory_t1543_InterpreterFactory_set_NamesMapping_m7315_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 652/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* InterpreterFactory_t1543_MethodInfos[] =
{
	&InterpreterFactory__ctor_m7307_MethodInfo,
	&InterpreterFactory_NewInstance_m7308_MethodInfo,
	&InterpreterFactory_get_GroupCount_m7309_MethodInfo,
	&InterpreterFactory_get_Gap_m7310_MethodInfo,
	&InterpreterFactory_set_Gap_m7311_MethodInfo,
	&InterpreterFactory_get_Mapping_m7312_MethodInfo,
	&InterpreterFactory_set_Mapping_m7313_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m7314_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m7315_MethodInfo,
	NULL
};
extern const MethodInfo InterpreterFactory_get_GroupCount_m7309_MethodInfo;
static const PropertyInfo InterpreterFactory_t1543____GroupCount_PropertyInfo = 
{
	&InterpreterFactory_t1543_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, &InterpreterFactory_get_GroupCount_m7309_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo InterpreterFactory_get_Gap_m7310_MethodInfo;
extern const MethodInfo InterpreterFactory_set_Gap_m7311_MethodInfo;
static const PropertyInfo InterpreterFactory_t1543____Gap_PropertyInfo = 
{
	&InterpreterFactory_t1543_il2cpp_TypeInfo/* parent */
	, "Gap"/* name */
	, &InterpreterFactory_get_Gap_m7310_MethodInfo/* get */
	, &InterpreterFactory_set_Gap_m7311_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo InterpreterFactory_get_Mapping_m7312_MethodInfo;
extern const MethodInfo InterpreterFactory_set_Mapping_m7313_MethodInfo;
static const PropertyInfo InterpreterFactory_t1543____Mapping_PropertyInfo = 
{
	&InterpreterFactory_t1543_il2cpp_TypeInfo/* parent */
	, "Mapping"/* name */
	, &InterpreterFactory_get_Mapping_m7312_MethodInfo/* get */
	, &InterpreterFactory_set_Mapping_m7313_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo InterpreterFactory_get_NamesMapping_m7314_MethodInfo;
extern const MethodInfo InterpreterFactory_set_NamesMapping_m7315_MethodInfo;
static const PropertyInfo InterpreterFactory_t1543____NamesMapping_PropertyInfo = 
{
	&InterpreterFactory_t1543_il2cpp_TypeInfo/* parent */
	, "NamesMapping"/* name */
	, &InterpreterFactory_get_NamesMapping_m7314_MethodInfo/* get */
	, &InterpreterFactory_set_NamesMapping_m7315_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* InterpreterFactory_t1543_PropertyInfos[] =
{
	&InterpreterFactory_t1543____GroupCount_PropertyInfo,
	&InterpreterFactory_t1543____Gap_PropertyInfo,
	&InterpreterFactory_t1543____Mapping_PropertyInfo,
	&InterpreterFactory_t1543____NamesMapping_PropertyInfo,
	NULL
};
extern const MethodInfo InterpreterFactory_NewInstance_m7308_MethodInfo;
static const Il2CppMethodReference InterpreterFactory_t1543_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&InterpreterFactory_NewInstance_m7308_MethodInfo,
	&InterpreterFactory_get_Mapping_m7312_MethodInfo,
	&InterpreterFactory_set_Mapping_m7313_MethodInfo,
	&InterpreterFactory_get_GroupCount_m7309_MethodInfo,
	&InterpreterFactory_get_Gap_m7310_MethodInfo,
	&InterpreterFactory_set_Gap_m7311_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m7314_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m7315_MethodInfo,
};
static bool InterpreterFactory_t1543_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* InterpreterFactory_t1543_InterfacesTypeInfos[] = 
{
	&IMachineFactory_t1530_0_0_0,
};
static Il2CppInterfaceOffsetPair InterpreterFactory_t1543_InterfacesOffsets[] = 
{
	{ &IMachineFactory_t1530_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType InterpreterFactory_t1543_0_0_0;
extern const Il2CppType InterpreterFactory_t1543_1_0_0;
struct InterpreterFactory_t1543;
const Il2CppTypeDefinitionMetadata InterpreterFactory_t1543_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, InterpreterFactory_t1543_InterfacesTypeInfos/* implementedInterfaces */
	, InterpreterFactory_t1543_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, InterpreterFactory_t1543_VTable/* vtableMethods */
	, InterpreterFactory_t1543_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 659/* fieldStart */

};
TypeInfo InterpreterFactory_t1543_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "InterpreterFactory"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, InterpreterFactory_t1543_MethodInfos/* methods */
	, InterpreterFactory_t1543_PropertyInfos/* properties */
	, NULL/* events */
	, &InterpreterFactory_t1543_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &InterpreterFactory_t1543_0_0_0/* byval_arg */
	, &InterpreterFactory_t1543_1_0_0/* this_arg */
	, &InterpreterFactory_t1543_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InterpreterFactory_t1543)/* instance_size */
	, sizeof (InterpreterFactory_t1543)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 4/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
extern TypeInfo Link_t1544_il2cpp_TypeInfo;
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_PatterMethodDeclarations.h"
static const MethodInfo* Link_t1544_MethodInfos[] =
{
	NULL
};
extern const MethodInfo ValueType_Equals_m2349_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m2350_MethodInfo;
extern const MethodInfo ValueType_ToString_m2353_MethodInfo;
static const Il2CppMethodReference Link_t1544_VTable[] =
{
	&ValueType_Equals_m2349_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&ValueType_GetHashCode_m2350_MethodInfo,
	&ValueType_ToString_m2353_MethodInfo,
};
static bool Link_t1544_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Link_t1544_0_0_0;
extern const Il2CppType Link_t1544_1_0_0;
extern const Il2CppType ValueType_t491_0_0_0;
extern TypeInfo PatternLinkStack_t1545_il2cpp_TypeInfo;
extern const Il2CppType PatternLinkStack_t1545_0_0_0;
const Il2CppTypeDefinitionMetadata Link_t1544_DefinitionMetadata = 
{
	&PatternLinkStack_t1545_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t491_0_0_0/* parent */
	, Link_t1544_VTable/* vtableMethods */
	, Link_t1544_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 663/* fieldStart */

};
TypeInfo Link_t1544_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Link"/* name */
	, ""/* namespaze */
	, Link_t1544_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Link_t1544_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Link_t1544_0_0_0/* byval_arg */
	, &Link_t1544_1_0_0/* this_arg */
	, &Link_t1544_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Link_t1544)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Link_t1544)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Link_t1544 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0MethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
extern const MethodInfo PatternLinkStack__ctor_m7316_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternLinkStack__ctor_m7316/* method */
	, &PatternLinkStack_t1545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 693/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo PatternLinkStack_t1545_PatternLinkStack_set_BaseAddress_m7317_ParameterInfos[] = 
{
	{"value", 0, 134218397, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
extern const MethodInfo PatternLinkStack_set_BaseAddress_m7317_MethodInfo = 
{
	"set_BaseAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_BaseAddress_m7317/* method */
	, &PatternLinkStack_t1545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, PatternLinkStack_t1545_PatternLinkStack_set_BaseAddress_m7317_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 694/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
extern const MethodInfo PatternLinkStack_get_OffsetAddress_m7318_MethodInfo = 
{
	"get_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_get_OffsetAddress_m7318/* method */
	, &PatternLinkStack_t1545_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 695/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo PatternLinkStack_t1545_PatternLinkStack_set_OffsetAddress_m7319_ParameterInfos[] = 
{
	{"value", 0, 134218398, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
extern const MethodInfo PatternLinkStack_set_OffsetAddress_m7319_MethodInfo = 
{
	"set_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_OffsetAddress_m7319/* method */
	, &PatternLinkStack_t1545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, PatternLinkStack_t1545_PatternLinkStack_set_OffsetAddress_m7319_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 696/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo PatternLinkStack_t1545_PatternLinkStack_GetOffset_m7320_ParameterInfos[] = 
{
	{"target_addr", 0, 134218399, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
extern const MethodInfo PatternLinkStack_GetOffset_m7320_MethodInfo = 
{
	"GetOffset"/* name */
	, (methodPointerType)&PatternLinkStack_GetOffset_m7320/* method */
	, &PatternLinkStack_t1545_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int32_t123/* invoker_method */
	, PatternLinkStack_t1545_PatternLinkStack_GetOffset_m7320_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 697/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
extern const MethodInfo PatternLinkStack_GetCurrent_m7321_MethodInfo = 
{
	"GetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_GetCurrent_m7321/* method */
	, &PatternLinkStack_t1545_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 698/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo PatternLinkStack_t1545_PatternLinkStack_SetCurrent_m7322_ParameterInfos[] = 
{
	{"l", 0, 134218400, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
extern const MethodInfo PatternLinkStack_SetCurrent_m7322_MethodInfo = 
{
	"SetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_SetCurrent_m7322/* method */
	, &PatternLinkStack_t1545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternLinkStack_t1545_PatternLinkStack_SetCurrent_m7322_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 699/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PatternLinkStack_t1545_MethodInfos[] =
{
	&PatternLinkStack__ctor_m7316_MethodInfo,
	&PatternLinkStack_set_BaseAddress_m7317_MethodInfo,
	&PatternLinkStack_get_OffsetAddress_m7318_MethodInfo,
	&PatternLinkStack_set_OffsetAddress_m7319_MethodInfo,
	&PatternLinkStack_GetOffset_m7320_MethodInfo,
	&PatternLinkStack_GetCurrent_m7321_MethodInfo,
	&PatternLinkStack_SetCurrent_m7322_MethodInfo,
	NULL
};
extern const MethodInfo PatternLinkStack_set_BaseAddress_m7317_MethodInfo;
static const PropertyInfo PatternLinkStack_t1545____BaseAddress_PropertyInfo = 
{
	&PatternLinkStack_t1545_il2cpp_TypeInfo/* parent */
	, "BaseAddress"/* name */
	, NULL/* get */
	, &PatternLinkStack_set_BaseAddress_m7317_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo PatternLinkStack_get_OffsetAddress_m7318_MethodInfo;
extern const MethodInfo PatternLinkStack_set_OffsetAddress_m7319_MethodInfo;
static const PropertyInfo PatternLinkStack_t1545____OffsetAddress_PropertyInfo = 
{
	&PatternLinkStack_t1545_il2cpp_TypeInfo/* parent */
	, "OffsetAddress"/* name */
	, &PatternLinkStack_get_OffsetAddress_m7318_MethodInfo/* get */
	, &PatternLinkStack_set_OffsetAddress_m7319_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* PatternLinkStack_t1545_PropertyInfos[] =
{
	&PatternLinkStack_t1545____BaseAddress_PropertyInfo,
	&PatternLinkStack_t1545____OffsetAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternLinkStack_t1545_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Link_t1544_0_0_0,
};
extern const MethodInfo PatternLinkStack_GetCurrent_m7321_MethodInfo;
extern const MethodInfo PatternLinkStack_SetCurrent_m7322_MethodInfo;
static const Il2CppMethodReference PatternLinkStack_t1545_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&PatternLinkStack_GetCurrent_m7321_MethodInfo,
	&PatternLinkStack_SetCurrent_m7322_MethodInfo,
};
static bool PatternLinkStack_t1545_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType PatternLinkStack_t1545_1_0_0;
extern const Il2CppType LinkStack_t1546_0_0_0;
extern TypeInfo PatternCompiler_t1547_il2cpp_TypeInfo;
extern const Il2CppType PatternCompiler_t1547_0_0_0;
struct PatternLinkStack_t1545;
const Il2CppTypeDefinitionMetadata PatternLinkStack_t1545_DefinitionMetadata = 
{
	&PatternCompiler_t1547_0_0_0/* declaringType */
	, PatternLinkStack_t1545_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkStack_t1546_0_0_0/* parent */
	, PatternLinkStack_t1545_VTable/* vtableMethods */
	, PatternLinkStack_t1545_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 665/* fieldStart */

};
TypeInfo PatternLinkStack_t1545_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternLinkStack"/* name */
	, ""/* namespaze */
	, PatternLinkStack_t1545_MethodInfos/* methods */
	, PatternLinkStack_t1545_PropertyInfos/* properties */
	, NULL/* events */
	, &PatternLinkStack_t1545_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PatternLinkStack_t1545_0_0_0/* byval_arg */
	, &PatternLinkStack_t1545_1_0_0/* this_arg */
	, &PatternLinkStack_t1545_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternLinkStack_t1545)/* instance_size */
	, sizeof (PatternLinkStack_t1545)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompiler.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompilerMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
extern const MethodInfo PatternCompiler__ctor_m7323_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternCompiler__ctor_m7323/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 653/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType OpCode_t1534_0_0_0;
extern const Il2CppType OpCode_t1534_0_0_0;
extern const Il2CppType OpFlags_t1535_0_0_0;
extern const Il2CppType OpFlags_t1535_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EncodeOp_m7324_ParameterInfos[] = 
{
	{"op", 0, 134218327, 0, &OpCode_t1534_0_0_0},
	{"flags", 1, 134218328, 0, &OpFlags_t1535_0_0_0},
};
extern const Il2CppType UInt16_t415_0_0_0;
extern void* RuntimeInvoker_UInt16_t415_UInt16_t415_UInt16_t415 (const MethodInfo* method, void* obj, void** args);
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern const MethodInfo PatternCompiler_EncodeOp_m7324_MethodInfo = 
{
	"EncodeOp"/* name */
	, (methodPointerType)&PatternCompiler_EncodeOp_m7324/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &UInt16_t415_0_0_0/* return_type */
	, RuntimeInvoker_UInt16_t415_UInt16_t415_UInt16_t415/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EncodeOp_m7324_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 654/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
extern const MethodInfo PatternCompiler_GetMachineFactory_m7325_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, (methodPointerType)&PatternCompiler_GetMachineFactory_m7325/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1530_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 655/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
extern const MethodInfo PatternCompiler_EmitFalse_m7326_MethodInfo = 
{
	"EmitFalse"/* name */
	, (methodPointerType)&PatternCompiler_EmitFalse_m7326/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 656/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
extern const MethodInfo PatternCompiler_EmitTrue_m7327_MethodInfo = 
{
	"EmitTrue"/* name */
	, (methodPointerType)&PatternCompiler_EmitTrue_m7327/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 657/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitCount_m7328_ParameterInfos[] = 
{
	{"count", 0, 134218329, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
extern const MethodInfo PatternCompiler_EmitCount_m7328_MethodInfo = 
{
	"EmitCount"/* name */
	, (methodPointerType)&PatternCompiler_EmitCount_m7328/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitCount_m7328_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 658/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitCharacter_m7329_ParameterInfos[] = 
{
	{"c", 0, 134218330, 0, &Char_t412_0_0_0},
	{"negate", 1, 134218331, 0, &Boolean_t125_0_0_0},
	{"ignore", 2, 134218332, 0, &Boolean_t125_0_0_0},
	{"reverse", 3, 134218333, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501_SByte_t126_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitCharacter_m7329_MethodInfo = 
{
	"EmitCharacter"/* name */
	, (methodPointerType)&PatternCompiler_EmitCharacter_m7329/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501_SByte_t126_SByte_t126_SByte_t126/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitCharacter_m7329_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 659/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1540_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitCategory_m7330_ParameterInfos[] = 
{
	{"cat", 0, 134218334, 0, &Category_t1540_0_0_0},
	{"negate", 1, 134218335, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218336, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitCategory_m7330_MethodInfo = 
{
	"EmitCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitCategory_m7330/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126_SByte_t126/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitCategory_m7330_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 660/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1540_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitNotCategory_m7331_ParameterInfos[] = 
{
	{"cat", 0, 134218337, 0, &Category_t1540_0_0_0},
	{"negate", 1, 134218338, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218339, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitNotCategory_m7331_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitNotCategory_m7331/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126_SByte_t126/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitNotCategory_m7331_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 661/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitRange_m7332_ParameterInfos[] = 
{
	{"lo", 0, 134218340, 0, &Char_t412_0_0_0},
	{"hi", 1, 134218341, 0, &Char_t412_0_0_0},
	{"negate", 2, 134218342, 0, &Boolean_t125_0_0_0},
	{"ignore", 3, 134218343, 0, &Boolean_t125_0_0_0},
	{"reverse", 4, 134218344, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501_Int16_t501_SByte_t126_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitRange_m7332_MethodInfo = 
{
	"EmitRange"/* name */
	, (methodPointerType)&PatternCompiler_EmitRange_m7332/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501_Int16_t501_SByte_t126_SByte_t126_SByte_t126/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitRange_m7332_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 662/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType BitArray_t1578_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitSet_m7333_ParameterInfos[] = 
{
	{"lo", 0, 134218345, 0, &Char_t412_0_0_0},
	{"set", 1, 134218346, 0, &BitArray_t1578_0_0_0},
	{"negate", 2, 134218347, 0, &Boolean_t125_0_0_0},
	{"ignore", 3, 134218348, 0, &Boolean_t125_0_0_0},
	{"reverse", 4, 134218349, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501_Object_t_SByte_t126_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitSet_m7333_MethodInfo = 
{
	"EmitSet"/* name */
	, (methodPointerType)&PatternCompiler_EmitSet_m7333/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501_Object_t_SByte_t126_SByte_t126_SByte_t126/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitSet_m7333_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 663/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitString_m7334_ParameterInfos[] = 
{
	{"str", 0, 134218350, 0, &String_t_0_0_0},
	{"ignore", 1, 134218351, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218352, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitString_m7334_MethodInfo = 
{
	"EmitString"/* name */
	, (methodPointerType)&PatternCompiler_EmitString_m7334/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126_SByte_t126/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitString_m7334_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 664/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Position_t1536_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitPosition_m7335_ParameterInfos[] = 
{
	{"pos", 0, 134218353, 0, &Position_t1536_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern const MethodInfo PatternCompiler_EmitPosition_m7335_MethodInfo = 
{
	"EmitPosition"/* name */
	, (methodPointerType)&PatternCompiler_EmitPosition_m7335/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitPosition_m7335_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 665/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitOpen_m7336_ParameterInfos[] = 
{
	{"gid", 0, 134218354, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
extern const MethodInfo PatternCompiler_EmitOpen_m7336_MethodInfo = 
{
	"EmitOpen"/* name */
	, (methodPointerType)&PatternCompiler_EmitOpen_m7336/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitOpen_m7336_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 666/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitClose_m7337_ParameterInfos[] = 
{
	{"gid", 0, 134218355, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
extern const MethodInfo PatternCompiler_EmitClose_m7337_MethodInfo = 
{
	"EmitClose"/* name */
	, (methodPointerType)&PatternCompiler_EmitClose_m7337/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitClose_m7337_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 667/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitBalanceStart_m7338_ParameterInfos[] = 
{
	{"gid", 0, 134218356, 0, &Int32_t123_0_0_0},
	{"balance", 1, 134218357, 0, &Int32_t123_0_0_0},
	{"capture", 2, 134218358, 0, &Boolean_t125_0_0_0},
	{"tail", 3, 134218359, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitBalanceStart_m7338_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalanceStart_m7338/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitBalanceStart_m7338_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 668/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
extern const MethodInfo PatternCompiler_EmitBalance_m7339_MethodInfo = 
{
	"EmitBalance"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalance_m7339/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 669/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitReference_m7340_ParameterInfos[] = 
{
	{"gid", 0, 134218360, 0, &Int32_t123_0_0_0},
	{"ignore", 1, 134218361, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218362, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_EmitReference_m7340_MethodInfo = 
{
	"EmitReference"/* name */
	, (methodPointerType)&PatternCompiler_EmitReference_m7340/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_SByte_t126_SByte_t126/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitReference_m7340_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 670/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitIfDefined_m7341_ParameterInfos[] = 
{
	{"gid", 0, 134218363, 0, &Int32_t123_0_0_0},
	{"tail", 1, 134218364, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitIfDefined_m7341_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, (methodPointerType)&PatternCompiler_EmitIfDefined_m7341/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitIfDefined_m7341_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 671/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitSub_m7342_ParameterInfos[] = 
{
	{"tail", 0, 134218365, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitSub_m7342_MethodInfo = 
{
	"EmitSub"/* name */
	, (methodPointerType)&PatternCompiler_EmitSub_m7342/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitSub_m7342_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 672/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitTest_m7343_ParameterInfos[] = 
{
	{"yes", 0, 134218366, 0, &LinkRef_t1542_0_0_0},
	{"tail", 1, 134218367, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitTest_m7343_MethodInfo = 
{
	"EmitTest"/* name */
	, (methodPointerType)&PatternCompiler_EmitTest_m7343/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitTest_m7343_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 673/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitBranch_m7344_ParameterInfos[] = 
{
	{"next", 0, 134218368, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitBranch_m7344_MethodInfo = 
{
	"EmitBranch"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranch_m7344/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitBranch_m7344_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 674/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitJump_m7345_ParameterInfos[] = 
{
	{"target", 0, 134218369, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitJump_m7345_MethodInfo = 
{
	"EmitJump"/* name */
	, (methodPointerType)&PatternCompiler_EmitJump_m7345/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitJump_m7345_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 675/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitRepeat_m7346_ParameterInfos[] = 
{
	{"min", 0, 134218370, 0, &Int32_t123_0_0_0},
	{"max", 1, 134218371, 0, &Int32_t123_0_0_0},
	{"lazy", 2, 134218372, 0, &Boolean_t125_0_0_0},
	{"until", 3, 134218373, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitRepeat_m7346_MethodInfo = 
{
	"EmitRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitRepeat_m7346/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitRepeat_m7346_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 676/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitUntil_m7347_ParameterInfos[] = 
{
	{"repeat", 0, 134218374, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitUntil_m7347_MethodInfo = 
{
	"EmitUntil"/* name */
	, (methodPointerType)&PatternCompiler_EmitUntil_m7347/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitUntil_m7347_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 677/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitFastRepeat_m7348_ParameterInfos[] = 
{
	{"min", 0, 134218375, 0, &Int32_t123_0_0_0},
	{"max", 1, 134218376, 0, &Int32_t123_0_0_0},
	{"lazy", 2, 134218377, 0, &Boolean_t125_0_0_0},
	{"tail", 3, 134218378, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitFastRepeat_m7348_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitFastRepeat_m7348/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitFastRepeat_m7348_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 678/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitIn_m7349_ParameterInfos[] = 
{
	{"tail", 0, 134218379, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitIn_m7349_MethodInfo = 
{
	"EmitIn"/* name */
	, (methodPointerType)&PatternCompiler_EmitIn_m7349/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitIn_m7349_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 679/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitAnchor_m7350_ParameterInfos[] = 
{
	{"reverse", 0, 134218380, 0, &Boolean_t125_0_0_0},
	{"offset", 1, 134218381, 0, &Int32_t123_0_0_0},
	{"tail", 2, 134218382, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_SByte_t126_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitAnchor_m7350_MethodInfo = 
{
	"EmitAnchor"/* name */
	, (methodPointerType)&PatternCompiler_EmitAnchor_m7350/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_SByte_t126_Int32_t123_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitAnchor_m7350_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 680/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitInfo_m7351_ParameterInfos[] = 
{
	{"count", 0, 134218383, 0, &Int32_t123_0_0_0},
	{"min", 1, 134218384, 0, &Int32_t123_0_0_0},
	{"max", 2, 134218385, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern const MethodInfo PatternCompiler_EmitInfo_m7351_MethodInfo = 
{
	"EmitInfo"/* name */
	, (methodPointerType)&PatternCompiler_EmitInfo_m7351/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_Int32_t123/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitInfo_m7351_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 681/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
extern const MethodInfo PatternCompiler_NewLink_m7352_MethodInfo = 
{
	"NewLink"/* name */
	, (methodPointerType)&PatternCompiler_NewLink_m7352/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1542_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 32/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 682/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_ResolveLink_m7353_ParameterInfos[] = 
{
	{"lref", 0, 134218386, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_ResolveLink_m7353_MethodInfo = 
{
	"ResolveLink"/* name */
	, (methodPointerType)&PatternCompiler_ResolveLink_m7353/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_ResolveLink_m7353_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 33/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 683/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
extern const MethodInfo PatternCompiler_EmitBranchEnd_m7354_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranchEnd_m7354/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 30/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 684/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
extern const MethodInfo PatternCompiler_EmitAlternationEnd_m7355_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitAlternationEnd_m7355/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 31/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 685/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_MakeFlags_m7356_ParameterInfos[] = 
{
	{"negate", 0, 134218387, 0, &Boolean_t125_0_0_0},
	{"ignore", 1, 134218388, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218389, 0, &Boolean_t125_0_0_0},
	{"lazy", 3, 134218390, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_OpFlags_t1535_SByte_t126_SByte_t126_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo PatternCompiler_MakeFlags_m7356_MethodInfo = 
{
	"MakeFlags"/* name */
	, (methodPointerType)&PatternCompiler_MakeFlags_m7356/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t1535_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t1535_SByte_t126_SByte_t126_SByte_t126_SByte_t126/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_MakeFlags_m7356_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 686/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType OpCode_t1534_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_Emit_m7357_ParameterInfos[] = 
{
	{"op", 0, 134218391, 0, &OpCode_t1534_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
extern const MethodInfo PatternCompiler_Emit_m7357_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m7357/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_Emit_m7357_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 687/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType OpCode_t1534_0_0_0;
extern const Il2CppType OpFlags_t1535_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_Emit_m7358_ParameterInfos[] = 
{
	{"op", 0, 134218392, 0, &OpCode_t1534_0_0_0},
	{"flags", 1, 134218393, 0, &OpFlags_t1535_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415_UInt16_t415 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern const MethodInfo PatternCompiler_Emit_m7358_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m7358/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415_UInt16_t415/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_Emit_m7358_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 688/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt16_t415_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_Emit_m7359_ParameterInfos[] = 
{
	{"word", 0, 134218394, 0, &UInt16_t415_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
extern const MethodInfo PatternCompiler_Emit_m7359_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m7359/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_Emit_m7359_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 689/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
extern const MethodInfo PatternCompiler_get_CurrentAddress_m7360_MethodInfo = 
{
	"get_CurrentAddress"/* name */
	, (methodPointerType)&PatternCompiler_get_CurrentAddress_m7360/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 690/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_BeginLink_m7361_ParameterInfos[] = 
{
	{"lref", 0, 134218395, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_BeginLink_m7361_MethodInfo = 
{
	"BeginLink"/* name */
	, (methodPointerType)&PatternCompiler_BeginLink_m7361/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_BeginLink_m7361_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 691/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType LinkRef_t1542_0_0_0;
static const ParameterInfo PatternCompiler_t1547_PatternCompiler_EmitLink_m7362_ParameterInfos[] = 
{
	{"lref", 0, 134218396, 0, &LinkRef_t1542_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern const MethodInfo PatternCompiler_EmitLink_m7362_MethodInfo = 
{
	"EmitLink"/* name */
	, (methodPointerType)&PatternCompiler_EmitLink_m7362/* method */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, PatternCompiler_t1547_PatternCompiler_EmitLink_m7362_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 692/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PatternCompiler_t1547_MethodInfos[] =
{
	&PatternCompiler__ctor_m7323_MethodInfo,
	&PatternCompiler_EncodeOp_m7324_MethodInfo,
	&PatternCompiler_GetMachineFactory_m7325_MethodInfo,
	&PatternCompiler_EmitFalse_m7326_MethodInfo,
	&PatternCompiler_EmitTrue_m7327_MethodInfo,
	&PatternCompiler_EmitCount_m7328_MethodInfo,
	&PatternCompiler_EmitCharacter_m7329_MethodInfo,
	&PatternCompiler_EmitCategory_m7330_MethodInfo,
	&PatternCompiler_EmitNotCategory_m7331_MethodInfo,
	&PatternCompiler_EmitRange_m7332_MethodInfo,
	&PatternCompiler_EmitSet_m7333_MethodInfo,
	&PatternCompiler_EmitString_m7334_MethodInfo,
	&PatternCompiler_EmitPosition_m7335_MethodInfo,
	&PatternCompiler_EmitOpen_m7336_MethodInfo,
	&PatternCompiler_EmitClose_m7337_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m7338_MethodInfo,
	&PatternCompiler_EmitBalance_m7339_MethodInfo,
	&PatternCompiler_EmitReference_m7340_MethodInfo,
	&PatternCompiler_EmitIfDefined_m7341_MethodInfo,
	&PatternCompiler_EmitSub_m7342_MethodInfo,
	&PatternCompiler_EmitTest_m7343_MethodInfo,
	&PatternCompiler_EmitBranch_m7344_MethodInfo,
	&PatternCompiler_EmitJump_m7345_MethodInfo,
	&PatternCompiler_EmitRepeat_m7346_MethodInfo,
	&PatternCompiler_EmitUntil_m7347_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m7348_MethodInfo,
	&PatternCompiler_EmitIn_m7349_MethodInfo,
	&PatternCompiler_EmitAnchor_m7350_MethodInfo,
	&PatternCompiler_EmitInfo_m7351_MethodInfo,
	&PatternCompiler_NewLink_m7352_MethodInfo,
	&PatternCompiler_ResolveLink_m7353_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m7354_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m7355_MethodInfo,
	&PatternCompiler_MakeFlags_m7356_MethodInfo,
	&PatternCompiler_Emit_m7357_MethodInfo,
	&PatternCompiler_Emit_m7358_MethodInfo,
	&PatternCompiler_Emit_m7359_MethodInfo,
	&PatternCompiler_get_CurrentAddress_m7360_MethodInfo,
	&PatternCompiler_BeginLink_m7361_MethodInfo,
	&PatternCompiler_EmitLink_m7362_MethodInfo,
	NULL
};
extern const MethodInfo PatternCompiler_get_CurrentAddress_m7360_MethodInfo;
static const PropertyInfo PatternCompiler_t1547____CurrentAddress_PropertyInfo = 
{
	&PatternCompiler_t1547_il2cpp_TypeInfo/* parent */
	, "CurrentAddress"/* name */
	, &PatternCompiler_get_CurrentAddress_m7360_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* PatternCompiler_t1547_PropertyInfos[] =
{
	&PatternCompiler_t1547____CurrentAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternCompiler_t1547_il2cpp_TypeInfo__nestedTypes[1] =
{
	&PatternLinkStack_t1545_0_0_0,
};
extern const MethodInfo PatternCompiler_GetMachineFactory_m7325_MethodInfo;
extern const MethodInfo PatternCompiler_EmitFalse_m7326_MethodInfo;
extern const MethodInfo PatternCompiler_EmitTrue_m7327_MethodInfo;
extern const MethodInfo PatternCompiler_EmitCharacter_m7329_MethodInfo;
extern const MethodInfo PatternCompiler_EmitCategory_m7330_MethodInfo;
extern const MethodInfo PatternCompiler_EmitNotCategory_m7331_MethodInfo;
extern const MethodInfo PatternCompiler_EmitRange_m7332_MethodInfo;
extern const MethodInfo PatternCompiler_EmitSet_m7333_MethodInfo;
extern const MethodInfo PatternCompiler_EmitString_m7334_MethodInfo;
extern const MethodInfo PatternCompiler_EmitPosition_m7335_MethodInfo;
extern const MethodInfo PatternCompiler_EmitOpen_m7336_MethodInfo;
extern const MethodInfo PatternCompiler_EmitClose_m7337_MethodInfo;
extern const MethodInfo PatternCompiler_EmitBalanceStart_m7338_MethodInfo;
extern const MethodInfo PatternCompiler_EmitBalance_m7339_MethodInfo;
extern const MethodInfo PatternCompiler_EmitReference_m7340_MethodInfo;
extern const MethodInfo PatternCompiler_EmitIfDefined_m7341_MethodInfo;
extern const MethodInfo PatternCompiler_EmitSub_m7342_MethodInfo;
extern const MethodInfo PatternCompiler_EmitTest_m7343_MethodInfo;
extern const MethodInfo PatternCompiler_EmitBranch_m7344_MethodInfo;
extern const MethodInfo PatternCompiler_EmitJump_m7345_MethodInfo;
extern const MethodInfo PatternCompiler_EmitRepeat_m7346_MethodInfo;
extern const MethodInfo PatternCompiler_EmitUntil_m7347_MethodInfo;
extern const MethodInfo PatternCompiler_EmitIn_m7349_MethodInfo;
extern const MethodInfo PatternCompiler_EmitInfo_m7351_MethodInfo;
extern const MethodInfo PatternCompiler_EmitFastRepeat_m7348_MethodInfo;
extern const MethodInfo PatternCompiler_EmitAnchor_m7350_MethodInfo;
extern const MethodInfo PatternCompiler_EmitBranchEnd_m7354_MethodInfo;
extern const MethodInfo PatternCompiler_EmitAlternationEnd_m7355_MethodInfo;
extern const MethodInfo PatternCompiler_NewLink_m7352_MethodInfo;
extern const MethodInfo PatternCompiler_ResolveLink_m7353_MethodInfo;
static const Il2CppMethodReference PatternCompiler_t1547_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&PatternCompiler_GetMachineFactory_m7325_MethodInfo,
	&PatternCompiler_EmitFalse_m7326_MethodInfo,
	&PatternCompiler_EmitTrue_m7327_MethodInfo,
	&PatternCompiler_EmitCharacter_m7329_MethodInfo,
	&PatternCompiler_EmitCategory_m7330_MethodInfo,
	&PatternCompiler_EmitNotCategory_m7331_MethodInfo,
	&PatternCompiler_EmitRange_m7332_MethodInfo,
	&PatternCompiler_EmitSet_m7333_MethodInfo,
	&PatternCompiler_EmitString_m7334_MethodInfo,
	&PatternCompiler_EmitPosition_m7335_MethodInfo,
	&PatternCompiler_EmitOpen_m7336_MethodInfo,
	&PatternCompiler_EmitClose_m7337_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m7338_MethodInfo,
	&PatternCompiler_EmitBalance_m7339_MethodInfo,
	&PatternCompiler_EmitReference_m7340_MethodInfo,
	&PatternCompiler_EmitIfDefined_m7341_MethodInfo,
	&PatternCompiler_EmitSub_m7342_MethodInfo,
	&PatternCompiler_EmitTest_m7343_MethodInfo,
	&PatternCompiler_EmitBranch_m7344_MethodInfo,
	&PatternCompiler_EmitJump_m7345_MethodInfo,
	&PatternCompiler_EmitRepeat_m7346_MethodInfo,
	&PatternCompiler_EmitUntil_m7347_MethodInfo,
	&PatternCompiler_EmitIn_m7349_MethodInfo,
	&PatternCompiler_EmitInfo_m7351_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m7348_MethodInfo,
	&PatternCompiler_EmitAnchor_m7350_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m7354_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m7355_MethodInfo,
	&PatternCompiler_NewLink_m7352_MethodInfo,
	&PatternCompiler_ResolveLink_m7353_MethodInfo,
};
static bool PatternCompiler_t1547_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* PatternCompiler_t1547_InterfacesTypeInfos[] = 
{
	&ICompiler_t1605_0_0_0,
};
static Il2CppInterfaceOffsetPair PatternCompiler_t1547_InterfacesOffsets[] = 
{
	{ &ICompiler_t1605_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType PatternCompiler_t1547_1_0_0;
struct PatternCompiler_t1547;
const Il2CppTypeDefinitionMetadata PatternCompiler_t1547_DefinitionMetadata = 
{
	NULL/* declaringType */
	, PatternCompiler_t1547_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, PatternCompiler_t1547_InterfacesTypeInfos/* implementedInterfaces */
	, PatternCompiler_t1547_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PatternCompiler_t1547_VTable/* vtableMethods */
	, PatternCompiler_t1547_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 666/* fieldStart */

};
TypeInfo PatternCompiler_t1547_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternCompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, PatternCompiler_t1547_MethodInfos/* methods */
	, PatternCompiler_t1547_PropertyInfos/* properties */
	, NULL/* events */
	, &PatternCompiler_t1547_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PatternCompiler_t1547_0_0_0/* byval_arg */
	, &PatternCompiler_t1547_1_0_0/* this_arg */
	, &PatternCompiler_t1547_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternCompiler_t1547)/* instance_size */
	, sizeof (PatternCompiler_t1547)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 40/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 34/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStack.h"
// Metadata Definition System.Text.RegularExpressions.LinkStack
extern TypeInfo LinkStack_t1546_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStackMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::.ctor()
extern const MethodInfo LinkStack__ctor_m7363_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkStack__ctor_m7363/* method */
	, &LinkStack_t1546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 700/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::Push()
extern const MethodInfo LinkStack_Push_m7364_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&LinkStack_Push_m7364/* method */
	, &LinkStack_t1546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 701/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.LinkStack::Pop()
extern const MethodInfo LinkStack_Pop_m7365_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&LinkStack_Pop_m7365/* method */
	, &LinkStack_t1546_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 702/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.LinkStack::GetCurrent()
extern const MethodInfo LinkStack_GetCurrent_m7924_MethodInfo = 
{
	"GetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1546_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 703/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo LinkStack_t1546_LinkStack_SetCurrent_m7925_ParameterInfos[] = 
{
	{"l", 0, 134218401, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::SetCurrent(System.Object)
extern const MethodInfo LinkStack_SetCurrent_m7925_MethodInfo = 
{
	"SetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, LinkStack_t1546_LinkStack_SetCurrent_m7925_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 704/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LinkStack_t1546_MethodInfos[] =
{
	&LinkStack__ctor_m7363_MethodInfo,
	&LinkStack_Push_m7364_MethodInfo,
	&LinkStack_Pop_m7365_MethodInfo,
	&LinkStack_GetCurrent_m7924_MethodInfo,
	&LinkStack_SetCurrent_m7925_MethodInfo,
	NULL
};
static const Il2CppMethodReference LinkStack_t1546_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	NULL,
	NULL,
};
static bool LinkStack_t1546_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType LinkStack_t1546_1_0_0;
struct LinkStack_t1546;
const Il2CppTypeDefinitionMetadata LinkStack_t1546_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkRef_t1542_0_0_0/* parent */
	, LinkStack_t1546_VTable/* vtableMethods */
	, LinkStack_t1546_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 667/* fieldStart */

};
TypeInfo LinkStack_t1546_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkStack"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkStack_t1546_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &LinkStack_t1546_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &LinkStack_t1546_0_0_0/* byval_arg */
	, &LinkStack_t1546_1_0_0/* this_arg */
	, &LinkStack_t1546_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkStack_t1546)/* instance_size */
	, sizeof (LinkStack_t1546)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
// Metadata Definition System.Text.RegularExpressions.Mark
extern TypeInfo Mark_t1548_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Mark::get_IsDefined()
extern const MethodInfo Mark_get_IsDefined_m7366_MethodInfo = 
{
	"get_IsDefined"/* name */
	, (methodPointerType)&Mark_get_IsDefined_m7366/* method */
	, &Mark_t1548_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 705/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Index()
extern const MethodInfo Mark_get_Index_m7367_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&Mark_get_Index_m7367/* method */
	, &Mark_t1548_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 706/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Length()
extern const MethodInfo Mark_get_Length_m7368_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&Mark_get_Length_m7368/* method */
	, &Mark_t1548_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 707/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Mark_t1548_MethodInfos[] =
{
	&Mark_get_IsDefined_m7366_MethodInfo,
	&Mark_get_Index_m7367_MethodInfo,
	&Mark_get_Length_m7368_MethodInfo,
	NULL
};
extern const MethodInfo Mark_get_IsDefined_m7366_MethodInfo;
static const PropertyInfo Mark_t1548____IsDefined_PropertyInfo = 
{
	&Mark_t1548_il2cpp_TypeInfo/* parent */
	, "IsDefined"/* name */
	, &Mark_get_IsDefined_m7366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Mark_get_Index_m7367_MethodInfo;
static const PropertyInfo Mark_t1548____Index_PropertyInfo = 
{
	&Mark_t1548_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &Mark_get_Index_m7367_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Mark_get_Length_m7368_MethodInfo;
static const PropertyInfo Mark_t1548____Length_PropertyInfo = 
{
	&Mark_t1548_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &Mark_get_Length_m7368_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Mark_t1548_PropertyInfos[] =
{
	&Mark_t1548____IsDefined_PropertyInfo,
	&Mark_t1548____Index_PropertyInfo,
	&Mark_t1548____Length_PropertyInfo,
	NULL
};
static const Il2CppMethodReference Mark_t1548_VTable[] =
{
	&ValueType_Equals_m2349_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&ValueType_GetHashCode_m2350_MethodInfo,
	&ValueType_ToString_m2353_MethodInfo,
};
static bool Mark_t1548_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Mark_t1548_0_0_0;
extern const Il2CppType Mark_t1548_1_0_0;
const Il2CppTypeDefinitionMetadata Mark_t1548_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t491_0_0_0/* parent */
	, Mark_t1548_VTable/* vtableMethods */
	, Mark_t1548_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 668/* fieldStart */

};
TypeInfo Mark_t1548_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mark"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Mark_t1548_MethodInfos/* methods */
	, Mark_t1548_PropertyInfos/* properties */
	, NULL/* events */
	, &Mark_t1548_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Mark_t1548_0_0_0/* byval_arg */
	, &Mark_t1548_1_0_0/* this_arg */
	, &Mark_t1548_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mark_t1548)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mark_t1548)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Mark_t1548 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 3/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/IntStack
extern TypeInfo IntStack_t1549_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStackMethodDeclarations.h"
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern const MethodInfo IntStack_Pop_m7369_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&IntStack_Pop_m7369/* method */
	, &IntStack_t1549_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 729/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo IntStack_t1549_IntStack_Push_m7370_ParameterInfos[] = 
{
	{"value", 0, 134218439, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern const MethodInfo IntStack_Push_m7370_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&IntStack_Push_m7370/* method */
	, &IntStack_t1549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, IntStack_t1549_IntStack_Push_m7370_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 730/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern const MethodInfo IntStack_get_Count_m7371_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntStack_get_Count_m7371/* method */
	, &IntStack_t1549_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 731/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo IntStack_t1549_IntStack_set_Count_m7372_ParameterInfos[] = 
{
	{"value", 0, 134218440, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern const MethodInfo IntStack_set_Count_m7372_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&IntStack_set_Count_m7372/* method */
	, &IntStack_t1549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, IntStack_t1549_IntStack_set_Count_m7372_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 732/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IntStack_t1549_MethodInfos[] =
{
	&IntStack_Pop_m7369_MethodInfo,
	&IntStack_Push_m7370_MethodInfo,
	&IntStack_get_Count_m7371_MethodInfo,
	&IntStack_set_Count_m7372_MethodInfo,
	NULL
};
extern const MethodInfo IntStack_get_Count_m7371_MethodInfo;
extern const MethodInfo IntStack_set_Count_m7372_MethodInfo;
static const PropertyInfo IntStack_t1549____Count_PropertyInfo = 
{
	&IntStack_t1549_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntStack_get_Count_m7371_MethodInfo/* get */
	, &IntStack_set_Count_m7372_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IntStack_t1549_PropertyInfos[] =
{
	&IntStack_t1549____Count_PropertyInfo,
	NULL
};
static const Il2CppMethodReference IntStack_t1549_VTable[] =
{
	&ValueType_Equals_m2349_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&ValueType_GetHashCode_m2350_MethodInfo,
	&ValueType_ToString_m2353_MethodInfo,
};
static bool IntStack_t1549_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType IntStack_t1549_0_0_0;
extern const Il2CppType IntStack_t1549_1_0_0;
extern TypeInfo Interpreter_t1554_il2cpp_TypeInfo;
extern const Il2CppType Interpreter_t1554_0_0_0;
const Il2CppTypeDefinitionMetadata IntStack_t1549_DefinitionMetadata = 
{
	&Interpreter_t1554_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t491_0_0_0/* parent */
	, IntStack_t1549_VTable/* vtableMethods */
	, IntStack_t1549_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 671/* fieldStart */

};
TypeInfo IntStack_t1549_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntStack"/* name */
	, ""/* namespaze */
	, IntStack_t1549_MethodInfos/* methods */
	, IntStack_t1549_PropertyInfos/* properties */
	, NULL/* events */
	, &IntStack_t1549_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IntStack_t1549_0_0_0/* byval_arg */
	, &IntStack_t1549_1_0_0/* this_arg */
	, &IntStack_t1549_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)IntStack_t1549_marshal/* marshal_to_native_func */
	, (methodPointerType)IntStack_t1549_marshal_back/* marshal_from_native_func */
	, (methodPointerType)IntStack_t1549_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (IntStack_t1549)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (IntStack_t1549)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(IntStack_t1549_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatCont.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/RepeatContext
extern TypeInfo RepeatContext_t1550_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatContMethodDeclarations.h"
extern const Il2CppType RepeatContext_t1550_0_0_0;
extern const Il2CppType RepeatContext_t1550_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo RepeatContext_t1550_RepeatContext__ctor_m7373_ParameterInfos[] = 
{
	{"previous", 0, 134218441, 0, &RepeatContext_t1550_0_0_0},
	{"min", 1, 134218442, 0, &Int32_t123_0_0_0},
	{"max", 2, 134218443, 0, &Int32_t123_0_0_0},
	{"lazy", 3, 134218444, 0, &Boolean_t125_0_0_0},
	{"expr_pc", 4, 134218445, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123_Int32_t123_SByte_t126_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern const MethodInfo RepeatContext__ctor_m7373_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RepeatContext__ctor_m7373/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123_Int32_t123_SByte_t126_Int32_t123/* invoker_method */
	, RepeatContext_t1550_RepeatContext__ctor_m7373_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 733/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
extern const MethodInfo RepeatContext_get_Count_m7374_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&RepeatContext_get_Count_m7374/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 734/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo RepeatContext_t1550_RepeatContext_set_Count_m7375_ParameterInfos[] = 
{
	{"value", 0, 134218446, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
extern const MethodInfo RepeatContext_set_Count_m7375_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&RepeatContext_set_Count_m7375/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, RepeatContext_t1550_RepeatContext_set_Count_m7375_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 735/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
extern const MethodInfo RepeatContext_get_Start_m7376_MethodInfo = 
{
	"get_Start"/* name */
	, (methodPointerType)&RepeatContext_get_Start_m7376/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 736/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo RepeatContext_t1550_RepeatContext_set_Start_m7377_ParameterInfos[] = 
{
	{"value", 0, 134218447, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
extern const MethodInfo RepeatContext_set_Start_m7377_MethodInfo = 
{
	"set_Start"/* name */
	, (methodPointerType)&RepeatContext_set_Start_m7377/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, RepeatContext_t1550_RepeatContext_set_Start_m7377_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 737/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
extern const MethodInfo RepeatContext_get_IsMinimum_m7378_MethodInfo = 
{
	"get_IsMinimum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMinimum_m7378/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 738/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
extern const MethodInfo RepeatContext_get_IsMaximum_m7379_MethodInfo = 
{
	"get_IsMaximum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMaximum_m7379/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 739/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
extern const MethodInfo RepeatContext_get_IsLazy_m7380_MethodInfo = 
{
	"get_IsLazy"/* name */
	, (methodPointerType)&RepeatContext_get_IsLazy_m7380/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 740/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
extern const MethodInfo RepeatContext_get_Expression_m7381_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&RepeatContext_get_Expression_m7381/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 741/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
extern const MethodInfo RepeatContext_get_Previous_m7382_MethodInfo = 
{
	"get_Previous"/* name */
	, (methodPointerType)&RepeatContext_get_Previous_m7382/* method */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* declaring_type */
	, &RepeatContext_t1550_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 742/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RepeatContext_t1550_MethodInfos[] =
{
	&RepeatContext__ctor_m7373_MethodInfo,
	&RepeatContext_get_Count_m7374_MethodInfo,
	&RepeatContext_set_Count_m7375_MethodInfo,
	&RepeatContext_get_Start_m7376_MethodInfo,
	&RepeatContext_set_Start_m7377_MethodInfo,
	&RepeatContext_get_IsMinimum_m7378_MethodInfo,
	&RepeatContext_get_IsMaximum_m7379_MethodInfo,
	&RepeatContext_get_IsLazy_m7380_MethodInfo,
	&RepeatContext_get_Expression_m7381_MethodInfo,
	&RepeatContext_get_Previous_m7382_MethodInfo,
	NULL
};
extern const MethodInfo RepeatContext_get_Count_m7374_MethodInfo;
extern const MethodInfo RepeatContext_set_Count_m7375_MethodInfo;
static const PropertyInfo RepeatContext_t1550____Count_PropertyInfo = 
{
	&RepeatContext_t1550_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &RepeatContext_get_Count_m7374_MethodInfo/* get */
	, &RepeatContext_set_Count_m7375_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_Start_m7376_MethodInfo;
extern const MethodInfo RepeatContext_set_Start_m7377_MethodInfo;
static const PropertyInfo RepeatContext_t1550____Start_PropertyInfo = 
{
	&RepeatContext_t1550_il2cpp_TypeInfo/* parent */
	, "Start"/* name */
	, &RepeatContext_get_Start_m7376_MethodInfo/* get */
	, &RepeatContext_set_Start_m7377_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_IsMinimum_m7378_MethodInfo;
static const PropertyInfo RepeatContext_t1550____IsMinimum_PropertyInfo = 
{
	&RepeatContext_t1550_il2cpp_TypeInfo/* parent */
	, "IsMinimum"/* name */
	, &RepeatContext_get_IsMinimum_m7378_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_IsMaximum_m7379_MethodInfo;
static const PropertyInfo RepeatContext_t1550____IsMaximum_PropertyInfo = 
{
	&RepeatContext_t1550_il2cpp_TypeInfo/* parent */
	, "IsMaximum"/* name */
	, &RepeatContext_get_IsMaximum_m7379_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_IsLazy_m7380_MethodInfo;
static const PropertyInfo RepeatContext_t1550____IsLazy_PropertyInfo = 
{
	&RepeatContext_t1550_il2cpp_TypeInfo/* parent */
	, "IsLazy"/* name */
	, &RepeatContext_get_IsLazy_m7380_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_Expression_m7381_MethodInfo;
static const PropertyInfo RepeatContext_t1550____Expression_PropertyInfo = 
{
	&RepeatContext_t1550_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &RepeatContext_get_Expression_m7381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo RepeatContext_get_Previous_m7382_MethodInfo;
static const PropertyInfo RepeatContext_t1550____Previous_PropertyInfo = 
{
	&RepeatContext_t1550_il2cpp_TypeInfo/* parent */
	, "Previous"/* name */
	, &RepeatContext_get_Previous_m7382_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* RepeatContext_t1550_PropertyInfos[] =
{
	&RepeatContext_t1550____Count_PropertyInfo,
	&RepeatContext_t1550____Start_PropertyInfo,
	&RepeatContext_t1550____IsMinimum_PropertyInfo,
	&RepeatContext_t1550____IsMaximum_PropertyInfo,
	&RepeatContext_t1550____IsLazy_PropertyInfo,
	&RepeatContext_t1550____Expression_PropertyInfo,
	&RepeatContext_t1550____Previous_PropertyInfo,
	NULL
};
static const Il2CppMethodReference RepeatContext_t1550_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool RepeatContext_t1550_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType RepeatContext_t1550_1_0_0;
struct RepeatContext_t1550;
const Il2CppTypeDefinitionMetadata RepeatContext_t1550_DefinitionMetadata = 
{
	&Interpreter_t1554_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, RepeatContext_t1550_VTable/* vtableMethods */
	, RepeatContext_t1550_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 673/* fieldStart */

};
TypeInfo RepeatContext_t1550_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RepeatContext"/* name */
	, ""/* namespaze */
	, RepeatContext_t1550_MethodInfos/* methods */
	, RepeatContext_t1550_PropertyInfos/* properties */
	, NULL/* events */
	, &RepeatContext_t1550_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RepeatContext_t1550_0_0_0/* byval_arg */
	, &RepeatContext_t1550_1_0_0/* this_arg */
	, &RepeatContext_t1550_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RepeatContext_t1550)/* instance_size */
	, sizeof (RepeatContext_t1550)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 7/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/Mode
extern TypeInfo Mode_t1551_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_ModeMethodDeclarations.h"
static const MethodInfo* Mode_t1551_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference Mode_t1551_VTable[] =
{
	&Enum_Equals_m2309_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Enum_GetHashCode_m2310_MethodInfo,
	&Enum_ToString_m2311_MethodInfo,
	&Enum_ToString_m2312_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2313_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2314_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2315_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2316_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2317_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2318_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2319_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2320_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2321_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2322_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2323_MethodInfo,
	&Enum_ToString_m2324_MethodInfo,
	&Enum_System_IConvertible_ToType_m2325_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2326_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2327_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2328_MethodInfo,
	&Enum_CompareTo_m2329_MethodInfo,
	&Enum_GetTypeCode_m2330_MethodInfo,
};
static bool Mode_t1551_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Mode_t1551_InterfacesOffsets[] = 
{
	{ &IFormattable_t473_0_0_0, 4},
	{ &IConvertible_t474_0_0_0, 5},
	{ &IComparable_t475_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Mode_t1551_0_0_0;
extern const Il2CppType Mode_t1551_1_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t123_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Mode_t1551_DefinitionMetadata = 
{
	&Interpreter_t1554_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Mode_t1551_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t476_0_0_0/* parent */
	, Mode_t1551_VTable/* vtableMethods */
	, Mode_t1551_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 680/* fieldStart */

};
TypeInfo Mode_t1551_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mode"/* name */
	, ""/* namespaze */
	, Mode_t1551_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t123_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Mode_t1551_0_0_0/* byval_arg */
	, &Mode_t1551_1_0_0/* this_arg */
	, &Mode_t1551_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mode_t1551)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mode_t1551)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_Interpreter.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_InterpreterMethodDeclarations.h"
extern const Il2CppType UInt16U5BU5D_t1462_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter__ctor_m7383_ParameterInfos[] = 
{
	{"program", 0, 134218402, 0, &UInt16U5BU5D_t1462_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
extern const MethodInfo Interpreter__ctor_m7383_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interpreter__ctor_m7383/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Interpreter_t1554_Interpreter__ctor_m7383_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 708/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_ReadProgramCount_m7384_ParameterInfos[] = 
{
	{"ptr", 0, 134218403, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
extern const MethodInfo Interpreter_ReadProgramCount_m7384_MethodInfo = 
{
	"ReadProgramCount"/* name */
	, (methodPointerType)&Interpreter_ReadProgramCount_m7384/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_ReadProgramCount_m7384_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 709/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_Scan_m7385_ParameterInfos[] = 
{
	{"regex", 0, 134218404, 0, &Regex_t792_0_0_0},
	{"text", 1, 134218405, 0, &String_t_0_0_0},
	{"start", 2, 134218406, 0, &Int32_t123_0_0_0},
	{"end", 3, 134218407, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern const MethodInfo Interpreter_Scan_m7385_MethodInfo = 
{
	"Scan"/* name */
	, (methodPointerType)&Interpreter_Scan_m7385/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1517_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t123_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_Scan_m7385_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 710/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
extern const MethodInfo Interpreter_Reset_m7386_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Interpreter_Reset_m7386/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 711/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Mode_t1551_0_0_0;
extern const Il2CppType Int32_t123_1_0_0;
extern const Il2CppType Int32_t123_1_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_Eval_m7387_ParameterInfos[] = 
{
	{"mode", 0, 134218408, 0, &Mode_t1551_0_0_0},
	{"ref_ptr", 1, 134218409, 0, &Int32_t123_1_0_0},
	{"pc", 2, 134218410, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123_Int32U26_t502_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
extern const MethodInfo Interpreter_Eval_m7387_MethodInfo = 
{
	"Eval"/* name */
	, (methodPointerType)&Interpreter_Eval_m7387/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123_Int32U26_t502_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_Eval_m7387_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 712/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Mode_t1551_0_0_0;
extern const Il2CppType Int32_t123_1_0_0;
extern const Il2CppType Int32_t123_1_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_EvalChar_m7388_ParameterInfos[] = 
{
	{"mode", 0, 134218411, 0, &Mode_t1551_0_0_0},
	{"ptr", 1, 134218412, 0, &Int32_t123_1_0_0},
	{"pc", 2, 134218413, 0, &Int32_t123_1_0_0},
	{"multi", 3, 134218414, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123_Int32U26_t502_Int32U26_t502_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
extern const MethodInfo Interpreter_EvalChar_m7388_MethodInfo = 
{
	"EvalChar"/* name */
	, (methodPointerType)&Interpreter_EvalChar_m7388/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123_Int32U26_t502_Int32U26_t502_SByte_t126/* invoker_method */
	, Interpreter_t1554_Interpreter_EvalChar_m7388_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 713/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_TryMatch_m7389_ParameterInfos[] = 
{
	{"ref_ptr", 0, 134218415, 0, &Int32_t123_1_0_0},
	{"pc", 1, 134218416, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32U26_t502_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
extern const MethodInfo Interpreter_TryMatch_m7389_MethodInfo = 
{
	"TryMatch"/* name */
	, (methodPointerType)&Interpreter_TryMatch_m7389/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32U26_t502_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_TryMatch_m7389_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 714/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Position_t1536_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_IsPosition_m7390_ParameterInfos[] = 
{
	{"pos", 0, 134218417, 0, &Position_t1536_0_0_0},
	{"ptr", 1, 134218418, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_UInt16_t415_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
extern const MethodInfo Interpreter_IsPosition_m7390_MethodInfo = 
{
	"IsPosition"/* name */
	, (methodPointerType)&Interpreter_IsPosition_m7390/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_UInt16_t415_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_IsPosition_m7390_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 715/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_IsWordChar_m7391_ParameterInfos[] = 
{
	{"c", 0, 134218419, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
extern const MethodInfo Interpreter_IsWordChar_m7391_MethodInfo = 
{
	"IsWordChar"/* name */
	, (methodPointerType)&Interpreter_IsWordChar_m7391/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int16_t501/* invoker_method */
	, Interpreter_t1554_Interpreter_IsWordChar_m7391_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 716/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_GetString_m7392_ParameterInfos[] = 
{
	{"pc", 0, 134218420, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
extern const MethodInfo Interpreter_GetString_m7392_MethodInfo = 
{
	"GetString"/* name */
	, (methodPointerType)&Interpreter_GetString_m7392/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_GetString_m7392_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 717/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_Open_m7393_ParameterInfos[] = 
{
	{"gid", 0, 134218421, 0, &Int32_t123_0_0_0},
	{"ptr", 1, 134218422, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
extern const MethodInfo Interpreter_Open_m7393_MethodInfo = 
{
	"Open"/* name */
	, (methodPointerType)&Interpreter_Open_m7393/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_Open_m7393_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 718/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_Close_m7394_ParameterInfos[] = 
{
	{"gid", 0, 134218423, 0, &Int32_t123_0_0_0},
	{"ptr", 1, 134218424, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
extern const MethodInfo Interpreter_Close_m7394_MethodInfo = 
{
	"Close"/* name */
	, (methodPointerType)&Interpreter_Close_m7394/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_Close_m7394_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 719/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_Balance_m7395_ParameterInfos[] = 
{
	{"gid", 0, 134218425, 0, &Int32_t123_0_0_0},
	{"balance_gid", 1, 134218426, 0, &Int32_t123_0_0_0},
	{"capture", 2, 134218427, 0, &Boolean_t125_0_0_0},
	{"ptr", 3, 134218428, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123_Int32_t123_SByte_t126_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern const MethodInfo Interpreter_Balance_m7395_MethodInfo = 
{
	"Balance"/* name */
	, (methodPointerType)&Interpreter_Balance_m7395/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123_Int32_t123_SByte_t126_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_Balance_m7395_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 720/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
extern const MethodInfo Interpreter_Checkpoint_m7396_MethodInfo = 
{
	"Checkpoint"/* name */
	, (methodPointerType)&Interpreter_Checkpoint_m7396/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 721/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_Backtrack_m7397_ParameterInfos[] = 
{
	{"cp", 0, 134218429, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
extern const MethodInfo Interpreter_Backtrack_m7397_MethodInfo = 
{
	"Backtrack"/* name */
	, (methodPointerType)&Interpreter_Backtrack_m7397/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_Backtrack_m7397_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 722/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
extern const MethodInfo Interpreter_ResetGroups_m7398_MethodInfo = 
{
	"ResetGroups"/* name */
	, (methodPointerType)&Interpreter_ResetGroups_m7398/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 723/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_GetLastDefined_m7399_ParameterInfos[] = 
{
	{"gid", 0, 134218430, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
extern const MethodInfo Interpreter_GetLastDefined_m7399_MethodInfo = 
{
	"GetLastDefined"/* name */
	, (methodPointerType)&Interpreter_GetLastDefined_m7399/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_GetLastDefined_m7399_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 724/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_CreateMark_m7400_ParameterInfos[] = 
{
	{"previous", 0, 134218431, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
extern const MethodInfo Interpreter_CreateMark_m7400_MethodInfo = 
{
	"CreateMark"/* name */
	, (methodPointerType)&Interpreter_CreateMark_m7400/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_CreateMark_m7400_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 725/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo Interpreter_t1554_Interpreter_GetGroupInfo_m7401_ParameterInfos[] = 
{
	{"gid", 0, 134218432, 0, &Int32_t123_0_0_0},
	{"first_mark_index", 1, 134218433, 0, &Int32_t123_1_0_2},
	{"n_caps", 2, 134218434, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern const MethodInfo Interpreter_GetGroupInfo_m7401_MethodInfo = 
{
	"GetGroupInfo"/* name */
	, (methodPointerType)&Interpreter_GetGroupInfo_m7401/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32U26_t502_Int32U26_t502/* invoker_method */
	, Interpreter_t1554_Interpreter_GetGroupInfo_m7401_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 726/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Group_t1523_0_0_0;
extern const Il2CppType Group_t1523_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_PopulateGroup_m7402_ParameterInfos[] = 
{
	{"g", 0, 134218435, 0, &Group_t1523_0_0_0},
	{"first_mark_index", 1, 134218436, 0, &Int32_t123_0_0_0},
	{"n_caps", 2, 134218437, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern const MethodInfo Interpreter_PopulateGroup_m7402_MethodInfo = 
{
	"PopulateGroup"/* name */
	, (methodPointerType)&Interpreter_PopulateGroup_m7402/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123_Int32_t123/* invoker_method */
	, Interpreter_t1554_Interpreter_PopulateGroup_m7402_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 727/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Regex_t792_0_0_0;
static const ParameterInfo Interpreter_t1554_Interpreter_GenerateMatch_m7403_ParameterInfos[] = 
{
	{"regex", 0, 134218438, 0, &Regex_t792_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern const MethodInfo Interpreter_GenerateMatch_m7403_MethodInfo = 
{
	"GenerateMatch"/* name */
	, (methodPointerType)&Interpreter_GenerateMatch_m7403/* method */
	, &Interpreter_t1554_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1517_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Interpreter_t1554_Interpreter_GenerateMatch_m7403_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 728/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Interpreter_t1554_MethodInfos[] =
{
	&Interpreter__ctor_m7383_MethodInfo,
	&Interpreter_ReadProgramCount_m7384_MethodInfo,
	&Interpreter_Scan_m7385_MethodInfo,
	&Interpreter_Reset_m7386_MethodInfo,
	&Interpreter_Eval_m7387_MethodInfo,
	&Interpreter_EvalChar_m7388_MethodInfo,
	&Interpreter_TryMatch_m7389_MethodInfo,
	&Interpreter_IsPosition_m7390_MethodInfo,
	&Interpreter_IsWordChar_m7391_MethodInfo,
	&Interpreter_GetString_m7392_MethodInfo,
	&Interpreter_Open_m7393_MethodInfo,
	&Interpreter_Close_m7394_MethodInfo,
	&Interpreter_Balance_m7395_MethodInfo,
	&Interpreter_Checkpoint_m7396_MethodInfo,
	&Interpreter_Backtrack_m7397_MethodInfo,
	&Interpreter_ResetGroups_m7398_MethodInfo,
	&Interpreter_GetLastDefined_m7399_MethodInfo,
	&Interpreter_CreateMark_m7400_MethodInfo,
	&Interpreter_GetGroupInfo_m7401_MethodInfo,
	&Interpreter_PopulateGroup_m7402_MethodInfo,
	&Interpreter_GenerateMatch_m7403_MethodInfo,
	NULL
};
static const Il2CppType* Interpreter_t1554_il2cpp_TypeInfo__nestedTypes[3] =
{
	&IntStack_t1549_0_0_0,
	&RepeatContext_t1550_0_0_0,
	&Mode_t1551_0_0_0,
};
extern const MethodInfo Interpreter_Scan_m7385_MethodInfo;
extern const MethodInfo BaseMachine_Split_m7207_MethodInfo;
extern const MethodInfo BaseMachine_Replace_m7206_MethodInfo;
static const Il2CppMethodReference Interpreter_t1554_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&Interpreter_Scan_m7385_MethodInfo,
	&BaseMachine_Split_m7207_MethodInfo,
	&BaseMachine_Replace_m7206_MethodInfo,
	&BaseMachine_Replace_m7206_MethodInfo,
	&BaseMachine_Split_m7207_MethodInfo,
	&Interpreter_Scan_m7385_MethodInfo,
};
static bool Interpreter_t1554_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Interpreter_t1554_InterfacesOffsets[] = 
{
	{ &IMachine_t1526_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Interpreter_t1554_1_0_0;
extern const Il2CppType BaseMachine_t1519_0_0_0;
struct Interpreter_t1554;
const Il2CppTypeDefinitionMetadata Interpreter_t1554_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Interpreter_t1554_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Interpreter_t1554_InterfacesOffsets/* interfaceOffsets */
	, &BaseMachine_t1519_0_0_0/* parent */
	, Interpreter_t1554_VTable/* vtableMethods */
	, Interpreter_t1554_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 684/* fieldStart */

};
TypeInfo Interpreter_t1554_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interpreter"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interpreter_t1554_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Interpreter_t1554_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Interpreter_t1554_0_0_0/* byval_arg */
	, &Interpreter_t1554_1_0_0/* this_arg */
	, &Interpreter_t1554_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Interpreter_t1554)/* instance_size */
	, sizeof (Interpreter_t1554)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 21/* method_count */
	, 0/* property_count */
	, 16/* field_count */
	, 0/* event_count */
	, 3/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// Metadata Definition System.Text.RegularExpressions.Interval
extern TypeInfo Interval_t1555_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interval_t1555_Interval__ctor_m7404_ParameterInfos[] = 
{
	{"low", 0, 134218448, 0, &Int32_t123_0_0_0},
	{"high", 1, 134218449, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
extern const MethodInfo Interval__ctor_m7404_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interval__ctor_m7404/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123/* invoker_method */
	, Interval_t1555_Interval__ctor_m7404_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 743/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
extern void* RuntimeInvoker_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern const MethodInfo Interval_get_Empty_m7405_MethodInfo = 
{
	"get_Empty"/* name */
	, (methodPointerType)&Interval_get_Empty_m7405/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1555_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1555/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 744/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern const MethodInfo Interval_get_IsDiscontiguous_m7406_MethodInfo = 
{
	"get_IsDiscontiguous"/* name */
	, (methodPointerType)&Interval_get_IsDiscontiguous_m7406/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 745/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern const MethodInfo Interval_get_IsSingleton_m7407_MethodInfo = 
{
	"get_IsSingleton"/* name */
	, (methodPointerType)&Interval_get_IsSingleton_m7407/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 746/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern const MethodInfo Interval_get_IsEmpty_m7408_MethodInfo = 
{
	"get_IsEmpty"/* name */
	, (methodPointerType)&Interval_get_IsEmpty_m7408/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 747/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
extern const MethodInfo Interval_get_Size_m7409_MethodInfo = 
{
	"get_Size"/* name */
	, (methodPointerType)&Interval_get_Size_m7409/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 748/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
static const ParameterInfo Interval_t1555_Interval_IsDisjoint_m7410_ParameterInfos[] = 
{
	{"i", 0, 134218450, 0, &Interval_t1555_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_IsDisjoint_m7410_MethodInfo = 
{
	"IsDisjoint"/* name */
	, (methodPointerType)&Interval_IsDisjoint_m7410/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Interval_t1555/* invoker_method */
	, Interval_t1555_Interval_IsDisjoint_m7410_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 749/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
static const ParameterInfo Interval_t1555_Interval_IsAdjacent_m7411_ParameterInfos[] = 
{
	{"i", 0, 134218451, 0, &Interval_t1555_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_IsAdjacent_m7411_MethodInfo = 
{
	"IsAdjacent"/* name */
	, (methodPointerType)&Interval_IsAdjacent_m7411/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Interval_t1555/* invoker_method */
	, Interval_t1555_Interval_IsAdjacent_m7411_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 750/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
static const ParameterInfo Interval_t1555_Interval_Contains_m7412_ParameterInfos[] = 
{
	{"i", 0, 134218452, 0, &Interval_t1555_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_Contains_m7412_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m7412/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Interval_t1555/* invoker_method */
	, Interval_t1555_Interval_Contains_m7412_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 751/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Interval_t1555_Interval_Contains_m7413_ParameterInfos[] = 
{
	{"i", 0, 134218453, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern const MethodInfo Interval_Contains_m7413_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m7413/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123/* invoker_method */
	, Interval_t1555_Interval_Contains_m7413_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 752/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
static const ParameterInfo Interval_t1555_Interval_Intersects_m7414_ParameterInfos[] = 
{
	{"i", 0, 134218454, 0, &Interval_t1555_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_Intersects_m7414_MethodInfo = 
{
	"Intersects"/* name */
	, (methodPointerType)&Interval_Intersects_m7414/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Interval_t1555/* invoker_method */
	, Interval_t1555_Interval_Intersects_m7414_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 753/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
static const ParameterInfo Interval_t1555_Interval_Merge_m7415_ParameterInfos[] = 
{
	{"i", 0, 134218455, 0, &Interval_t1555_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern const MethodInfo Interval_Merge_m7415_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Interval_Merge_m7415/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Interval_t1555/* invoker_method */
	, Interval_t1555_Interval_Merge_m7415_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 754/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Interval_t1555_Interval_CompareTo_m7416_ParameterInfos[] = 
{
	{"o", 0, 134218456, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
extern const MethodInfo Interval_CompareTo_m7416_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Interval_CompareTo_m7416/* method */
	, &Interval_t1555_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t/* invoker_method */
	, Interval_t1555_Interval_CompareTo_m7416_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 755/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Interval_t1555_MethodInfos[] =
{
	&Interval__ctor_m7404_MethodInfo,
	&Interval_get_Empty_m7405_MethodInfo,
	&Interval_get_IsDiscontiguous_m7406_MethodInfo,
	&Interval_get_IsSingleton_m7407_MethodInfo,
	&Interval_get_IsEmpty_m7408_MethodInfo,
	&Interval_get_Size_m7409_MethodInfo,
	&Interval_IsDisjoint_m7410_MethodInfo,
	&Interval_IsAdjacent_m7411_MethodInfo,
	&Interval_Contains_m7412_MethodInfo,
	&Interval_Contains_m7413_MethodInfo,
	&Interval_Intersects_m7414_MethodInfo,
	&Interval_Merge_m7415_MethodInfo,
	&Interval_CompareTo_m7416_MethodInfo,
	NULL
};
extern const MethodInfo Interval_get_Empty_m7405_MethodInfo;
static const PropertyInfo Interval_t1555____Empty_PropertyInfo = 
{
	&Interval_t1555_il2cpp_TypeInfo/* parent */
	, "Empty"/* name */
	, &Interval_get_Empty_m7405_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Interval_get_IsDiscontiguous_m7406_MethodInfo;
static const PropertyInfo Interval_t1555____IsDiscontiguous_PropertyInfo = 
{
	&Interval_t1555_il2cpp_TypeInfo/* parent */
	, "IsDiscontiguous"/* name */
	, &Interval_get_IsDiscontiguous_m7406_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Interval_get_IsSingleton_m7407_MethodInfo;
static const PropertyInfo Interval_t1555____IsSingleton_PropertyInfo = 
{
	&Interval_t1555_il2cpp_TypeInfo/* parent */
	, "IsSingleton"/* name */
	, &Interval_get_IsSingleton_m7407_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Interval_get_IsEmpty_m7408_MethodInfo;
static const PropertyInfo Interval_t1555____IsEmpty_PropertyInfo = 
{
	&Interval_t1555_il2cpp_TypeInfo/* parent */
	, "IsEmpty"/* name */
	, &Interval_get_IsEmpty_m7408_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Interval_get_Size_m7409_MethodInfo;
static const PropertyInfo Interval_t1555____Size_PropertyInfo = 
{
	&Interval_t1555_il2cpp_TypeInfo/* parent */
	, "Size"/* name */
	, &Interval_get_Size_m7409_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Interval_t1555_PropertyInfos[] =
{
	&Interval_t1555____Empty_PropertyInfo,
	&Interval_t1555____IsDiscontiguous_PropertyInfo,
	&Interval_t1555____IsSingleton_PropertyInfo,
	&Interval_t1555____IsEmpty_PropertyInfo,
	&Interval_t1555____Size_PropertyInfo,
	NULL
};
extern const MethodInfo Interval_CompareTo_m7416_MethodInfo;
static const Il2CppMethodReference Interval_t1555_VTable[] =
{
	&ValueType_Equals_m2349_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&ValueType_GetHashCode_m2350_MethodInfo,
	&ValueType_ToString_m2353_MethodInfo,
	&Interval_CompareTo_m7416_MethodInfo,
};
static bool Interval_t1555_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Interval_t1555_InterfacesTypeInfos[] = 
{
	&IComparable_t475_0_0_0,
};
static Il2CppInterfaceOffsetPair Interval_t1555_InterfacesOffsets[] = 
{
	{ &IComparable_t475_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Interval_t1555_1_0_0;
const Il2CppTypeDefinitionMetadata Interval_t1555_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Interval_t1555_InterfacesTypeInfos/* implementedInterfaces */
	, Interval_t1555_InterfacesOffsets/* interfaceOffsets */
	, &ValueType_t491_0_0_0/* parent */
	, Interval_t1555_VTable/* vtableMethods */
	, Interval_t1555_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 700/* fieldStart */

};
TypeInfo Interval_t1555_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interval"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interval_t1555_MethodInfos/* methods */
	, Interval_t1555_PropertyInfos/* properties */
	, NULL/* events */
	, &Interval_t1555_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Interval_t1555_0_0_0/* byval_arg */
	, &Interval_t1555_1_0_0/* this_arg */
	, &Interval_t1555_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)Interval_t1555_marshal/* marshal_to_native_func */
	, (methodPointerType)Interval_t1555_marshal_back/* marshal_from_native_func */
	, (methodPointerType)Interval_t1555_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (Interval_t1555)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Interval_t1555)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Interval_t1555_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 13/* method_count */
	, 5/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_Enu.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/Enumerator
extern TypeInfo Enumerator_t1556_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_EnuMethodDeclarations.h"
extern const Il2CppType IList_t1280_0_0_0;
extern const Il2CppType IList_t1280_0_0_0;
static const ParameterInfo Enumerator_t1556_Enumerator__ctor_m7417_ParameterInfos[] = 
{
	{"list", 0, 134218466, 0, &IList_t1280_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::.ctor(System.Collections.IList)
extern const MethodInfo Enumerator__ctor_m7417_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Enumerator__ctor_m7417/* method */
	, &Enumerator_t1556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Enumerator_t1556_Enumerator__ctor_m7417_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 767/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection/Enumerator::get_Current()
extern const MethodInfo Enumerator_get_Current_m7418_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&Enumerator_get_Current_m7418/* method */
	, &Enumerator_t1556_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 768/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection/Enumerator::MoveNext()
extern const MethodInfo Enumerator_MoveNext_m7419_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&Enumerator_MoveNext_m7419/* method */
	, &Enumerator_t1556_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 769/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset()
extern const MethodInfo Enumerator_Reset_m7420_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Enumerator_Reset_m7420/* method */
	, &Enumerator_t1556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 770/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Enumerator_t1556_MethodInfos[] =
{
	&Enumerator__ctor_m7417_MethodInfo,
	&Enumerator_get_Current_m7418_MethodInfo,
	&Enumerator_MoveNext_m7419_MethodInfo,
	&Enumerator_Reset_m7420_MethodInfo,
	NULL
};
extern const MethodInfo Enumerator_get_Current_m7418_MethodInfo;
static const PropertyInfo Enumerator_t1556____Current_PropertyInfo = 
{
	&Enumerator_t1556_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &Enumerator_get_Current_m7418_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Enumerator_t1556_PropertyInfos[] =
{
	&Enumerator_t1556____Current_PropertyInfo,
	NULL
};
extern const MethodInfo Enumerator_MoveNext_m7419_MethodInfo;
extern const MethodInfo Enumerator_Reset_m7420_MethodInfo;
static const Il2CppMethodReference Enumerator_t1556_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&Enumerator_get_Current_m7418_MethodInfo,
	&Enumerator_MoveNext_m7419_MethodInfo,
	&Enumerator_Reset_m7420_MethodInfo,
};
static bool Enumerator_t1556_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IEnumerator_t368_0_0_0;
static const Il2CppType* Enumerator_t1556_InterfacesTypeInfos[] = 
{
	&IEnumerator_t368_0_0_0,
};
static Il2CppInterfaceOffsetPair Enumerator_t1556_InterfacesOffsets[] = 
{
	{ &IEnumerator_t368_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Enumerator_t1556_0_0_0;
extern const Il2CppType Enumerator_t1556_1_0_0;
extern TypeInfo IntervalCollection_t1558_il2cpp_TypeInfo;
extern const Il2CppType IntervalCollection_t1558_0_0_0;
struct Enumerator_t1556;
const Il2CppTypeDefinitionMetadata Enumerator_t1556_DefinitionMetadata = 
{
	&IntervalCollection_t1558_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, Enumerator_t1556_InterfacesTypeInfos/* implementedInterfaces */
	, Enumerator_t1556_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Enumerator_t1556_VTable/* vtableMethods */
	, Enumerator_t1556_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 703/* fieldStart */

};
TypeInfo Enumerator_t1556_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Enumerator"/* name */
	, ""/* namespaze */
	, Enumerator_t1556_MethodInfos/* methods */
	, Enumerator_t1556_PropertyInfos/* properties */
	, NULL/* events */
	, &Enumerator_t1556_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Enumerator_t1556_0_0_0/* byval_arg */
	, &Enumerator_t1556_1_0_0/* this_arg */
	, &Enumerator_t1556_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Enumerator_t1556)/* instance_size */
	, sizeof (Enumerator_t1556)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/CostDelegate
extern TypeInfo CostDelegate_t1557_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo CostDelegate_t1557_CostDelegate__ctor_m7421_ParameterInfos[] = 
{
	{"object", 0, 134218467, 0, &Object_t_0_0_0},
	{"method", 1, 134218468, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo CostDelegate__ctor_m7421_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CostDelegate__ctor_m7421/* method */
	, &CostDelegate_t1557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_IntPtr_t/* invoker_method */
	, CostDelegate_t1557_CostDelegate__ctor_m7421_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 771/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
static const ParameterInfo CostDelegate_t1557_CostDelegate_Invoke_m7422_ParameterInfos[] = 
{
	{"i", 0, 134218469, 0, &Interval_t1555_0_0_0},
};
extern const Il2CppType Double_t1170_0_0_0;
extern void* RuntimeInvoker_Double_t1170_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
extern const MethodInfo CostDelegate_Invoke_m7422_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CostDelegate_Invoke_m7422/* method */
	, &CostDelegate_t1557_il2cpp_TypeInfo/* declaring_type */
	, &Double_t1170_0_0_0/* return_type */
	, RuntimeInvoker_Double_t1170_Interval_t1555/* invoker_method */
	, CostDelegate_t1557_CostDelegate_Invoke_m7422_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 772/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
extern const Il2CppType AsyncCallback_t258_0_0_0;
extern const Il2CppType AsyncCallback_t258_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo CostDelegate_t1557_CostDelegate_BeginInvoke_m7423_ParameterInfos[] = 
{
	{"i", 0, 134218470, 0, &Interval_t1555_0_0_0},
	{"callback", 1, 134218471, 0, &AsyncCallback_t258_0_0_0},
	{"object", 2, 134218472, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t257_0_0_0;
extern void* RuntimeInvoker_Object_t_Interval_t1555_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
extern const MethodInfo CostDelegate_BeginInvoke_m7423_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CostDelegate_BeginInvoke_m7423/* method */
	, &CostDelegate_t1557_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t257_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Interval_t1555_Object_t_Object_t/* invoker_method */
	, CostDelegate_t1557_CostDelegate_BeginInvoke_m7423_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 773/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t257_0_0_0;
static const ParameterInfo CostDelegate_t1557_CostDelegate_EndInvoke_m7424_ParameterInfos[] = 
{
	{"result", 0, 134218473, 0, &IAsyncResult_t257_0_0_0},
};
extern void* RuntimeInvoker_Double_t1170_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo CostDelegate_EndInvoke_m7424_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CostDelegate_EndInvoke_m7424/* method */
	, &CostDelegate_t1557_il2cpp_TypeInfo/* declaring_type */
	, &Double_t1170_0_0_0/* return_type */
	, RuntimeInvoker_Double_t1170_Object_t/* invoker_method */
	, CostDelegate_t1557_CostDelegate_EndInvoke_m7424_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 774/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CostDelegate_t1557_MethodInfos[] =
{
	&CostDelegate__ctor_m7421_MethodInfo,
	&CostDelegate_Invoke_m7422_MethodInfo,
	&CostDelegate_BeginInvoke_m7423_MethodInfo,
	&CostDelegate_EndInvoke_m7424_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m2336_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m2337_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m2338_MethodInfo;
extern const MethodInfo Delegate_Clone_m2339_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m2340_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m2341_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m2342_MethodInfo;
extern const MethodInfo CostDelegate_Invoke_m7422_MethodInfo;
extern const MethodInfo CostDelegate_BeginInvoke_m7423_MethodInfo;
extern const MethodInfo CostDelegate_EndInvoke_m7424_MethodInfo;
static const Il2CppMethodReference CostDelegate_t1557_VTable[] =
{
	&MulticastDelegate_Equals_m2336_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&MulticastDelegate_GetHashCode_m2337_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&MulticastDelegate_GetObjectData_m2338_MethodInfo,
	&Delegate_Clone_m2339_MethodInfo,
	&MulticastDelegate_GetObjectData_m2338_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2340_MethodInfo,
	&MulticastDelegate_CombineImpl_m2341_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2342_MethodInfo,
	&CostDelegate_Invoke_m7422_MethodInfo,
	&CostDelegate_BeginInvoke_m7423_MethodInfo,
	&CostDelegate_EndInvoke_m7424_MethodInfo,
};
static bool CostDelegate_t1557_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICloneable_t479_0_0_0;
extern const Il2CppType ISerializable_t480_0_0_0;
static Il2CppInterfaceOffsetPair CostDelegate_t1557_InterfacesOffsets[] = 
{
	{ &ICloneable_t479_0_0_0, 4},
	{ &ISerializable_t480_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CostDelegate_t1557_0_0_0;
extern const Il2CppType CostDelegate_t1557_1_0_0;
extern const Il2CppType MulticastDelegate_t260_0_0_0;
struct CostDelegate_t1557;
const Il2CppTypeDefinitionMetadata CostDelegate_t1557_DefinitionMetadata = 
{
	&IntervalCollection_t1558_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CostDelegate_t1557_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t260_0_0_0/* parent */
	, CostDelegate_t1557_VTable/* vtableMethods */
	, CostDelegate_t1557_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo CostDelegate_t1557_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CostDelegate"/* name */
	, ""/* namespaze */
	, CostDelegate_t1557_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CostDelegate_t1557_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CostDelegate_t1557_0_0_0/* byval_arg */
	, &CostDelegate_t1557_1_0_0/* this_arg */
	, &CostDelegate_t1557_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CostDelegate_t1557/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CostDelegate_t1557)/* instance_size */
	, sizeof (CostDelegate_t1557)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
extern const MethodInfo IntervalCollection__ctor_m7425_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IntervalCollection__ctor_m7425/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 756/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo IntervalCollection_t1558_IntervalCollection_get_Item_m7426_ParameterInfos[] = 
{
	{"i", 0, 134218457, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Interval_t1555_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
extern const MethodInfo IntervalCollection_get_Item_m7426_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&IntervalCollection_get_Item_m7426/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1555_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1555_Int32_t123/* invoker_method */
	, IntervalCollection_t1558_IntervalCollection_get_Item_m7426_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 757/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
static const ParameterInfo IntervalCollection_t1558_IntervalCollection_Add_m7427_ParameterInfos[] = 
{
	{"i", 0, 134218458, 0, &Interval_t1555_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
extern const MethodInfo IntervalCollection_Add_m7427_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&IntervalCollection_Add_m7427/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Interval_t1555/* invoker_method */
	, IntervalCollection_t1558_IntervalCollection_Add_m7427_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 758/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
extern const MethodInfo IntervalCollection_Normalize_m7428_MethodInfo = 
{
	"Normalize"/* name */
	, (methodPointerType)&IntervalCollection_Normalize_m7428/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 759/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CostDelegate_t1557_0_0_0;
static const ParameterInfo IntervalCollection_t1558_IntervalCollection_GetMetaCollection_m7429_ParameterInfos[] = 
{
	{"cost_del", 0, 134218459, 0, &CostDelegate_t1557_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern const MethodInfo IntervalCollection_GetMetaCollection_m7429_MethodInfo = 
{
	"GetMetaCollection"/* name */
	, (methodPointerType)&IntervalCollection_GetMetaCollection_m7429/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &IntervalCollection_t1558_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1558_IntervalCollection_GetMetaCollection_m7429_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 760/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType IntervalCollection_t1558_0_0_0;
extern const Il2CppType CostDelegate_t1557_0_0_0;
static const ParameterInfo IntervalCollection_t1558_IntervalCollection_Optimize_m7430_ParameterInfos[] = 
{
	{"begin", 0, 134218460, 0, &Int32_t123_0_0_0},
	{"end", 1, 134218461, 0, &Int32_t123_0_0_0},
	{"meta", 2, 134218462, 0, &IntervalCollection_t1558_0_0_0},
	{"cost_del", 3, 134218463, 0, &CostDelegate_t1557_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern const MethodInfo IntervalCollection_Optimize_m7430_MethodInfo = 
{
	"Optimize"/* name */
	, (methodPointerType)&IntervalCollection_Optimize_m7430/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1558_IntervalCollection_Optimize_m7430_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 761/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern const MethodInfo IntervalCollection_get_Count_m7431_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntervalCollection_get_Count_m7431/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 762/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
extern const MethodInfo IntervalCollection_get_IsSynchronized_m7432_MethodInfo = 
{
	"get_IsSynchronized"/* name */
	, (methodPointerType)&IntervalCollection_get_IsSynchronized_m7432/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 763/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern const MethodInfo IntervalCollection_get_SyncRoot_m7433_MethodInfo = 
{
	"get_SyncRoot"/* name */
	, (methodPointerType)&IntervalCollection_get_SyncRoot_m7433/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 764/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Array_t_0_0_0;
extern const Il2CppType Array_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo IntervalCollection_t1558_IntervalCollection_CopyTo_m7434_ParameterInfos[] = 
{
	{"array", 0, 134218464, 0, &Array_t_0_0_0},
	{"index", 1, 134218465, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
extern const MethodInfo IntervalCollection_CopyTo_m7434_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&IntervalCollection_CopyTo_m7434/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123/* invoker_method */
	, IntervalCollection_t1558_IntervalCollection_CopyTo_m7434_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 765/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
extern const MethodInfo IntervalCollection_GetEnumerator_m7435_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&IntervalCollection_GetEnumerator_m7435/* method */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t368_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 766/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IntervalCollection_t1558_MethodInfos[] =
{
	&IntervalCollection__ctor_m7425_MethodInfo,
	&IntervalCollection_get_Item_m7426_MethodInfo,
	&IntervalCollection_Add_m7427_MethodInfo,
	&IntervalCollection_Normalize_m7428_MethodInfo,
	&IntervalCollection_GetMetaCollection_m7429_MethodInfo,
	&IntervalCollection_Optimize_m7430_MethodInfo,
	&IntervalCollection_get_Count_m7431_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m7432_MethodInfo,
	&IntervalCollection_get_SyncRoot_m7433_MethodInfo,
	&IntervalCollection_CopyTo_m7434_MethodInfo,
	&IntervalCollection_GetEnumerator_m7435_MethodInfo,
	NULL
};
extern const MethodInfo IntervalCollection_get_Item_m7426_MethodInfo;
static const PropertyInfo IntervalCollection_t1558____Item_PropertyInfo = 
{
	&IntervalCollection_t1558_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IntervalCollection_get_Item_m7426_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IntervalCollection_get_Count_m7431_MethodInfo;
static const PropertyInfo IntervalCollection_t1558____Count_PropertyInfo = 
{
	&IntervalCollection_t1558_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntervalCollection_get_Count_m7431_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IntervalCollection_get_IsSynchronized_m7432_MethodInfo;
static const PropertyInfo IntervalCollection_t1558____IsSynchronized_PropertyInfo = 
{
	&IntervalCollection_t1558_il2cpp_TypeInfo/* parent */
	, "IsSynchronized"/* name */
	, &IntervalCollection_get_IsSynchronized_m7432_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo IntervalCollection_get_SyncRoot_m7433_MethodInfo;
static const PropertyInfo IntervalCollection_t1558____SyncRoot_PropertyInfo = 
{
	&IntervalCollection_t1558_il2cpp_TypeInfo/* parent */
	, "SyncRoot"/* name */
	, &IntervalCollection_get_SyncRoot_m7433_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* IntervalCollection_t1558_PropertyInfos[] =
{
	&IntervalCollection_t1558____Item_PropertyInfo,
	&IntervalCollection_t1558____Count_PropertyInfo,
	&IntervalCollection_t1558____IsSynchronized_PropertyInfo,
	&IntervalCollection_t1558____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* IntervalCollection_t1558_il2cpp_TypeInfo__nestedTypes[2] =
{
	&Enumerator_t1556_0_0_0,
	&CostDelegate_t1557_0_0_0,
};
extern const MethodInfo IntervalCollection_CopyTo_m7434_MethodInfo;
extern const MethodInfo IntervalCollection_GetEnumerator_m7435_MethodInfo;
static const Il2CppMethodReference IntervalCollection_t1558_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&IntervalCollection_get_Count_m7431_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m7432_MethodInfo,
	&IntervalCollection_get_SyncRoot_m7433_MethodInfo,
	&IntervalCollection_CopyTo_m7434_MethodInfo,
	&IntervalCollection_GetEnumerator_m7435_MethodInfo,
};
static bool IntervalCollection_t1558_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICollection_t1279_0_0_0;
extern const Il2CppType IEnumerable_t517_0_0_0;
static const Il2CppType* IntervalCollection_t1558_InterfacesTypeInfos[] = 
{
	&ICollection_t1279_0_0_0,
	&IEnumerable_t517_0_0_0,
};
static Il2CppInterfaceOffsetPair IntervalCollection_t1558_InterfacesOffsets[] = 
{
	{ &ICollection_t1279_0_0_0, 4},
	{ &IEnumerable_t517_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType IntervalCollection_t1558_1_0_0;
struct IntervalCollection_t1558;
const Il2CppTypeDefinitionMetadata IntervalCollection_t1558_DefinitionMetadata = 
{
	NULL/* declaringType */
	, IntervalCollection_t1558_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, IntervalCollection_t1558_InterfacesTypeInfos/* implementedInterfaces */
	, IntervalCollection_t1558_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, IntervalCollection_t1558_VTable/* vtableMethods */
	, IntervalCollection_t1558_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 705/* fieldStart */

};
TypeInfo IntervalCollection_t1558_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntervalCollection"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, IntervalCollection_t1558_MethodInfos/* methods */
	, IntervalCollection_t1558_PropertyInfos/* properties */
	, NULL/* events */
	, &IntervalCollection_t1558_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 64/* custom_attributes_cache */
	, &IntervalCollection_t1558_0_0_0/* byval_arg */
	, &IntervalCollection_t1558_1_0_0/* this_arg */
	, &IntervalCollection_t1558_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (IntervalCollection_t1558)/* instance_size */
	, sizeof (IntervalCollection_t1558)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 4/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 9/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_Parser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Parser
extern TypeInfo Parser_t1559_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
extern const MethodInfo Parser__ctor_m7436_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Parser__ctor_m7436/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 775/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_1_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseDecimal_m7437_ParameterInfos[] = 
{
	{"str", 0, 134218474, 0, &String_t_0_0_0},
	{"ptr", 1, 134218475, 0, &Int32_t123_1_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
extern const MethodInfo Parser_ParseDecimal_m7437_MethodInfo = 
{
	"ParseDecimal"/* name */
	, (methodPointerType)&Parser_ParseDecimal_m7437/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t_Int32U26_t502/* invoker_method */
	, Parser_t1559_Parser_ParseDecimal_m7437_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 776/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_1_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseOctal_m7438_ParameterInfos[] = 
{
	{"str", 0, 134218476, 0, &String_t_0_0_0},
	{"ptr", 1, 134218477, 0, &Int32_t123_1_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
extern const MethodInfo Parser_ParseOctal_m7438_MethodInfo = 
{
	"ParseOctal"/* name */
	, (methodPointerType)&Parser_ParseOctal_m7438/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t_Int32U26_t502/* invoker_method */
	, Parser_t1559_Parser_ParseOctal_m7438_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 777/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_1_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseHex_m7439_ParameterInfos[] = 
{
	{"str", 0, 134218478, 0, &String_t_0_0_0},
	{"ptr", 1, 134218479, 0, &Int32_t123_1_0_0},
	{"digits", 2, 134218480, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t_Int32U26_t502_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
extern const MethodInfo Parser_ParseHex_m7439_MethodInfo = 
{
	"ParseHex"/* name */
	, (methodPointerType)&Parser_ParseHex_m7439/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t_Int32U26_t502_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_ParseHex_m7439_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 778/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_1_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseNumber_m7440_ParameterInfos[] = 
{
	{"str", 0, 134218481, 0, &String_t_0_0_0},
	{"ptr", 1, 134218482, 0, &Int32_t123_1_0_0},
	{"b", 2, 134218483, 0, &Int32_t123_0_0_0},
	{"min", 3, 134218484, 0, &Int32_t123_0_0_0},
	{"max", 4, 134218485, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t_Int32U26_t502_Int32_t123_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
extern const MethodInfo Parser_ParseNumber_m7440_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m7440/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t_Int32U26_t502_Int32_t123_Int32_t123_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_ParseNumber_m7440_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 779/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_1_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseName_m7441_ParameterInfos[] = 
{
	{"str", 0, 134218486, 0, &String_t_0_0_0},
	{"ptr", 1, 134218487, 0, &Int32_t123_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
extern const MethodInfo Parser_ParseName_m7441_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m7441/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t502/* invoker_method */
	, Parser_t1559_Parser_ParseName_m7441_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 780/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseRegularExpression_m7442_ParameterInfos[] = 
{
	{"pattern", 0, 134218488, 0, &String_t_0_0_0},
	{"options", 1, 134218489, 0, &RegexOptions_t1533_0_0_0},
};
extern const Il2CppType RegularExpression_t1565_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_ParseRegularExpression_m7442_MethodInfo = 
{
	"ParseRegularExpression"/* name */
	, (methodPointerType)&Parser_ParseRegularExpression_m7442/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &RegularExpression_t1565_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_ParseRegularExpression_m7442_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 781/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Hashtable_t1426_0_0_0;
extern const Il2CppType Hashtable_t1426_0_0_0;
static const ParameterInfo Parser_t1559_Parser_GetMapping_m7443_ParameterInfos[] = 
{
	{"mapping", 0, 134218490, 0, &Hashtable_t1426_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
extern const MethodInfo Parser_GetMapping_m7443_MethodInfo = 
{
	"GetMapping"/* name */
	, (methodPointerType)&Parser_GetMapping_m7443/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t/* invoker_method */
	, Parser_t1559_Parser_GetMapping_m7443_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 782/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Group_t1564_0_0_0;
extern const Il2CppType Group_t1564_0_0_0;
extern const Il2CppType RegexOptions_t1533_0_0_0;
extern const Il2CppType Assertion_t1570_0_0_0;
extern const Il2CppType Assertion_t1570_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseGroup_m7444_ParameterInfos[] = 
{
	{"group", 0, 134218491, 0, &Group_t1564_0_0_0},
	{"options", 1, 134218492, 0, &RegexOptions_t1533_0_0_0},
	{"assertion", 2, 134218493, 0, &Assertion_t1570_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
extern const MethodInfo Parser_ParseGroup_m7444_MethodInfo = 
{
	"ParseGroup"/* name */
	, (methodPointerType)&Parser_ParseGroup_m7444/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123_Object_t/* invoker_method */
	, Parser_t1559_Parser_ParseGroup_m7444_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 783/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_1_0_0;
extern const Il2CppType RegexOptions_t1533_1_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseGroupingConstruct_m7445_ParameterInfos[] = 
{
	{"options", 0, 134218494, 0, &RegexOptions_t1533_1_0_0},
};
extern const Il2CppType Expression_t1562_0_0_0;
extern void* RuntimeInvoker_Object_t_RegexOptionsU26_t1663 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
extern const MethodInfo Parser_ParseGroupingConstruct_m7445_MethodInfo = 
{
	"ParseGroupingConstruct"/* name */
	, (methodPointerType)&Parser_ParseGroupingConstruct_m7445/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_RegexOptionsU26_t1663/* invoker_method */
	, Parser_t1559_Parser_ParseGroupingConstruct_m7445_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 784/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ExpressionAssertion_t1571_0_0_0;
extern const Il2CppType ExpressionAssertion_t1571_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseAssertionType_m7446_ParameterInfos[] = 
{
	{"assertion", 0, 134218495, 0, &ExpressionAssertion_t1571_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
extern const MethodInfo Parser_ParseAssertionType_m7446_MethodInfo = 
{
	"ParseAssertionType"/* name */
	, (methodPointerType)&Parser_ParseAssertionType_m7446/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Parser_t1559_Parser_ParseAssertionType_m7446_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 785/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_1_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseOptions_m7447_ParameterInfos[] = 
{
	{"options", 0, 134218496, 0, &RegexOptions_t1533_1_0_0},
	{"negate", 1, 134218497, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_RegexOptionsU26_t1663_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
extern const MethodInfo Parser_ParseOptions_m7447_MethodInfo = 
{
	"ParseOptions"/* name */
	, (methodPointerType)&Parser_ParseOptions_m7447/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_RegexOptionsU26_t1663_SByte_t126/* invoker_method */
	, Parser_t1559_Parser_ParseOptions_m7447_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 786/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseCharacterClass_m7448_ParameterInfos[] = 
{
	{"options", 0, 134218498, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_ParseCharacterClass_m7448_MethodInfo = 
{
	"ParseCharacterClass"/* name */
	, (methodPointerType)&Parser_ParseCharacterClass_m7448/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_ParseCharacterClass_m7448_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 787/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseRepetitionBounds_m7449_ParameterInfos[] = 
{
	{"min", 0, 134218499, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218500, 0, &Int32_t123_1_0_2},
	{"options", 2, 134218501, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32U26_t502_Int32U26_t502_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_ParseRepetitionBounds_m7449_MethodInfo = 
{
	"ParseRepetitionBounds"/* name */
	, (methodPointerType)&Parser_ParseRepetitionBounds_m7449/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32U26_t502_Int32U26_t502_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_ParseRepetitionBounds_m7449_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 788/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Category_t1540 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
extern const MethodInfo Parser_ParseUnicodeCategory_m7450_MethodInfo = 
{
	"ParseUnicodeCategory"/* name */
	, (methodPointerType)&Parser_ParseUnicodeCategory_m7450/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1540_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1540/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 789/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseSpecial_m7451_ParameterInfos[] = 
{
	{"options", 0, 134218502, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_ParseSpecial_m7451_MethodInfo = 
{
	"ParseSpecial"/* name */
	, (methodPointerType)&Parser_ParseSpecial_m7451/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_ParseSpecial_m7451_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 790/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
extern const MethodInfo Parser_ParseEscape_m7452_MethodInfo = 
{
	"ParseEscape"/* name */
	, (methodPointerType)&Parser_ParseEscape_m7452/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 791/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
extern const MethodInfo Parser_ParseName_m7453_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m7453/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 792/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo Parser_t1559_Parser_IsNameChar_m7454_ParameterInfos[] = 
{
	{"c", 0, 134218503, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
extern const MethodInfo Parser_IsNameChar_m7454_MethodInfo = 
{
	"IsNameChar"/* name */
	, (methodPointerType)&Parser_IsNameChar_m7454/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int16_t501/* invoker_method */
	, Parser_t1559_Parser_IsNameChar_m7454_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 793/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseNumber_m7455_ParameterInfos[] = 
{
	{"b", 0, 134218504, 0, &Int32_t123_0_0_0},
	{"min", 1, 134218505, 0, &Int32_t123_0_0_0},
	{"max", 2, 134218506, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int32_t123_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
extern const MethodInfo Parser_ParseNumber_m7455_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m7455/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int32_t123_Int32_t123_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_ParseNumber_m7455_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 794/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ParseDigit_m7456_ParameterInfos[] = 
{
	{"c", 0, 134218507, 0, &Char_t412_0_0_0},
	{"b", 1, 134218508, 0, &Int32_t123_0_0_0},
	{"n", 2, 134218509, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int16_t501_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
extern const MethodInfo Parser_ParseDigit_m7456_MethodInfo = 
{
	"ParseDigit"/* name */
	, (methodPointerType)&Parser_ParseDigit_m7456/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int16_t501_Int32_t123_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_ParseDigit_m7456_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 795/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Parser_t1559_Parser_ConsumeWhitespace_m7457_ParameterInfos[] = 
{
	{"ignore", 0, 134218510, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
extern const MethodInfo Parser_ConsumeWhitespace_m7457_MethodInfo = 
{
	"ConsumeWhitespace"/* name */
	, (methodPointerType)&Parser_ConsumeWhitespace_m7457/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_SByte_t126/* invoker_method */
	, Parser_t1559_Parser_ConsumeWhitespace_m7457_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 796/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
extern const MethodInfo Parser_ResolveReferences_m7458_MethodInfo = 
{
	"ResolveReferences"/* name */
	, (methodPointerType)&Parser_ResolveReferences_m7458/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 797/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ArrayList_t1436_0_0_0;
extern const Il2CppType ArrayList_t1436_0_0_0;
static const ParameterInfo Parser_t1559_Parser_HandleExplicitNumericGroups_m7459_ParameterInfos[] = 
{
	{"explicit_numeric_groups", 0, 134218511, 0, &ArrayList_t1436_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
extern const MethodInfo Parser_HandleExplicitNumericGroups_m7459_MethodInfo = 
{
	"HandleExplicitNumericGroups"/* name */
	, (methodPointerType)&Parser_HandleExplicitNumericGroups_m7459/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Parser_t1559_Parser_HandleExplicitNumericGroups_m7459_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 798/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_IsIgnoreCase_m7460_ParameterInfos[] = 
{
	{"options", 0, 134218512, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsIgnoreCase_m7460_MethodInfo = 
{
	"IsIgnoreCase"/* name */
	, (methodPointerType)&Parser_IsIgnoreCase_m7460/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_IsIgnoreCase_m7460_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 799/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_IsMultiline_m7461_ParameterInfos[] = 
{
	{"options", 0, 134218513, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsMultiline_m7461_MethodInfo = 
{
	"IsMultiline"/* name */
	, (methodPointerType)&Parser_IsMultiline_m7461/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_IsMultiline_m7461_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 800/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_IsExplicitCapture_m7462_ParameterInfos[] = 
{
	{"options", 0, 134218514, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsExplicitCapture_m7462_MethodInfo = 
{
	"IsExplicitCapture"/* name */
	, (methodPointerType)&Parser_IsExplicitCapture_m7462/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_IsExplicitCapture_m7462_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 801/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_IsSingleline_m7463_ParameterInfos[] = 
{
	{"options", 0, 134218515, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsSingleline_m7463_MethodInfo = 
{
	"IsSingleline"/* name */
	, (methodPointerType)&Parser_IsSingleline_m7463/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_IsSingleline_m7463_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_IsIgnorePatternWhitespace_m7464_ParameterInfos[] = 
{
	{"options", 0, 134218516, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsIgnorePatternWhitespace_m7464_MethodInfo = 
{
	"IsIgnorePatternWhitespace"/* name */
	, (methodPointerType)&Parser_IsIgnorePatternWhitespace_m7464/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_IsIgnorePatternWhitespace_m7464_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType RegexOptions_t1533_0_0_0;
static const ParameterInfo Parser_t1559_Parser_IsECMAScript_m7465_ParameterInfos[] = 
{
	{"options", 0, 134218517, 0, &RegexOptions_t1533_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
extern const MethodInfo Parser_IsECMAScript_m7465_MethodInfo = 
{
	"IsECMAScript"/* name */
	, (methodPointerType)&Parser_IsECMAScript_m7465/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int32_t123/* invoker_method */
	, Parser_t1559_Parser_IsECMAScript_m7465_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Parser_t1559_Parser_NewParseException_m7466_ParameterInfos[] = 
{
	{"msg", 0, 134218518, 0, &String_t_0_0_0},
};
extern const Il2CppType ArgumentException_t431_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
extern const MethodInfo Parser_NewParseException_m7466_MethodInfo = 
{
	"NewParseException"/* name */
	, (methodPointerType)&Parser_NewParseException_m7466/* method */
	, &Parser_t1559_il2cpp_TypeInfo/* declaring_type */
	, &ArgumentException_t431_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Parser_t1559_Parser_NewParseException_m7466_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Parser_t1559_MethodInfos[] =
{
	&Parser__ctor_m7436_MethodInfo,
	&Parser_ParseDecimal_m7437_MethodInfo,
	&Parser_ParseOctal_m7438_MethodInfo,
	&Parser_ParseHex_m7439_MethodInfo,
	&Parser_ParseNumber_m7440_MethodInfo,
	&Parser_ParseName_m7441_MethodInfo,
	&Parser_ParseRegularExpression_m7442_MethodInfo,
	&Parser_GetMapping_m7443_MethodInfo,
	&Parser_ParseGroup_m7444_MethodInfo,
	&Parser_ParseGroupingConstruct_m7445_MethodInfo,
	&Parser_ParseAssertionType_m7446_MethodInfo,
	&Parser_ParseOptions_m7447_MethodInfo,
	&Parser_ParseCharacterClass_m7448_MethodInfo,
	&Parser_ParseRepetitionBounds_m7449_MethodInfo,
	&Parser_ParseUnicodeCategory_m7450_MethodInfo,
	&Parser_ParseSpecial_m7451_MethodInfo,
	&Parser_ParseEscape_m7452_MethodInfo,
	&Parser_ParseName_m7453_MethodInfo,
	&Parser_IsNameChar_m7454_MethodInfo,
	&Parser_ParseNumber_m7455_MethodInfo,
	&Parser_ParseDigit_m7456_MethodInfo,
	&Parser_ConsumeWhitespace_m7457_MethodInfo,
	&Parser_ResolveReferences_m7458_MethodInfo,
	&Parser_HandleExplicitNumericGroups_m7459_MethodInfo,
	&Parser_IsIgnoreCase_m7460_MethodInfo,
	&Parser_IsMultiline_m7461_MethodInfo,
	&Parser_IsExplicitCapture_m7462_MethodInfo,
	&Parser_IsSingleline_m7463_MethodInfo,
	&Parser_IsIgnorePatternWhitespace_m7464_MethodInfo,
	&Parser_IsECMAScript_m7465_MethodInfo,
	&Parser_NewParseException_m7466_MethodInfo,
	NULL
};
static const Il2CppMethodReference Parser_t1559_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool Parser_t1559_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Parser_t1559_0_0_0;
extern const Il2CppType Parser_t1559_1_0_0;
struct Parser_t1559;
const Il2CppTypeDefinitionMetadata Parser_t1559_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Parser_t1559_VTable/* vtableMethods */
	, Parser_t1559_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 706/* fieldStart */

};
TypeInfo Parser_t1559_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Parser"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Parser_t1559_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Parser_t1559_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Parser_t1559_0_0_0/* byval_arg */
	, &Parser_t1559_1_0_0/* this_arg */
	, &Parser_t1559_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Parser_t1559)/* instance_size */
	, sizeof (Parser_t1559)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 31/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearch.h"
// Metadata Definition System.Text.RegularExpressions.QuickSearch
extern TypeInfo QuickSearch_t1552_il2cpp_TypeInfo;
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo QuickSearch_t1552_QuickSearch__ctor_m7467_ParameterInfos[] = 
{
	{"str", 0, 134218519, 0, &String_t_0_0_0},
	{"ignore", 1, 134218520, 0, &Boolean_t125_0_0_0},
	{"reverse", 2, 134218521, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
extern const MethodInfo QuickSearch__ctor_m7467_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&QuickSearch__ctor_m7467/* method */
	, &QuickSearch_t1552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126_SByte_t126/* invoker_method */
	, QuickSearch_t1552_QuickSearch__ctor_m7467_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
extern const MethodInfo QuickSearch__cctor_m7468_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&QuickSearch__cctor_m7468/* method */
	, &QuickSearch_t1552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
extern const MethodInfo QuickSearch_get_Length_m7469_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&QuickSearch_get_Length_m7469/* method */
	, &QuickSearch_t1552_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo QuickSearch_t1552_QuickSearch_Search_m7470_ParameterInfos[] = 
{
	{"text", 0, 134218522, 0, &String_t_0_0_0},
	{"start", 1, 134218523, 0, &Int32_t123_0_0_0},
	{"end", 2, 134218524, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
extern const MethodInfo QuickSearch_Search_m7470_MethodInfo = 
{
	"Search"/* name */
	, (methodPointerType)&QuickSearch_Search_m7470/* method */
	, &QuickSearch_t1552_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t_Int32_t123_Int32_t123/* invoker_method */
	, QuickSearch_t1552_QuickSearch_Search_m7470_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
extern const MethodInfo QuickSearch_SetupShiftTable_m7471_MethodInfo = 
{
	"SetupShiftTable"/* name */
	, (methodPointerType)&QuickSearch_SetupShiftTable_m7471/* method */
	, &QuickSearch_t1552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo QuickSearch_t1552_QuickSearch_GetShiftDistance_m7472_ParameterInfos[] = 
{
	{"c", 0, 134218525, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
extern const MethodInfo QuickSearch_GetShiftDistance_m7472_MethodInfo = 
{
	"GetShiftDistance"/* name */
	, (methodPointerType)&QuickSearch_GetShiftDistance_m7472/* method */
	, &QuickSearch_t1552_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int16_t501/* invoker_method */
	, QuickSearch_t1552_QuickSearch_GetShiftDistance_m7472_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo QuickSearch_t1552_QuickSearch_GetChar_m7473_ParameterInfos[] = 
{
	{"c", 0, 134218526, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Char_t412_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
extern const MethodInfo QuickSearch_GetChar_m7473_MethodInfo = 
{
	"GetChar"/* name */
	, (methodPointerType)&QuickSearch_GetChar_m7473/* method */
	, &QuickSearch_t1552_il2cpp_TypeInfo/* declaring_type */
	, &Char_t412_0_0_0/* return_type */
	, RuntimeInvoker_Char_t412_Int16_t501/* invoker_method */
	, QuickSearch_t1552_QuickSearch_GetChar_m7473_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* QuickSearch_t1552_MethodInfos[] =
{
	&QuickSearch__ctor_m7467_MethodInfo,
	&QuickSearch__cctor_m7468_MethodInfo,
	&QuickSearch_get_Length_m7469_MethodInfo,
	&QuickSearch_Search_m7470_MethodInfo,
	&QuickSearch_SetupShiftTable_m7471_MethodInfo,
	&QuickSearch_GetShiftDistance_m7472_MethodInfo,
	&QuickSearch_GetChar_m7473_MethodInfo,
	NULL
};
extern const MethodInfo QuickSearch_get_Length_m7469_MethodInfo;
static const PropertyInfo QuickSearch_t1552____Length_PropertyInfo = 
{
	&QuickSearch_t1552_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &QuickSearch_get_Length_m7469_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* QuickSearch_t1552_PropertyInfos[] =
{
	&QuickSearch_t1552____Length_PropertyInfo,
	NULL
};
static const Il2CppMethodReference QuickSearch_t1552_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool QuickSearch_t1552_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType QuickSearch_t1552_0_0_0;
extern const Il2CppType QuickSearch_t1552_1_0_0;
struct QuickSearch_t1552;
const Il2CppTypeDefinitionMetadata QuickSearch_t1552_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, QuickSearch_t1552_VTable/* vtableMethods */
	, QuickSearch_t1552_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 712/* fieldStart */

};
TypeInfo QuickSearch_t1552_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "QuickSearch"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, QuickSearch_t1552_MethodInfos/* methods */
	, QuickSearch_t1552_PropertyInfos/* properties */
	, NULL/* events */
	, &QuickSearch_t1552_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &QuickSearch_t1552_0_0_0/* byval_arg */
	, &QuickSearch_t1552_1_0_0/* this_arg */
	, &QuickSearch_t1552_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (QuickSearch_t1552)/* instance_size */
	, sizeof (QuickSearch_t1552)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(QuickSearch_t1552_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 1/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluator.h"
// Metadata Definition System.Text.RegularExpressions.ReplacementEvaluator
extern TypeInfo ReplacementEvaluator_t1560_il2cpp_TypeInfo;
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluatorMethodDeclarations.h"
extern const Il2CppType Regex_t792_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1560_ReplacementEvaluator__ctor_m7474_ParameterInfos[] = 
{
	{"regex", 0, 134218527, 0, &Regex_t792_0_0_0},
	{"replacement", 1, 134218528, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern const MethodInfo ReplacementEvaluator__ctor_m7474_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ReplacementEvaluator__ctor_m7474/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1560_ReplacementEvaluator__ctor_m7474_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Match_t1517_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1560_ReplacementEvaluator_Evaluate_m7475_ParameterInfos[] = 
{
	{"match", 0, 134218529, 0, &Match_t1517_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern const MethodInfo ReplacementEvaluator_Evaluate_m7475_MethodInfo = 
{
	"Evaluate"/* name */
	, (methodPointerType)&ReplacementEvaluator_Evaluate_m7475/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1560_ReplacementEvaluator_Evaluate_m7475_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Match_t1517_0_0_0;
extern const Il2CppType StringBuilder_t381_0_0_0;
extern const Il2CppType StringBuilder_t381_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1560_ReplacementEvaluator_EvaluateAppend_m7476_ParameterInfos[] = 
{
	{"match", 0, 134218530, 0, &Match_t1517_0_0_0},
	{"sb", 1, 134218531, 0, &StringBuilder_t381_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern const MethodInfo ReplacementEvaluator_EvaluateAppend_m7476_MethodInfo = 
{
	"EvaluateAppend"/* name */
	, (methodPointerType)&ReplacementEvaluator_EvaluateAppend_m7476/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1560_ReplacementEvaluator_EvaluateAppend_m7476_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern const MethodInfo ReplacementEvaluator_get_NeedsGroupsOrCaptures_m7477_MethodInfo = 
{
	"get_NeedsGroupsOrCaptures"/* name */
	, (methodPointerType)&ReplacementEvaluator_get_NeedsGroupsOrCaptures_m7477/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1560_ReplacementEvaluator_Ensure_m7478_ParameterInfos[] = 
{
	{"size", 0, 134218532, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern const MethodInfo ReplacementEvaluator_Ensure_m7478_MethodInfo = 
{
	"Ensure"/* name */
	, (methodPointerType)&ReplacementEvaluator_Ensure_m7478/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, ReplacementEvaluator_t1560_ReplacementEvaluator_Ensure_m7478_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1560_ReplacementEvaluator_AddFromReplacement_m7479_ParameterInfos[] = 
{
	{"start", 0, 134218533, 0, &Int32_t123_0_0_0},
	{"end", 1, 134218534, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern const MethodInfo ReplacementEvaluator_AddFromReplacement_m7479_MethodInfo = 
{
	"AddFromReplacement"/* name */
	, (methodPointerType)&ReplacementEvaluator_AddFromReplacement_m7479/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123/* invoker_method */
	, ReplacementEvaluator_t1560_ReplacementEvaluator_AddFromReplacement_m7479_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo ReplacementEvaluator_t1560_ReplacementEvaluator_AddInt_m7480_ParameterInfos[] = 
{
	{"i", 0, 134218535, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern const MethodInfo ReplacementEvaluator_AddInt_m7480_MethodInfo = 
{
	"AddInt"/* name */
	, (methodPointerType)&ReplacementEvaluator_AddInt_m7480/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, ReplacementEvaluator_t1560_ReplacementEvaluator_AddInt_m7480_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern const MethodInfo ReplacementEvaluator_Compile_m7481_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ReplacementEvaluator_Compile_m7481/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_0;
static const ParameterInfo ReplacementEvaluator_t1560_ReplacementEvaluator_CompileTerm_m7482_ParameterInfos[] = 
{
	{"ptr", 0, 134218536, 0, &Int32_t123_1_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern const MethodInfo ReplacementEvaluator_CompileTerm_m7482_MethodInfo = 
{
	"CompileTerm"/* name */
	, (methodPointerType)&ReplacementEvaluator_CompileTerm_m7482/* method */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int32U26_t502/* invoker_method */
	, ReplacementEvaluator_t1560_ReplacementEvaluator_CompileTerm_m7482_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ReplacementEvaluator_t1560_MethodInfos[] =
{
	&ReplacementEvaluator__ctor_m7474_MethodInfo,
	&ReplacementEvaluator_Evaluate_m7475_MethodInfo,
	&ReplacementEvaluator_EvaluateAppend_m7476_MethodInfo,
	&ReplacementEvaluator_get_NeedsGroupsOrCaptures_m7477_MethodInfo,
	&ReplacementEvaluator_Ensure_m7478_MethodInfo,
	&ReplacementEvaluator_AddFromReplacement_m7479_MethodInfo,
	&ReplacementEvaluator_AddInt_m7480_MethodInfo,
	&ReplacementEvaluator_Compile_m7481_MethodInfo,
	&ReplacementEvaluator_CompileTerm_m7482_MethodInfo,
	NULL
};
extern const MethodInfo ReplacementEvaluator_get_NeedsGroupsOrCaptures_m7477_MethodInfo;
static const PropertyInfo ReplacementEvaluator_t1560____NeedsGroupsOrCaptures_PropertyInfo = 
{
	&ReplacementEvaluator_t1560_il2cpp_TypeInfo/* parent */
	, "NeedsGroupsOrCaptures"/* name */
	, &ReplacementEvaluator_get_NeedsGroupsOrCaptures_m7477_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ReplacementEvaluator_t1560_PropertyInfos[] =
{
	&ReplacementEvaluator_t1560____NeedsGroupsOrCaptures_PropertyInfo,
	NULL
};
static const Il2CppMethodReference ReplacementEvaluator_t1560_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool ReplacementEvaluator_t1560_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType ReplacementEvaluator_t1560_0_0_0;
extern const Il2CppType ReplacementEvaluator_t1560_1_0_0;
struct ReplacementEvaluator_t1560;
const Il2CppTypeDefinitionMetadata ReplacementEvaluator_t1560_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ReplacementEvaluator_t1560_VTable/* vtableMethods */
	, ReplacementEvaluator_t1560_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 719/* fieldStart */

};
TypeInfo ReplacementEvaluator_t1560_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReplacementEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ReplacementEvaluator_t1560_MethodInfos/* methods */
	, ReplacementEvaluator_t1560_PropertyInfos/* properties */
	, NULL/* events */
	, &ReplacementEvaluator_t1560_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ReplacementEvaluator_t1560_0_0_0/* byval_arg */
	, &ReplacementEvaluator_t1560_1_0_0/* this_arg */
	, &ReplacementEvaluator_t1560_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReplacementEvaluator_t1560)/* instance_size */
	, sizeof (ReplacementEvaluator_t1560)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 1/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionCollection
extern TypeInfo ExpressionCollection_t1561_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
extern const MethodInfo ExpressionCollection__ctor_m7483_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionCollection__ctor_m7483/* method */
	, &ExpressionCollection_t1561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
static const ParameterInfo ExpressionCollection_t1561_ExpressionCollection_Add_m7484_ParameterInfos[] = 
{
	{"e", 0, 134218537, 0, &Expression_t1562_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo ExpressionCollection_Add_m7484_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ExpressionCollection_Add_m7484/* method */
	, &ExpressionCollection_t1561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ExpressionCollection_t1561_ExpressionCollection_Add_m7484_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo ExpressionCollection_t1561_ExpressionCollection_get_Item_m7485_ParameterInfos[] = 
{
	{"i", 0, 134218538, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
extern const MethodInfo ExpressionCollection_get_Item_m7485_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ExpressionCollection_get_Item_m7485/* method */
	, &ExpressionCollection_t1561_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t123/* invoker_method */
	, ExpressionCollection_t1561_ExpressionCollection_get_Item_m7485_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Expression_t1562_0_0_0;
static const ParameterInfo ExpressionCollection_t1561_ExpressionCollection_set_Item_m7486_ParameterInfos[] = 
{
	{"i", 0, 134218539, 0, &Int32_t123_0_0_0},
	{"value", 1, 134218540, 0, &Expression_t1562_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo ExpressionCollection_set_Item_m7486_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ExpressionCollection_set_Item_m7486/* method */
	, &ExpressionCollection_t1561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Object_t/* invoker_method */
	, ExpressionCollection_t1561_ExpressionCollection_set_Item_m7486_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ExpressionCollection_t1561_ExpressionCollection_OnValidate_m7487_ParameterInfos[] = 
{
	{"o", 0, 134218541, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
extern const MethodInfo ExpressionCollection_OnValidate_m7487_MethodInfo = 
{
	"OnValidate"/* name */
	, (methodPointerType)&ExpressionCollection_OnValidate_m7487/* method */
	, &ExpressionCollection_t1561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ExpressionCollection_t1561_ExpressionCollection_OnValidate_m7487_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ExpressionCollection_t1561_MethodInfos[] =
{
	&ExpressionCollection__ctor_m7483_MethodInfo,
	&ExpressionCollection_Add_m7484_MethodInfo,
	&ExpressionCollection_get_Item_m7485_MethodInfo,
	&ExpressionCollection_set_Item_m7486_MethodInfo,
	&ExpressionCollection_OnValidate_m7487_MethodInfo,
	NULL
};
extern const MethodInfo ExpressionCollection_get_Item_m7485_MethodInfo;
extern const MethodInfo ExpressionCollection_set_Item_m7486_MethodInfo;
static const PropertyInfo ExpressionCollection_t1561____Item_PropertyInfo = 
{
	&ExpressionCollection_t1561_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ExpressionCollection_get_Item_m7485_MethodInfo/* get */
	, &ExpressionCollection_set_Item_m7486_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ExpressionCollection_t1561_PropertyInfos[] =
{
	&ExpressionCollection_t1561____Item_PropertyInfo,
	NULL
};
extern const MethodInfo CollectionBase_GetEnumerator_m7962_MethodInfo;
extern const MethodInfo CollectionBase_get_Count_m7963_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_ICollection_get_IsSynchronized_m7964_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_ICollection_get_SyncRoot_m7965_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_ICollection_CopyTo_m7966_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_get_IsFixedSize_m7967_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_get_IsReadOnly_m7968_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_get_Item_m7969_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_set_Item_m7970_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_Add_m7971_MethodInfo;
extern const MethodInfo CollectionBase_Clear_m7972_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_Contains_m7973_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_IndexOf_m7974_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_Insert_m7975_MethodInfo;
extern const MethodInfo CollectionBase_System_Collections_IList_Remove_m7976_MethodInfo;
extern const MethodInfo CollectionBase_RemoveAt_m7977_MethodInfo;
extern const MethodInfo CollectionBase_OnClear_m7978_MethodInfo;
extern const MethodInfo CollectionBase_OnClearComplete_m7979_MethodInfo;
extern const MethodInfo CollectionBase_OnInsert_m7980_MethodInfo;
extern const MethodInfo CollectionBase_OnInsertComplete_m7981_MethodInfo;
extern const MethodInfo CollectionBase_OnRemove_m7982_MethodInfo;
extern const MethodInfo CollectionBase_OnRemoveComplete_m7983_MethodInfo;
extern const MethodInfo CollectionBase_OnSet_m7984_MethodInfo;
extern const MethodInfo CollectionBase_OnSetComplete_m7985_MethodInfo;
extern const MethodInfo ExpressionCollection_OnValidate_m7487_MethodInfo;
static const Il2CppMethodReference ExpressionCollection_t1561_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&CollectionBase_GetEnumerator_m7962_MethodInfo,
	&CollectionBase_get_Count_m7963_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_IsSynchronized_m7964_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_SyncRoot_m7965_MethodInfo,
	&CollectionBase_System_Collections_ICollection_CopyTo_m7966_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsFixedSize_m7967_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsReadOnly_m7968_MethodInfo,
	&CollectionBase_System_Collections_IList_get_Item_m7969_MethodInfo,
	&CollectionBase_System_Collections_IList_set_Item_m7970_MethodInfo,
	&CollectionBase_System_Collections_IList_Add_m7971_MethodInfo,
	&CollectionBase_Clear_m7972_MethodInfo,
	&CollectionBase_System_Collections_IList_Contains_m7973_MethodInfo,
	&CollectionBase_System_Collections_IList_IndexOf_m7974_MethodInfo,
	&CollectionBase_System_Collections_IList_Insert_m7975_MethodInfo,
	&CollectionBase_System_Collections_IList_Remove_m7976_MethodInfo,
	&CollectionBase_RemoveAt_m7977_MethodInfo,
	&CollectionBase_OnClear_m7978_MethodInfo,
	&CollectionBase_OnClearComplete_m7979_MethodInfo,
	&CollectionBase_OnInsert_m7980_MethodInfo,
	&CollectionBase_OnInsertComplete_m7981_MethodInfo,
	&CollectionBase_OnRemove_m7982_MethodInfo,
	&CollectionBase_OnRemoveComplete_m7983_MethodInfo,
	&CollectionBase_OnSet_m7984_MethodInfo,
	&CollectionBase_OnSetComplete_m7985_MethodInfo,
	&ExpressionCollection_OnValidate_m7487_MethodInfo,
};
static bool ExpressionCollection_t1561_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ExpressionCollection_t1561_InterfacesOffsets[] = 
{
	{ &IEnumerable_t517_0_0_0, 4},
	{ &ICollection_t1279_0_0_0, 5},
	{ &IList_t1280_0_0_0, 9},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType ExpressionCollection_t1561_0_0_0;
extern const Il2CppType ExpressionCollection_t1561_1_0_0;
extern const Il2CppType CollectionBase_t1492_0_0_0;
struct ExpressionCollection_t1561;
const Il2CppTypeDefinitionMetadata ExpressionCollection_t1561_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExpressionCollection_t1561_InterfacesOffsets/* interfaceOffsets */
	, &CollectionBase_t1492_0_0_0/* parent */
	, ExpressionCollection_t1561_VTable/* vtableMethods */
	, ExpressionCollection_t1561_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ExpressionCollection_t1561_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionCollection"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionCollection_t1561_MethodInfos/* methods */
	, ExpressionCollection_t1561_PropertyInfos/* properties */
	, NULL/* events */
	, &ExpressionCollection_t1561_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 65/* custom_attributes_cache */
	, &ExpressionCollection_t1561_0_0_0/* byval_arg */
	, &ExpressionCollection_t1561_1_0_0/* this_arg */
	, &ExpressionCollection_t1561_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionCollection_t1561)/* instance_size */
	, sizeof (ExpressionCollection_t1561)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 29/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Expression
extern TypeInfo Expression_t1562_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern const MethodInfo Expression__ctor_m7488_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Expression__ctor_m7488/* method */
	, &Expression_t1562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Expression_t1562_Expression_Compile_m7926_ParameterInfos[] = 
{
	{"cmp", 0, 134218542, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218543, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Expression_Compile_m7926_MethodInfo = 
{
	"Compile"/* name */
	, NULL/* method */
	, &Expression_t1562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, Expression_t1562_Expression_Compile_m7926_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo Expression_t1562_Expression_GetWidth_m7927_ParameterInfos[] = 
{
	{"min", 0, 134218544, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218545, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Expression_GetWidth_m7927_MethodInfo = 
{
	"GetWidth"/* name */
	, NULL/* method */
	, &Expression_t1562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, Expression_t1562_Expression_GetWidth_m7927_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern const MethodInfo Expression_GetFixedWidth_m7489_MethodInfo = 
{
	"GetFixedWidth"/* name */
	, (methodPointerType)&Expression_GetFixedWidth_m7489/* method */
	, &Expression_t1562_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Expression_t1562_Expression_GetAnchorInfo_m7490_ParameterInfos[] = 
{
	{"reverse", 0, 134218546, 0, &Boolean_t125_0_0_0},
};
extern const Il2CppType AnchorInfo_t1580_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern const MethodInfo Expression_GetAnchorInfo_m7490_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Expression_GetAnchorInfo_m7490/* method */
	, &Expression_t1562_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1580_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t126/* invoker_method */
	, Expression_t1562_Expression_GetAnchorInfo_m7490_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
extern const MethodInfo Expression_IsComplex_m7928_MethodInfo = 
{
	"IsComplex"/* name */
	, NULL/* method */
	, &Expression_t1562_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Expression_t1562_MethodInfos[] =
{
	&Expression__ctor_m7488_MethodInfo,
	&Expression_Compile_m7926_MethodInfo,
	&Expression_GetWidth_m7927_MethodInfo,
	&Expression_GetFixedWidth_m7489_MethodInfo,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&Expression_IsComplex_m7928_MethodInfo,
	NULL
};
extern const MethodInfo Expression_GetAnchorInfo_m7490_MethodInfo;
static const Il2CppMethodReference Expression_t1562_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	NULL,
};
static bool Expression_t1562_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Expression_t1562_1_0_0;
struct Expression_t1562;
const Il2CppTypeDefinitionMetadata Expression_t1562_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Expression_t1562_VTable/* vtableMethods */
	, Expression_t1562_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Expression_t1562_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Expression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Expression_t1562_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Expression_t1562_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Expression_t1562_0_0_0/* byval_arg */
	, &Expression_t1562_1_0_0/* this_arg */
	, &Expression_t1562_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Expression_t1562)/* instance_size */
	, sizeof (Expression_t1562)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpres.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CompositeExpression
extern TypeInfo CompositeExpression_t1563_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern const MethodInfo CompositeExpression__ctor_m7491_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CompositeExpression__ctor_m7491/* method */
	, &CompositeExpression_t1563_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern const MethodInfo CompositeExpression_get_Expressions_m7492_MethodInfo = 
{
	"get_Expressions"/* name */
	, (methodPointerType)&CompositeExpression_get_Expressions_m7492/* method */
	, &CompositeExpression_t1563_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1561_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2180/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo CompositeExpression_t1563_CompositeExpression_GetWidth_m7493_ParameterInfos[] = 
{
	{"min", 0, 134218547, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218548, 0, &Int32_t123_1_0_2},
	{"count", 2, 134218549, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern const MethodInfo CompositeExpression_GetWidth_m7493_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CompositeExpression_GetWidth_m7493/* method */
	, &CompositeExpression_t1563_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502_Int32_t123/* invoker_method */
	, CompositeExpression_t1563_CompositeExpression_GetWidth_m7493_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern const MethodInfo CompositeExpression_IsComplex_m7494_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CompositeExpression_IsComplex_m7494/* method */
	, &CompositeExpression_t1563_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CompositeExpression_t1563_MethodInfos[] =
{
	&CompositeExpression__ctor_m7491_MethodInfo,
	&CompositeExpression_get_Expressions_m7492_MethodInfo,
	&CompositeExpression_GetWidth_m7493_MethodInfo,
	&CompositeExpression_IsComplex_m7494_MethodInfo,
	NULL
};
extern const MethodInfo CompositeExpression_get_Expressions_m7492_MethodInfo;
static const PropertyInfo CompositeExpression_t1563____Expressions_PropertyInfo = 
{
	&CompositeExpression_t1563_il2cpp_TypeInfo/* parent */
	, "Expressions"/* name */
	, &CompositeExpression_get_Expressions_m7492_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CompositeExpression_t1563_PropertyInfos[] =
{
	&CompositeExpression_t1563____Expressions_PropertyInfo,
	NULL
};
extern const MethodInfo CompositeExpression_IsComplex_m7494_MethodInfo;
static const Il2CppMethodReference CompositeExpression_t1563_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&CompositeExpression_IsComplex_m7494_MethodInfo,
};
static bool CompositeExpression_t1563_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CompositeExpression_t1563_0_0_0;
extern const Il2CppType CompositeExpression_t1563_1_0_0;
struct CompositeExpression_t1563;
const Il2CppTypeDefinitionMetadata CompositeExpression_t1563_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1562_0_0_0/* parent */
	, CompositeExpression_t1563_VTable/* vtableMethods */
	, CompositeExpression_t1563_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 723/* fieldStart */

};
TypeInfo CompositeExpression_t1563_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CompositeExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CompositeExpression_t1563_MethodInfos/* methods */
	, CompositeExpression_t1563_PropertyInfos/* properties */
	, NULL/* events */
	, &CompositeExpression_t1563_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CompositeExpression_t1563_0_0_0/* byval_arg */
	, &CompositeExpression_t1563_1_0_0/* this_arg */
	, &CompositeExpression_t1563_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CompositeExpression_t1563)/* instance_size */
	, sizeof (CompositeExpression_t1563)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Group
extern TypeInfo Group_t1564_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern const MethodInfo Group__ctor_m7495_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Group__ctor_m7495/* method */
	, &Group_t1564_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
static const ParameterInfo Group_t1564_Group_AppendExpression_m7496_ParameterInfos[] = 
{
	{"e", 0, 134218550, 0, &Expression_t1562_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Group_AppendExpression_m7496_MethodInfo = 
{
	"AppendExpression"/* name */
	, (methodPointerType)&Group_AppendExpression_m7496/* method */
	, &Group_t1564_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Group_t1564_Group_AppendExpression_m7496_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Group_t1564_Group_Compile_m7497_ParameterInfos[] = 
{
	{"cmp", 0, 134218551, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218552, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Group_Compile_m7497_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Group_Compile_m7497/* method */
	, &Group_t1564_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, Group_t1564_Group_Compile_m7497_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo Group_t1564_Group_GetWidth_m7498_ParameterInfos[] = 
{
	{"min", 0, 134218553, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218554, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Group_GetWidth_m7498_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Group_GetWidth_m7498/* method */
	, &Group_t1564_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, Group_t1564_Group_GetWidth_m7498_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Group_t1564_Group_GetAnchorInfo_m7499_ParameterInfos[] = 
{
	{"reverse", 0, 134218555, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern const MethodInfo Group_GetAnchorInfo_m7499_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Group_GetAnchorInfo_m7499/* method */
	, &Group_t1564_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1580_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t126/* invoker_method */
	, Group_t1564_Group_GetAnchorInfo_m7499_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Group_t1564_MethodInfos[] =
{
	&Group__ctor_m7495_MethodInfo,
	&Group_AppendExpression_m7496_MethodInfo,
	&Group_Compile_m7497_MethodInfo,
	&Group_GetWidth_m7498_MethodInfo,
	&Group_GetAnchorInfo_m7499_MethodInfo,
	NULL
};
extern const MethodInfo Group_Compile_m7497_MethodInfo;
extern const MethodInfo Group_GetWidth_m7498_MethodInfo;
extern const MethodInfo Group_GetAnchorInfo_m7499_MethodInfo;
static const Il2CppMethodReference Group_t1564_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&Group_Compile_m7497_MethodInfo,
	&Group_GetWidth_m7498_MethodInfo,
	&Group_GetAnchorInfo_m7499_MethodInfo,
	&CompositeExpression_IsComplex_m7494_MethodInfo,
};
static bool Group_t1564_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Group_t1564_1_0_0;
struct Group_t1564;
const Il2CppTypeDefinitionMetadata Group_t1564_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1563_0_0_0/* parent */
	, Group_t1564_VTable/* vtableMethods */
	, Group_t1564_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Group_t1564_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Group"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Group_t1564_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Group_t1564_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Group_t1564_0_0_0/* byval_arg */
	, &Group_t1564_1_0_0/* this_arg */
	, &Group_t1564_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Group_t1564)/* instance_size */
	, sizeof (Group_t1564)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressi.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.RegularExpression
extern TypeInfo RegularExpression_t1565_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
extern const MethodInfo RegularExpression__ctor_m7500_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RegularExpression__ctor_m7500/* method */
	, &RegularExpression_t1565_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo RegularExpression_t1565_RegularExpression_set_GroupCount_m7501_ParameterInfos[] = 
{
	{"value", 0, 134218556, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
extern const MethodInfo RegularExpression_set_GroupCount_m7501_MethodInfo = 
{
	"set_GroupCount"/* name */
	, (methodPointerType)&RegularExpression_set_GroupCount_m7501/* method */
	, &RegularExpression_t1565_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, RegularExpression_t1565_RegularExpression_set_GroupCount_m7501_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo RegularExpression_t1565_RegularExpression_Compile_m7502_ParameterInfos[] = 
{
	{"cmp", 0, 134218557, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218558, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo RegularExpression_Compile_m7502_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&RegularExpression_Compile_m7502/* method */
	, &RegularExpression_t1565_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, RegularExpression_t1565_RegularExpression_Compile_m7502_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RegularExpression_t1565_MethodInfos[] =
{
	&RegularExpression__ctor_m7500_MethodInfo,
	&RegularExpression_set_GroupCount_m7501_MethodInfo,
	&RegularExpression_Compile_m7502_MethodInfo,
	NULL
};
extern const MethodInfo RegularExpression_set_GroupCount_m7501_MethodInfo;
static const PropertyInfo RegularExpression_t1565____GroupCount_PropertyInfo = 
{
	&RegularExpression_t1565_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, NULL/* get */
	, &RegularExpression_set_GroupCount_m7501_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* RegularExpression_t1565_PropertyInfos[] =
{
	&RegularExpression_t1565____GroupCount_PropertyInfo,
	NULL
};
extern const MethodInfo RegularExpression_Compile_m7502_MethodInfo;
static const Il2CppMethodReference RegularExpression_t1565_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&RegularExpression_Compile_m7502_MethodInfo,
	&Group_GetWidth_m7498_MethodInfo,
	&Group_GetAnchorInfo_m7499_MethodInfo,
	&CompositeExpression_IsComplex_m7494_MethodInfo,
};
static bool RegularExpression_t1565_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType RegularExpression_t1565_1_0_0;
struct RegularExpression_t1565;
const Il2CppTypeDefinitionMetadata RegularExpression_t1565_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1564_0_0_0/* parent */
	, RegularExpression_t1565_VTable/* vtableMethods */
	, RegularExpression_t1565_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 724/* fieldStart */

};
TypeInfo RegularExpression_t1565_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RegularExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, RegularExpression_t1565_MethodInfos/* methods */
	, RegularExpression_t1565_PropertyInfos/* properties */
	, NULL/* events */
	, &RegularExpression_t1565_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RegularExpression_t1565_0_0_0/* byval_arg */
	, &RegularExpression_t1565_1_0_0/* this_arg */
	, &RegularExpression_t1565_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RegularExpression_t1565)/* instance_size */
	, sizeof (RegularExpression_t1565)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CapturingGroup
extern TypeInfo CapturingGroup_t1566_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::.ctor()
extern const MethodInfo CapturingGroup__ctor_m7503_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CapturingGroup__ctor_m7503/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
extern const MethodInfo CapturingGroup_get_Index_m7504_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&CapturingGroup_get_Index_m7504/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo CapturingGroup_t1566_CapturingGroup_set_Index_m7505_ParameterInfos[] = 
{
	{"value", 0, 134218559, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Index(System.Int32)
extern const MethodInfo CapturingGroup_set_Index_m7505_MethodInfo = 
{
	"set_Index"/* name */
	, (methodPointerType)&CapturingGroup_set_Index_m7505/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, CapturingGroup_t1566_CapturingGroup_set_Index_m7505_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::get_Name()
extern const MethodInfo CapturingGroup_get_Name_m7506_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&CapturingGroup_get_Name_m7506/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CapturingGroup_t1566_CapturingGroup_set_Name_m7507_ParameterInfos[] = 
{
	{"value", 0, 134218560, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Name(System.String)
extern const MethodInfo CapturingGroup_set_Name_m7507_MethodInfo = 
{
	"set_Name"/* name */
	, (methodPointerType)&CapturingGroup_set_Name_m7507/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, CapturingGroup_t1566_CapturingGroup_set_Name_m7507_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::get_IsNamed()
extern const MethodInfo CapturingGroup_get_IsNamed_m7508_MethodInfo = 
{
	"get_IsNamed"/* name */
	, (methodPointerType)&CapturingGroup_get_IsNamed_m7508/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo CapturingGroup_t1566_CapturingGroup_Compile_m7509_ParameterInfos[] = 
{
	{"cmp", 0, 134218561, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218562, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo CapturingGroup_Compile_m7509_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CapturingGroup_Compile_m7509/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, CapturingGroup_t1566_CapturingGroup_Compile_m7509_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::IsComplex()
extern const MethodInfo CapturingGroup_IsComplex_m7510_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CapturingGroup_IsComplex_m7510/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo CapturingGroup_t1566_CapturingGroup_CompareTo_m7511_ParameterInfos[] = 
{
	{"other", 0, 134218563, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::CompareTo(System.Object)
extern const MethodInfo CapturingGroup_CompareTo_m7511_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&CapturingGroup_CompareTo_m7511/* method */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t/* invoker_method */
	, CapturingGroup_t1566_CapturingGroup_CompareTo_m7511_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CapturingGroup_t1566_MethodInfos[] =
{
	&CapturingGroup__ctor_m7503_MethodInfo,
	&CapturingGroup_get_Index_m7504_MethodInfo,
	&CapturingGroup_set_Index_m7505_MethodInfo,
	&CapturingGroup_get_Name_m7506_MethodInfo,
	&CapturingGroup_set_Name_m7507_MethodInfo,
	&CapturingGroup_get_IsNamed_m7508_MethodInfo,
	&CapturingGroup_Compile_m7509_MethodInfo,
	&CapturingGroup_IsComplex_m7510_MethodInfo,
	&CapturingGroup_CompareTo_m7511_MethodInfo,
	NULL
};
extern const MethodInfo CapturingGroup_get_Index_m7504_MethodInfo;
extern const MethodInfo CapturingGroup_set_Index_m7505_MethodInfo;
static const PropertyInfo CapturingGroup_t1566____Index_PropertyInfo = 
{
	&CapturingGroup_t1566_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &CapturingGroup_get_Index_m7504_MethodInfo/* get */
	, &CapturingGroup_set_Index_m7505_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CapturingGroup_get_Name_m7506_MethodInfo;
extern const MethodInfo CapturingGroup_set_Name_m7507_MethodInfo;
static const PropertyInfo CapturingGroup_t1566____Name_PropertyInfo = 
{
	&CapturingGroup_t1566_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &CapturingGroup_get_Name_m7506_MethodInfo/* get */
	, &CapturingGroup_set_Name_m7507_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CapturingGroup_get_IsNamed_m7508_MethodInfo;
static const PropertyInfo CapturingGroup_t1566____IsNamed_PropertyInfo = 
{
	&CapturingGroup_t1566_il2cpp_TypeInfo/* parent */
	, "IsNamed"/* name */
	, &CapturingGroup_get_IsNamed_m7508_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CapturingGroup_t1566_PropertyInfos[] =
{
	&CapturingGroup_t1566____Index_PropertyInfo,
	&CapturingGroup_t1566____Name_PropertyInfo,
	&CapturingGroup_t1566____IsNamed_PropertyInfo,
	NULL
};
extern const MethodInfo CapturingGroup_Compile_m7509_MethodInfo;
extern const MethodInfo CapturingGroup_IsComplex_m7510_MethodInfo;
extern const MethodInfo CapturingGroup_CompareTo_m7511_MethodInfo;
static const Il2CppMethodReference CapturingGroup_t1566_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&CapturingGroup_Compile_m7509_MethodInfo,
	&Group_GetWidth_m7498_MethodInfo,
	&Group_GetAnchorInfo_m7499_MethodInfo,
	&CapturingGroup_IsComplex_m7510_MethodInfo,
	&CapturingGroup_CompareTo_m7511_MethodInfo,
};
static bool CapturingGroup_t1566_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* CapturingGroup_t1566_InterfacesTypeInfos[] = 
{
	&IComparable_t475_0_0_0,
};
static Il2CppInterfaceOffsetPair CapturingGroup_t1566_InterfacesOffsets[] = 
{
	{ &IComparable_t475_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CapturingGroup_t1566_0_0_0;
extern const Il2CppType CapturingGroup_t1566_1_0_0;
struct CapturingGroup_t1566;
const Il2CppTypeDefinitionMetadata CapturingGroup_t1566_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CapturingGroup_t1566_InterfacesTypeInfos/* implementedInterfaces */
	, CapturingGroup_t1566_InterfacesOffsets/* interfaceOffsets */
	, &Group_t1564_0_0_0/* parent */
	, CapturingGroup_t1566_VTable/* vtableMethods */
	, CapturingGroup_t1566_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 725/* fieldStart */

};
TypeInfo CapturingGroup_t1566_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CapturingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CapturingGroup_t1566_MethodInfos/* methods */
	, CapturingGroup_t1566_PropertyInfos/* properties */
	, NULL/* events */
	, &CapturingGroup_t1566_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CapturingGroup_t1566_0_0_0/* byval_arg */
	, &CapturingGroup_t1566_1_0_0/* this_arg */
	, &CapturingGroup_t1566_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CapturingGroup_t1566)/* instance_size */
	, sizeof (CapturingGroup_t1566)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BalancingGroup
extern TypeInfo BalancingGroup_t1567_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
extern const MethodInfo BalancingGroup__ctor_m7512_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BalancingGroup__ctor_m7512/* method */
	, &BalancingGroup_t1567_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CapturingGroup_t1566_0_0_0;
static const ParameterInfo BalancingGroup_t1567_BalancingGroup_set_Balance_m7513_ParameterInfos[] = 
{
	{"value", 0, 134218564, 0, &CapturingGroup_t1566_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern const MethodInfo BalancingGroup_set_Balance_m7513_MethodInfo = 
{
	"set_Balance"/* name */
	, (methodPointerType)&BalancingGroup_set_Balance_m7513/* method */
	, &BalancingGroup_t1567_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, BalancingGroup_t1567_BalancingGroup_set_Balance_m7513_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo BalancingGroup_t1567_BalancingGroup_Compile_m7514_ParameterInfos[] = 
{
	{"cmp", 0, 134218565, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218566, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo BalancingGroup_Compile_m7514_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BalancingGroup_Compile_m7514/* method */
	, &BalancingGroup_t1567_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, BalancingGroup_t1567_BalancingGroup_Compile_m7514_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BalancingGroup_t1567_MethodInfos[] =
{
	&BalancingGroup__ctor_m7512_MethodInfo,
	&BalancingGroup_set_Balance_m7513_MethodInfo,
	&BalancingGroup_Compile_m7514_MethodInfo,
	NULL
};
extern const MethodInfo BalancingGroup_set_Balance_m7513_MethodInfo;
static const PropertyInfo BalancingGroup_t1567____Balance_PropertyInfo = 
{
	&BalancingGroup_t1567_il2cpp_TypeInfo/* parent */
	, "Balance"/* name */
	, NULL/* get */
	, &BalancingGroup_set_Balance_m7513_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* BalancingGroup_t1567_PropertyInfos[] =
{
	&BalancingGroup_t1567____Balance_PropertyInfo,
	NULL
};
extern const MethodInfo BalancingGroup_Compile_m7514_MethodInfo;
static const Il2CppMethodReference BalancingGroup_t1567_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&BalancingGroup_Compile_m7514_MethodInfo,
	&Group_GetWidth_m7498_MethodInfo,
	&Group_GetAnchorInfo_m7499_MethodInfo,
	&CapturingGroup_IsComplex_m7510_MethodInfo,
	&CapturingGroup_CompareTo_m7511_MethodInfo,
};
static bool BalancingGroup_t1567_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair BalancingGroup_t1567_InterfacesOffsets[] = 
{
	{ &IComparable_t475_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType BalancingGroup_t1567_0_0_0;
extern const Il2CppType BalancingGroup_t1567_1_0_0;
struct BalancingGroup_t1567;
const Il2CppTypeDefinitionMetadata BalancingGroup_t1567_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, BalancingGroup_t1567_InterfacesOffsets/* interfaceOffsets */
	, &CapturingGroup_t1566_0_0_0/* parent */
	, BalancingGroup_t1567_VTable/* vtableMethods */
	, BalancingGroup_t1567_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 727/* fieldStart */

};
TypeInfo BalancingGroup_t1567_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BalancingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BalancingGroup_t1567_MethodInfos/* methods */
	, BalancingGroup_t1567_PropertyInfos/* properties */
	, NULL/* events */
	, &BalancingGroup_t1567_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BalancingGroup_t1567_0_0_0/* byval_arg */
	, &BalancingGroup_t1567_1_0_0/* this_arg */
	, &BalancingGroup_t1567_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BalancingGroup_t1567)/* instance_size */
	, sizeof (BalancingGroup_t1567)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktracking.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
extern TypeInfo NonBacktrackingGroup_t1568_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::.ctor()
extern const MethodInfo NonBacktrackingGroup__ctor_m7515_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NonBacktrackingGroup__ctor_m7515/* method */
	, &NonBacktrackingGroup_t1568_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo NonBacktrackingGroup_t1568_NonBacktrackingGroup_Compile_m7516_ParameterInfos[] = 
{
	{"cmp", 0, 134218567, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218568, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo NonBacktrackingGroup_Compile_m7516_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&NonBacktrackingGroup_Compile_m7516/* method */
	, &NonBacktrackingGroup_t1568_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, NonBacktrackingGroup_t1568_NonBacktrackingGroup_Compile_m7516_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::IsComplex()
extern const MethodInfo NonBacktrackingGroup_IsComplex_m7517_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&NonBacktrackingGroup_IsComplex_m7517/* method */
	, &NonBacktrackingGroup_t1568_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* NonBacktrackingGroup_t1568_MethodInfos[] =
{
	&NonBacktrackingGroup__ctor_m7515_MethodInfo,
	&NonBacktrackingGroup_Compile_m7516_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m7517_MethodInfo,
	NULL
};
extern const MethodInfo NonBacktrackingGroup_Compile_m7516_MethodInfo;
extern const MethodInfo NonBacktrackingGroup_IsComplex_m7517_MethodInfo;
static const Il2CppMethodReference NonBacktrackingGroup_t1568_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&NonBacktrackingGroup_Compile_m7516_MethodInfo,
	&Group_GetWidth_m7498_MethodInfo,
	&Group_GetAnchorInfo_m7499_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m7517_MethodInfo,
};
static bool NonBacktrackingGroup_t1568_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType NonBacktrackingGroup_t1568_0_0_0;
extern const Il2CppType NonBacktrackingGroup_t1568_1_0_0;
struct NonBacktrackingGroup_t1568;
const Il2CppTypeDefinitionMetadata NonBacktrackingGroup_t1568_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1564_0_0_0/* parent */
	, NonBacktrackingGroup_t1568_VTable/* vtableMethods */
	, NonBacktrackingGroup_t1568_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo NonBacktrackingGroup_t1568_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "NonBacktrackingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, NonBacktrackingGroup_t1568_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &NonBacktrackingGroup_t1568_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &NonBacktrackingGroup_t1568_0_0_0/* byval_arg */
	, &NonBacktrackingGroup_t1568_1_0_0/* this_arg */
	, &NonBacktrackingGroup_t1568_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NonBacktrackingGroup_t1568)/* instance_size */
	, sizeof (NonBacktrackingGroup_t1568)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_Repetition.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Repetition
extern TypeInfo Repetition_t1569_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Repetition_t1569_Repetition__ctor_m7518_ParameterInfos[] = 
{
	{"min", 0, 134218569, 0, &Int32_t123_0_0_0},
	{"max", 1, 134218570, 0, &Int32_t123_0_0_0},
	{"lazy", 2, 134218571, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern const MethodInfo Repetition__ctor_m7518_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Repetition__ctor_m7518/* method */
	, &Repetition_t1569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Int32_t123_SByte_t126/* invoker_method */
	, Repetition_t1569_Repetition__ctor_m7518_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern const MethodInfo Repetition_get_Expression_m7519_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&Repetition_get_Expression_m7519/* method */
	, &Repetition_t1569_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
static const ParameterInfo Repetition_t1569_Repetition_set_Expression_m7520_ParameterInfos[] = 
{
	{"value", 0, 134218572, 0, &Expression_t1562_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Repetition_set_Expression_m7520_MethodInfo = 
{
	"set_Expression"/* name */
	, (methodPointerType)&Repetition_set_Expression_m7520/* method */
	, &Repetition_t1569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Repetition_t1569_Repetition_set_Expression_m7520_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern const MethodInfo Repetition_get_Minimum_m7521_MethodInfo = 
{
	"get_Minimum"/* name */
	, (methodPointerType)&Repetition_get_Minimum_m7521/* method */
	, &Repetition_t1569_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Repetition_t1569_Repetition_Compile_m7522_ParameterInfos[] = 
{
	{"cmp", 0, 134218573, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218574, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Repetition_Compile_m7522_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Repetition_Compile_m7522/* method */
	, &Repetition_t1569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, Repetition_t1569_Repetition_Compile_m7522_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo Repetition_t1569_Repetition_GetWidth_m7523_ParameterInfos[] = 
{
	{"min", 0, 134218575, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218576, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Repetition_GetWidth_m7523_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Repetition_GetWidth_m7523/* method */
	, &Repetition_t1569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, Repetition_t1569_Repetition_GetWidth_m7523_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Repetition_t1569_Repetition_GetAnchorInfo_m7524_ParameterInfos[] = 
{
	{"reverse", 0, 134218577, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern const MethodInfo Repetition_GetAnchorInfo_m7524_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Repetition_GetAnchorInfo_m7524/* method */
	, &Repetition_t1569_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1580_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t126/* invoker_method */
	, Repetition_t1569_Repetition_GetAnchorInfo_m7524_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Repetition_t1569_MethodInfos[] =
{
	&Repetition__ctor_m7518_MethodInfo,
	&Repetition_get_Expression_m7519_MethodInfo,
	&Repetition_set_Expression_m7520_MethodInfo,
	&Repetition_get_Minimum_m7521_MethodInfo,
	&Repetition_Compile_m7522_MethodInfo,
	&Repetition_GetWidth_m7523_MethodInfo,
	&Repetition_GetAnchorInfo_m7524_MethodInfo,
	NULL
};
extern const MethodInfo Repetition_get_Expression_m7519_MethodInfo;
extern const MethodInfo Repetition_set_Expression_m7520_MethodInfo;
static const PropertyInfo Repetition_t1569____Expression_PropertyInfo = 
{
	&Repetition_t1569_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &Repetition_get_Expression_m7519_MethodInfo/* get */
	, &Repetition_set_Expression_m7520_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Repetition_get_Minimum_m7521_MethodInfo;
static const PropertyInfo Repetition_t1569____Minimum_PropertyInfo = 
{
	&Repetition_t1569_il2cpp_TypeInfo/* parent */
	, "Minimum"/* name */
	, &Repetition_get_Minimum_m7521_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Repetition_t1569_PropertyInfos[] =
{
	&Repetition_t1569____Expression_PropertyInfo,
	&Repetition_t1569____Minimum_PropertyInfo,
	NULL
};
extern const MethodInfo Repetition_Compile_m7522_MethodInfo;
extern const MethodInfo Repetition_GetWidth_m7523_MethodInfo;
extern const MethodInfo Repetition_GetAnchorInfo_m7524_MethodInfo;
static const Il2CppMethodReference Repetition_t1569_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&Repetition_Compile_m7522_MethodInfo,
	&Repetition_GetWidth_m7523_MethodInfo,
	&Repetition_GetAnchorInfo_m7524_MethodInfo,
	&CompositeExpression_IsComplex_m7494_MethodInfo,
};
static bool Repetition_t1569_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Repetition_t1569_0_0_0;
extern const Il2CppType Repetition_t1569_1_0_0;
struct Repetition_t1569;
const Il2CppTypeDefinitionMetadata Repetition_t1569_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1563_0_0_0/* parent */
	, Repetition_t1569_VTable/* vtableMethods */
	, Repetition_t1569_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 728/* fieldStart */

};
TypeInfo Repetition_t1569_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Repetition"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Repetition_t1569_MethodInfos/* methods */
	, Repetition_t1569_PropertyInfos/* properties */
	, NULL/* events */
	, &Repetition_t1569_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Repetition_t1569_0_0_0/* byval_arg */
	, &Repetition_t1569_1_0_0/* this_arg */
	, &Repetition_t1569_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Repetition_t1569)/* instance_size */
	, sizeof (Repetition_t1569)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Assertion
extern TypeInfo Assertion_t1570_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern const MethodInfo Assertion__ctor_m7525_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Assertion__ctor_m7525/* method */
	, &Assertion_t1570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern const MethodInfo Assertion_get_TrueExpression_m7526_MethodInfo = 
{
	"get_TrueExpression"/* name */
	, (methodPointerType)&Assertion_get_TrueExpression_m7526/* method */
	, &Assertion_t1570_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
static const ParameterInfo Assertion_t1570_Assertion_set_TrueExpression_m7527_ParameterInfos[] = 
{
	{"value", 0, 134218578, 0, &Expression_t1562_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Assertion_set_TrueExpression_m7527_MethodInfo = 
{
	"set_TrueExpression"/* name */
	, (methodPointerType)&Assertion_set_TrueExpression_m7527/* method */
	, &Assertion_t1570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Assertion_t1570_Assertion_set_TrueExpression_m7527_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern const MethodInfo Assertion_get_FalseExpression_m7528_MethodInfo = 
{
	"get_FalseExpression"/* name */
	, (methodPointerType)&Assertion_get_FalseExpression_m7528/* method */
	, &Assertion_t1570_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
static const ParameterInfo Assertion_t1570_Assertion_set_FalseExpression_m7529_ParameterInfos[] = 
{
	{"value", 0, 134218579, 0, &Expression_t1562_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Assertion_set_FalseExpression_m7529_MethodInfo = 
{
	"set_FalseExpression"/* name */
	, (methodPointerType)&Assertion_set_FalseExpression_m7529/* method */
	, &Assertion_t1570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Assertion_t1570_Assertion_set_FalseExpression_m7529_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo Assertion_t1570_Assertion_GetWidth_m7530_ParameterInfos[] = 
{
	{"min", 0, 134218580, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218581, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Assertion_GetWidth_m7530_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Assertion_GetWidth_m7530/* method */
	, &Assertion_t1570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, Assertion_t1570_Assertion_GetWidth_m7530_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Assertion_t1570_MethodInfos[] =
{
	&Assertion__ctor_m7525_MethodInfo,
	&Assertion_get_TrueExpression_m7526_MethodInfo,
	&Assertion_set_TrueExpression_m7527_MethodInfo,
	&Assertion_get_FalseExpression_m7528_MethodInfo,
	&Assertion_set_FalseExpression_m7529_MethodInfo,
	&Assertion_GetWidth_m7530_MethodInfo,
	NULL
};
extern const MethodInfo Assertion_get_TrueExpression_m7526_MethodInfo;
extern const MethodInfo Assertion_set_TrueExpression_m7527_MethodInfo;
static const PropertyInfo Assertion_t1570____TrueExpression_PropertyInfo = 
{
	&Assertion_t1570_il2cpp_TypeInfo/* parent */
	, "TrueExpression"/* name */
	, &Assertion_get_TrueExpression_m7526_MethodInfo/* get */
	, &Assertion_set_TrueExpression_m7527_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Assertion_get_FalseExpression_m7528_MethodInfo;
extern const MethodInfo Assertion_set_FalseExpression_m7529_MethodInfo;
static const PropertyInfo Assertion_t1570____FalseExpression_PropertyInfo = 
{
	&Assertion_t1570_il2cpp_TypeInfo/* parent */
	, "FalseExpression"/* name */
	, &Assertion_get_FalseExpression_m7528_MethodInfo/* get */
	, &Assertion_set_FalseExpression_m7529_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Assertion_t1570_PropertyInfos[] =
{
	&Assertion_t1570____TrueExpression_PropertyInfo,
	&Assertion_t1570____FalseExpression_PropertyInfo,
	NULL
};
extern const MethodInfo Assertion_GetWidth_m7530_MethodInfo;
static const Il2CppMethodReference Assertion_t1570_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	NULL,
	&Assertion_GetWidth_m7530_MethodInfo,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&CompositeExpression_IsComplex_m7494_MethodInfo,
};
static bool Assertion_t1570_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Assertion_t1570_1_0_0;
struct Assertion_t1570;
const Il2CppTypeDefinitionMetadata Assertion_t1570_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1563_0_0_0/* parent */
	, Assertion_t1570_VTable/* vtableMethods */
	, Assertion_t1570_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Assertion_t1570_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Assertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Assertion_t1570_MethodInfos/* methods */
	, Assertion_t1570_PropertyInfos/* properties */
	, NULL/* events */
	, &Assertion_t1570_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Assertion_t1570_0_0_0/* byval_arg */
	, &Assertion_t1570_1_0_0/* this_arg */
	, &Assertion_t1570_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Assertion_t1570)/* instance_size */
	, sizeof (Assertion_t1570)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CaptureAssertion
extern TypeInfo CaptureAssertion_t1573_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
extern const Il2CppType Literal_t1572_0_0_0;
extern const Il2CppType Literal_t1572_0_0_0;
static const ParameterInfo CaptureAssertion_t1573_CaptureAssertion__ctor_m7531_ParameterInfos[] = 
{
	{"l", 0, 134218582, 0, &Literal_t1572_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern const MethodInfo CaptureAssertion__ctor_m7531_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CaptureAssertion__ctor_m7531/* method */
	, &CaptureAssertion_t1573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, CaptureAssertion_t1573_CaptureAssertion__ctor_m7531_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CapturingGroup_t1566_0_0_0;
static const ParameterInfo CaptureAssertion_t1573_CaptureAssertion_set_CapturingGroup_m7532_ParameterInfos[] = 
{
	{"value", 0, 134218583, 0, &CapturingGroup_t1566_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern const MethodInfo CaptureAssertion_set_CapturingGroup_m7532_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&CaptureAssertion_set_CapturingGroup_m7532/* method */
	, &CaptureAssertion_t1573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, CaptureAssertion_t1573_CaptureAssertion_set_CapturingGroup_m7532_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo CaptureAssertion_t1573_CaptureAssertion_Compile_m7533_ParameterInfos[] = 
{
	{"cmp", 0, 134218584, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218585, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo CaptureAssertion_Compile_m7533_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CaptureAssertion_Compile_m7533/* method */
	, &CaptureAssertion_t1573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, CaptureAssertion_t1573_CaptureAssertion_Compile_m7533_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern const MethodInfo CaptureAssertion_IsComplex_m7534_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CaptureAssertion_IsComplex_m7534/* method */
	, &CaptureAssertion_t1573_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern const MethodInfo CaptureAssertion_get_Alternate_m7535_MethodInfo = 
{
	"get_Alternate"/* name */
	, (methodPointerType)&CaptureAssertion_get_Alternate_m7535/* method */
	, &CaptureAssertion_t1573_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionAssertion_t1571_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CaptureAssertion_t1573_MethodInfos[] =
{
	&CaptureAssertion__ctor_m7531_MethodInfo,
	&CaptureAssertion_set_CapturingGroup_m7532_MethodInfo,
	&CaptureAssertion_Compile_m7533_MethodInfo,
	&CaptureAssertion_IsComplex_m7534_MethodInfo,
	&CaptureAssertion_get_Alternate_m7535_MethodInfo,
	NULL
};
extern const MethodInfo CaptureAssertion_set_CapturingGroup_m7532_MethodInfo;
static const PropertyInfo CaptureAssertion_t1573____CapturingGroup_PropertyInfo = 
{
	&CaptureAssertion_t1573_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, NULL/* get */
	, &CaptureAssertion_set_CapturingGroup_m7532_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CaptureAssertion_get_Alternate_m7535_MethodInfo;
static const PropertyInfo CaptureAssertion_t1573____Alternate_PropertyInfo = 
{
	&CaptureAssertion_t1573_il2cpp_TypeInfo/* parent */
	, "Alternate"/* name */
	, &CaptureAssertion_get_Alternate_m7535_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CaptureAssertion_t1573_PropertyInfos[] =
{
	&CaptureAssertion_t1573____CapturingGroup_PropertyInfo,
	&CaptureAssertion_t1573____Alternate_PropertyInfo,
	NULL
};
extern const MethodInfo CaptureAssertion_Compile_m7533_MethodInfo;
extern const MethodInfo CaptureAssertion_IsComplex_m7534_MethodInfo;
static const Il2CppMethodReference CaptureAssertion_t1573_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&CaptureAssertion_Compile_m7533_MethodInfo,
	&Assertion_GetWidth_m7530_MethodInfo,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&CaptureAssertion_IsComplex_m7534_MethodInfo,
};
static bool CaptureAssertion_t1573_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CaptureAssertion_t1573_0_0_0;
extern const Il2CppType CaptureAssertion_t1573_1_0_0;
struct CaptureAssertion_t1573;
const Il2CppTypeDefinitionMetadata CaptureAssertion_t1573_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1570_0_0_0/* parent */
	, CaptureAssertion_t1573_VTable/* vtableMethods */
	, CaptureAssertion_t1573_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 731/* fieldStart */

};
TypeInfo CaptureAssertion_t1573_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CaptureAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CaptureAssertion_t1573_MethodInfos/* methods */
	, CaptureAssertion_t1573_PropertyInfos/* properties */
	, NULL/* events */
	, &CaptureAssertion_t1573_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CaptureAssertion_t1573_0_0_0/* byval_arg */
	, &CaptureAssertion_t1573_1_0_0/* this_arg */
	, &CaptureAssertion_t1573_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CaptureAssertion_t1573)/* instance_size */
	, sizeof (CaptureAssertion_t1573)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionAssertion
extern TypeInfo ExpressionAssertion_t1571_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern const MethodInfo ExpressionAssertion__ctor_m7536_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionAssertion__ctor_m7536/* method */
	, &ExpressionAssertion_t1571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ExpressionAssertion_t1571_ExpressionAssertion_set_Reverse_m7537_ParameterInfos[] = 
{
	{"value", 0, 134218586, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern const MethodInfo ExpressionAssertion_set_Reverse_m7537_MethodInfo = 
{
	"set_Reverse"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Reverse_m7537/* method */
	, &ExpressionAssertion_t1571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_SByte_t126/* invoker_method */
	, ExpressionAssertion_t1571_ExpressionAssertion_set_Reverse_m7537_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ExpressionAssertion_t1571_ExpressionAssertion_set_Negate_m7538_ParameterInfos[] = 
{
	{"value", 0, 134218587, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern const MethodInfo ExpressionAssertion_set_Negate_m7538_MethodInfo = 
{
	"set_Negate"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Negate_m7538/* method */
	, &ExpressionAssertion_t1571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_SByte_t126/* invoker_method */
	, ExpressionAssertion_t1571_ExpressionAssertion_set_Negate_m7538_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern const MethodInfo ExpressionAssertion_get_TestExpression_m7539_MethodInfo = 
{
	"get_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_get_TestExpression_m7539/* method */
	, &ExpressionAssertion_t1571_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
static const ParameterInfo ExpressionAssertion_t1571_ExpressionAssertion_set_TestExpression_m7540_ParameterInfos[] = 
{
	{"value", 0, 134218588, 0, &Expression_t1562_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo ExpressionAssertion_set_TestExpression_m7540_MethodInfo = 
{
	"set_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_set_TestExpression_m7540/* method */
	, &ExpressionAssertion_t1571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, ExpressionAssertion_t1571_ExpressionAssertion_set_TestExpression_m7540_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo ExpressionAssertion_t1571_ExpressionAssertion_Compile_m7541_ParameterInfos[] = 
{
	{"cmp", 0, 134218589, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218590, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo ExpressionAssertion_Compile_m7541_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ExpressionAssertion_Compile_m7541/* method */
	, &ExpressionAssertion_t1571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, ExpressionAssertion_t1571_ExpressionAssertion_Compile_m7541_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern const MethodInfo ExpressionAssertion_IsComplex_m7542_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&ExpressionAssertion_IsComplex_m7542/* method */
	, &ExpressionAssertion_t1571_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ExpressionAssertion_t1571_MethodInfos[] =
{
	&ExpressionAssertion__ctor_m7536_MethodInfo,
	&ExpressionAssertion_set_Reverse_m7537_MethodInfo,
	&ExpressionAssertion_set_Negate_m7538_MethodInfo,
	&ExpressionAssertion_get_TestExpression_m7539_MethodInfo,
	&ExpressionAssertion_set_TestExpression_m7540_MethodInfo,
	&ExpressionAssertion_Compile_m7541_MethodInfo,
	&ExpressionAssertion_IsComplex_m7542_MethodInfo,
	NULL
};
extern const MethodInfo ExpressionAssertion_set_Reverse_m7537_MethodInfo;
static const PropertyInfo ExpressionAssertion_t1571____Reverse_PropertyInfo = 
{
	&ExpressionAssertion_t1571_il2cpp_TypeInfo/* parent */
	, "Reverse"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Reverse_m7537_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ExpressionAssertion_set_Negate_m7538_MethodInfo;
static const PropertyInfo ExpressionAssertion_t1571____Negate_PropertyInfo = 
{
	&ExpressionAssertion_t1571_il2cpp_TypeInfo/* parent */
	, "Negate"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Negate_m7538_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ExpressionAssertion_get_TestExpression_m7539_MethodInfo;
extern const MethodInfo ExpressionAssertion_set_TestExpression_m7540_MethodInfo;
static const PropertyInfo ExpressionAssertion_t1571____TestExpression_PropertyInfo = 
{
	&ExpressionAssertion_t1571_il2cpp_TypeInfo/* parent */
	, "TestExpression"/* name */
	, &ExpressionAssertion_get_TestExpression_m7539_MethodInfo/* get */
	, &ExpressionAssertion_set_TestExpression_m7540_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ExpressionAssertion_t1571_PropertyInfos[] =
{
	&ExpressionAssertion_t1571____Reverse_PropertyInfo,
	&ExpressionAssertion_t1571____Negate_PropertyInfo,
	&ExpressionAssertion_t1571____TestExpression_PropertyInfo,
	NULL
};
extern const MethodInfo ExpressionAssertion_Compile_m7541_MethodInfo;
extern const MethodInfo ExpressionAssertion_IsComplex_m7542_MethodInfo;
static const Il2CppMethodReference ExpressionAssertion_t1571_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&ExpressionAssertion_Compile_m7541_MethodInfo,
	&Assertion_GetWidth_m7530_MethodInfo,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&ExpressionAssertion_IsComplex_m7542_MethodInfo,
};
static bool ExpressionAssertion_t1571_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType ExpressionAssertion_t1571_1_0_0;
struct ExpressionAssertion_t1571;
const Il2CppTypeDefinitionMetadata ExpressionAssertion_t1571_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1570_0_0_0/* parent */
	, ExpressionAssertion_t1571_VTable/* vtableMethods */
	, ExpressionAssertion_t1571_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 734/* fieldStart */

};
TypeInfo ExpressionAssertion_t1571_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionAssertion_t1571_MethodInfos/* methods */
	, ExpressionAssertion_t1571_PropertyInfos/* properties */
	, NULL/* events */
	, &ExpressionAssertion_t1571_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ExpressionAssertion_t1571_0_0_0/* byval_arg */
	, &ExpressionAssertion_t1571_1_0_0/* this_arg */
	, &ExpressionAssertion_t1571_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionAssertion_t1571)/* instance_size */
	, sizeof (ExpressionAssertion_t1571)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Alternation
extern TypeInfo Alternation_t1574_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
extern const MethodInfo Alternation__ctor_m7543_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Alternation__ctor_m7543/* method */
	, &Alternation_t1574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern const MethodInfo Alternation_get_Alternatives_m7544_MethodInfo = 
{
	"get_Alternatives"/* name */
	, (methodPointerType)&Alternation_get_Alternatives_m7544/* method */
	, &Alternation_t1574_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1561_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
static const ParameterInfo Alternation_t1574_Alternation_AddAlternative_m7545_ParameterInfos[] = 
{
	{"e", 0, 134218591, 0, &Expression_t1562_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
extern const MethodInfo Alternation_AddAlternative_m7545_MethodInfo = 
{
	"AddAlternative"/* name */
	, (methodPointerType)&Alternation_AddAlternative_m7545/* method */
	, &Alternation_t1574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Alternation_t1574_Alternation_AddAlternative_m7545_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Alternation_t1574_Alternation_Compile_m7546_ParameterInfos[] = 
{
	{"cmp", 0, 134218592, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218593, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Alternation_Compile_m7546_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Alternation_Compile_m7546/* method */
	, &Alternation_t1574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, Alternation_t1574_Alternation_Compile_m7546_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo Alternation_t1574_Alternation_GetWidth_m7547_ParameterInfos[] = 
{
	{"min", 0, 134218594, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218595, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Alternation_GetWidth_m7547_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Alternation_GetWidth_m7547/* method */
	, &Alternation_t1574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, Alternation_t1574_Alternation_GetWidth_m7547_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Alternation_t1574_MethodInfos[] =
{
	&Alternation__ctor_m7543_MethodInfo,
	&Alternation_get_Alternatives_m7544_MethodInfo,
	&Alternation_AddAlternative_m7545_MethodInfo,
	&Alternation_Compile_m7546_MethodInfo,
	&Alternation_GetWidth_m7547_MethodInfo,
	NULL
};
extern const MethodInfo Alternation_get_Alternatives_m7544_MethodInfo;
static const PropertyInfo Alternation_t1574____Alternatives_PropertyInfo = 
{
	&Alternation_t1574_il2cpp_TypeInfo/* parent */
	, "Alternatives"/* name */
	, &Alternation_get_Alternatives_m7544_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Alternation_t1574_PropertyInfos[] =
{
	&Alternation_t1574____Alternatives_PropertyInfo,
	NULL
};
extern const MethodInfo Alternation_Compile_m7546_MethodInfo;
extern const MethodInfo Alternation_GetWidth_m7547_MethodInfo;
static const Il2CppMethodReference Alternation_t1574_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&Alternation_Compile_m7546_MethodInfo,
	&Alternation_GetWidth_m7547_MethodInfo,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&CompositeExpression_IsComplex_m7494_MethodInfo,
};
static bool Alternation_t1574_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Alternation_t1574_0_0_0;
extern const Il2CppType Alternation_t1574_1_0_0;
struct Alternation_t1574;
const Il2CppTypeDefinitionMetadata Alternation_t1574_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1563_0_0_0/* parent */
	, Alternation_t1574_VTable/* vtableMethods */
	, Alternation_t1574_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Alternation_t1574_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Alternation"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Alternation_t1574_MethodInfos/* methods */
	, Alternation_t1574_PropertyInfos/* properties */
	, NULL/* events */
	, &Alternation_t1574_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Alternation_t1574_0_0_0/* byval_arg */
	, &Alternation_t1574_1_0_0/* this_arg */
	, &Alternation_t1574_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Alternation_t1574)/* instance_size */
	, sizeof (Alternation_t1574)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Literal
extern TypeInfo Literal_t1572_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Literal_t1572_Literal__ctor_m7548_ParameterInfos[] = 
{
	{"str", 0, 134218596, 0, &String_t_0_0_0},
	{"ignore", 1, 134218597, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern const MethodInfo Literal__ctor_m7548_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Literal__ctor_m7548/* method */
	, &Literal_t1572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, Literal_t1572_Literal__ctor_m7548_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Literal_t1572_Literal_CompileLiteral_m7549_ParameterInfos[] = 
{
	{"str", 0, 134218598, 0, &String_t_0_0_0},
	{"cmp", 1, 134218599, 0, &ICompiler_t1605_0_0_0},
	{"ignore", 2, 134218600, 0, &Boolean_t125_0_0_0},
	{"reverse", 3, 134218601, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern const MethodInfo Literal_CompileLiteral_m7549_MethodInfo = 
{
	"CompileLiteral"/* name */
	, (methodPointerType)&Literal_CompileLiteral_m7549/* method */
	, &Literal_t1572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t_SByte_t126_SByte_t126/* invoker_method */
	, Literal_t1572_Literal_CompileLiteral_m7549_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Literal_t1572_Literal_Compile_m7550_ParameterInfos[] = 
{
	{"cmp", 0, 134218602, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218603, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Literal_Compile_m7550_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Literal_Compile_m7550/* method */
	, &Literal_t1572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, Literal_t1572_Literal_Compile_m7550_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo Literal_t1572_Literal_GetWidth_m7551_ParameterInfos[] = 
{
	{"min", 0, 134218604, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218605, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Literal_GetWidth_m7551_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Literal_GetWidth_m7551/* method */
	, &Literal_t1572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, Literal_t1572_Literal_GetWidth_m7551_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Literal_t1572_Literal_GetAnchorInfo_m7552_ParameterInfos[] = 
{
	{"reverse", 0, 134218606, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern const MethodInfo Literal_GetAnchorInfo_m7552_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Literal_GetAnchorInfo_m7552/* method */
	, &Literal_t1572_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1580_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t126/* invoker_method */
	, Literal_t1572_Literal_GetAnchorInfo_m7552_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 894/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern const MethodInfo Literal_IsComplex_m7553_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Literal_IsComplex_m7553/* method */
	, &Literal_t1572_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Literal_t1572_MethodInfos[] =
{
	&Literal__ctor_m7548_MethodInfo,
	&Literal_CompileLiteral_m7549_MethodInfo,
	&Literal_Compile_m7550_MethodInfo,
	&Literal_GetWidth_m7551_MethodInfo,
	&Literal_GetAnchorInfo_m7552_MethodInfo,
	&Literal_IsComplex_m7553_MethodInfo,
	NULL
};
extern const MethodInfo Literal_Compile_m7550_MethodInfo;
extern const MethodInfo Literal_GetWidth_m7551_MethodInfo;
extern const MethodInfo Literal_GetAnchorInfo_m7552_MethodInfo;
extern const MethodInfo Literal_IsComplex_m7553_MethodInfo;
static const Il2CppMethodReference Literal_t1572_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&Literal_Compile_m7550_MethodInfo,
	&Literal_GetWidth_m7551_MethodInfo,
	&Literal_GetAnchorInfo_m7552_MethodInfo,
	&Literal_IsComplex_m7553_MethodInfo,
};
static bool Literal_t1572_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Literal_t1572_1_0_0;
struct Literal_t1572;
const Il2CppTypeDefinitionMetadata Literal_t1572_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1562_0_0_0/* parent */
	, Literal_t1572_VTable/* vtableMethods */
	, Literal_t1572_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 736/* fieldStart */

};
TypeInfo Literal_t1572_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Literal"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Literal_t1572_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Literal_t1572_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Literal_t1572_0_0_0/* byval_arg */
	, &Literal_t1572_1_0_0/* this_arg */
	, &Literal_t1572_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Literal_t1572)/* instance_size */
	, sizeof (Literal_t1572)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.PositionAssertion
extern TypeInfo PositionAssertion_t1575_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
extern const Il2CppType Position_t1536_0_0_0;
static const ParameterInfo PositionAssertion_t1575_PositionAssertion__ctor_m7554_ParameterInfos[] = 
{
	{"pos", 0, 134218607, 0, &Position_t1536_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern const MethodInfo PositionAssertion__ctor_m7554_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PositionAssertion__ctor_m7554/* method */
	, &PositionAssertion_t1575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415/* invoker_method */
	, PositionAssertion_t1575_PositionAssertion__ctor_m7554_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PositionAssertion_t1575_PositionAssertion_Compile_m7555_ParameterInfos[] = 
{
	{"cmp", 0, 134218608, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218609, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo PositionAssertion_Compile_m7555_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&PositionAssertion_Compile_m7555/* method */
	, &PositionAssertion_t1575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, PositionAssertion_t1575_PositionAssertion_Compile_m7555_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo PositionAssertion_t1575_PositionAssertion_GetWidth_m7556_ParameterInfos[] = 
{
	{"min", 0, 134218610, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218611, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo PositionAssertion_GetWidth_m7556_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&PositionAssertion_GetWidth_m7556/* method */
	, &PositionAssertion_t1575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, PositionAssertion_t1575_PositionAssertion_GetWidth_m7556_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern const MethodInfo PositionAssertion_IsComplex_m7557_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&PositionAssertion_IsComplex_m7557/* method */
	, &PositionAssertion_t1575_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo PositionAssertion_t1575_PositionAssertion_GetAnchorInfo_m7558_ParameterInfos[] = 
{
	{"revers", 0, 134218612, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern const MethodInfo PositionAssertion_GetAnchorInfo_m7558_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&PositionAssertion_GetAnchorInfo_m7558/* method */
	, &PositionAssertion_t1575_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1580_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t126/* invoker_method */
	, PositionAssertion_t1575_PositionAssertion_GetAnchorInfo_m7558_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PositionAssertion_t1575_MethodInfos[] =
{
	&PositionAssertion__ctor_m7554_MethodInfo,
	&PositionAssertion_Compile_m7555_MethodInfo,
	&PositionAssertion_GetWidth_m7556_MethodInfo,
	&PositionAssertion_IsComplex_m7557_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m7558_MethodInfo,
	NULL
};
extern const MethodInfo PositionAssertion_Compile_m7555_MethodInfo;
extern const MethodInfo PositionAssertion_GetWidth_m7556_MethodInfo;
extern const MethodInfo PositionAssertion_GetAnchorInfo_m7558_MethodInfo;
extern const MethodInfo PositionAssertion_IsComplex_m7557_MethodInfo;
static const Il2CppMethodReference PositionAssertion_t1575_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&PositionAssertion_Compile_m7555_MethodInfo,
	&PositionAssertion_GetWidth_m7556_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m7558_MethodInfo,
	&PositionAssertion_IsComplex_m7557_MethodInfo,
};
static bool PositionAssertion_t1575_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType PositionAssertion_t1575_0_0_0;
extern const Il2CppType PositionAssertion_t1575_1_0_0;
struct PositionAssertion_t1575;
const Il2CppTypeDefinitionMetadata PositionAssertion_t1575_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1562_0_0_0/* parent */
	, PositionAssertion_t1575_VTable/* vtableMethods */
	, PositionAssertion_t1575_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 738/* fieldStart */

};
TypeInfo PositionAssertion_t1575_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PositionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, PositionAssertion_t1575_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PositionAssertion_t1575_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PositionAssertion_t1575_0_0_0/* byval_arg */
	, &PositionAssertion_t1575_1_0_0/* this_arg */
	, &PositionAssertion_t1575_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PositionAssertion_t1575)/* instance_size */
	, sizeof (PositionAssertion_t1575)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Reference
extern TypeInfo Reference_t1576_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Reference_t1576_Reference__ctor_m7559_ParameterInfos[] = 
{
	{"ignore", 0, 134218613, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern const MethodInfo Reference__ctor_m7559_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Reference__ctor_m7559/* method */
	, &Reference_t1576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_SByte_t126/* invoker_method */
	, Reference_t1576_Reference__ctor_m7559_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern const MethodInfo Reference_get_CapturingGroup_m7560_MethodInfo = 
{
	"get_CapturingGroup"/* name */
	, (methodPointerType)&Reference_get_CapturingGroup_m7560/* method */
	, &Reference_t1576_il2cpp_TypeInfo/* declaring_type */
	, &CapturingGroup_t1566_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 902/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CapturingGroup_t1566_0_0_0;
static const ParameterInfo Reference_t1576_Reference_set_CapturingGroup_m7561_ParameterInfos[] = 
{
	{"value", 0, 134218614, 0, &CapturingGroup_t1566_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern const MethodInfo Reference_set_CapturingGroup_m7561_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&Reference_set_CapturingGroup_m7561/* method */
	, &Reference_t1576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Reference_t1576_Reference_set_CapturingGroup_m7561_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 903/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern const MethodInfo Reference_get_IgnoreCase_m7562_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&Reference_get_IgnoreCase_m7562/* method */
	, &Reference_t1576_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 904/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Reference_t1576_Reference_Compile_m7563_ParameterInfos[] = 
{
	{"cmp", 0, 134218615, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218616, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo Reference_Compile_m7563_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Reference_Compile_m7563/* method */
	, &Reference_t1576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, Reference_t1576_Reference_Compile_m7563_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 905/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo Reference_t1576_Reference_GetWidth_m7564_ParameterInfos[] = 
{
	{"min", 0, 134218617, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218618, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo Reference_GetWidth_m7564_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Reference_GetWidth_m7564/* method */
	, &Reference_t1576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, Reference_t1576_Reference_GetWidth_m7564_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 906/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern const MethodInfo Reference_IsComplex_m7565_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Reference_IsComplex_m7565/* method */
	, &Reference_t1576_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 907/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Reference_t1576_MethodInfos[] =
{
	&Reference__ctor_m7559_MethodInfo,
	&Reference_get_CapturingGroup_m7560_MethodInfo,
	&Reference_set_CapturingGroup_m7561_MethodInfo,
	&Reference_get_IgnoreCase_m7562_MethodInfo,
	&Reference_Compile_m7563_MethodInfo,
	&Reference_GetWidth_m7564_MethodInfo,
	&Reference_IsComplex_m7565_MethodInfo,
	NULL
};
extern const MethodInfo Reference_get_CapturingGroup_m7560_MethodInfo;
extern const MethodInfo Reference_set_CapturingGroup_m7561_MethodInfo;
static const PropertyInfo Reference_t1576____CapturingGroup_PropertyInfo = 
{
	&Reference_t1576_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, &Reference_get_CapturingGroup_m7560_MethodInfo/* get */
	, &Reference_set_CapturingGroup_m7561_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Reference_get_IgnoreCase_m7562_MethodInfo;
static const PropertyInfo Reference_t1576____IgnoreCase_PropertyInfo = 
{
	&Reference_t1576_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &Reference_get_IgnoreCase_m7562_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Reference_t1576_PropertyInfos[] =
{
	&Reference_t1576____CapturingGroup_PropertyInfo,
	&Reference_t1576____IgnoreCase_PropertyInfo,
	NULL
};
extern const MethodInfo Reference_Compile_m7563_MethodInfo;
extern const MethodInfo Reference_GetWidth_m7564_MethodInfo;
extern const MethodInfo Reference_IsComplex_m7565_MethodInfo;
static const Il2CppMethodReference Reference_t1576_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&Reference_Compile_m7563_MethodInfo,
	&Reference_GetWidth_m7564_MethodInfo,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&Reference_IsComplex_m7565_MethodInfo,
};
static bool Reference_t1576_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Reference_t1576_0_0_0;
extern const Il2CppType Reference_t1576_1_0_0;
struct Reference_t1576;
const Il2CppTypeDefinitionMetadata Reference_t1576_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1562_0_0_0/* parent */
	, Reference_t1576_VTable/* vtableMethods */
	, Reference_t1576_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 739/* fieldStart */

};
TypeInfo Reference_t1576_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Reference"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Reference_t1576_MethodInfos/* methods */
	, Reference_t1576_PropertyInfos/* properties */
	, NULL/* events */
	, &Reference_t1576_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Reference_t1576_0_0_0/* byval_arg */
	, &Reference_t1576_1_0_0/* this_arg */
	, &Reference_t1576_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Reference_t1576)/* instance_size */
	, sizeof (Reference_t1576)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BackslashNumber
extern TypeInfo BackslashNumber_t1577_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo BackslashNumber_t1577_BackslashNumber__ctor_m7566_ParameterInfos[] = 
{
	{"ignore", 0, 134218619, 0, &Boolean_t125_0_0_0},
	{"ecma", 1, 134218620, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern const MethodInfo BackslashNumber__ctor_m7566_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BackslashNumber__ctor_m7566/* method */
	, &BackslashNumber_t1577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_SByte_t126_SByte_t126/* invoker_method */
	, BackslashNumber_t1577_BackslashNumber__ctor_m7566_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 908/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Hashtable_t1426_0_0_0;
static const ParameterInfo BackslashNumber_t1577_BackslashNumber_ResolveReference_m7567_ParameterInfos[] = 
{
	{"num_str", 0, 134218621, 0, &String_t_0_0_0},
	{"groups", 1, 134218622, 0, &Hashtable_t1426_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern const MethodInfo BackslashNumber_ResolveReference_m7567_MethodInfo = 
{
	"ResolveReference"/* name */
	, (methodPointerType)&BackslashNumber_ResolveReference_m7567/* method */
	, &BackslashNumber_t1577_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t_Object_t/* invoker_method */
	, BackslashNumber_t1577_BackslashNumber_ResolveReference_m7567_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 909/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo BackslashNumber_t1577_BackslashNumber_Compile_m7568_ParameterInfos[] = 
{
	{"cmp", 0, 134218623, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218624, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo BackslashNumber_Compile_m7568_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BackslashNumber_Compile_m7568/* method */
	, &BackslashNumber_t1577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, BackslashNumber_t1577_BackslashNumber_Compile_m7568_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 910/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BackslashNumber_t1577_MethodInfos[] =
{
	&BackslashNumber__ctor_m7566_MethodInfo,
	&BackslashNumber_ResolveReference_m7567_MethodInfo,
	&BackslashNumber_Compile_m7568_MethodInfo,
	NULL
};
extern const MethodInfo BackslashNumber_Compile_m7568_MethodInfo;
static const Il2CppMethodReference BackslashNumber_t1577_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&BackslashNumber_Compile_m7568_MethodInfo,
	&Reference_GetWidth_m7564_MethodInfo,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&Reference_IsComplex_m7565_MethodInfo,
};
static bool BackslashNumber_t1577_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType BackslashNumber_t1577_0_0_0;
extern const Il2CppType BackslashNumber_t1577_1_0_0;
struct BackslashNumber_t1577;
const Il2CppTypeDefinitionMetadata BackslashNumber_t1577_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Reference_t1576_0_0_0/* parent */
	, BackslashNumber_t1577_VTable/* vtableMethods */
	, BackslashNumber_t1577_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 741/* fieldStart */

};
TypeInfo BackslashNumber_t1577_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BackslashNumber"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BackslashNumber_t1577_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &BackslashNumber_t1577_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BackslashNumber_t1577_0_0_0/* byval_arg */
	, &BackslashNumber_t1577_1_0_0/* this_arg */
	, &BackslashNumber_t1577_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BackslashNumber_t1577)/* instance_size */
	, sizeof (BackslashNumber_t1577)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CharacterClass
extern TypeInfo CharacterClass_t1579_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo CharacterClass_t1579_CharacterClass__ctor_m7569_ParameterInfos[] = 
{
	{"negate", 0, 134218625, 0, &Boolean_t125_0_0_0},
	{"ignore", 1, 134218626, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern const MethodInfo CharacterClass__ctor_m7569_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m7569/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_SByte_t126_SByte_t126/* invoker_method */
	, CharacterClass_t1579_CharacterClass__ctor_m7569_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 911/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1540_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo CharacterClass_t1579_CharacterClass__ctor_m7570_ParameterInfos[] = 
{
	{"cat", 0, 134218627, 0, &Category_t1540_0_0_0},
	{"negate", 1, 134218628, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern const MethodInfo CharacterClass__ctor_m7570_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m7570/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126/* invoker_method */
	, CharacterClass_t1579_CharacterClass__ctor_m7570_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 912/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern const MethodInfo CharacterClass__cctor_m7571_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&CharacterClass__cctor_m7571/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 913/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Category_t1540_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo CharacterClass_t1579_CharacterClass_AddCategory_m7572_ParameterInfos[] = 
{
	{"cat", 0, 134218629, 0, &Category_t1540_0_0_0},
	{"negate", 1, 134218630, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern const MethodInfo CharacterClass_AddCategory_m7572_MethodInfo = 
{
	"AddCategory"/* name */
	, (methodPointerType)&CharacterClass_AddCategory_m7572/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_UInt16_t415_SByte_t126/* invoker_method */
	, CharacterClass_t1579_CharacterClass_AddCategory_m7572_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 914/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo CharacterClass_t1579_CharacterClass_AddCharacter_m7573_ParameterInfos[] = 
{
	{"c", 0, 134218631, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern const MethodInfo CharacterClass_AddCharacter_m7573_MethodInfo = 
{
	"AddCharacter"/* name */
	, (methodPointerType)&CharacterClass_AddCharacter_m7573/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501/* invoker_method */
	, CharacterClass_t1579_CharacterClass_AddCharacter_m7573_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 915/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo CharacterClass_t1579_CharacterClass_AddRange_m7574_ParameterInfos[] = 
{
	{"lo", 0, 134218632, 0, &Char_t412_0_0_0},
	{"hi", 1, 134218633, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int16_t501_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern const MethodInfo CharacterClass_AddRange_m7574_MethodInfo = 
{
	"AddRange"/* name */
	, (methodPointerType)&CharacterClass_AddRange_m7574/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int16_t501_Int16_t501/* invoker_method */
	, CharacterClass_t1579_CharacterClass_AddRange_m7574_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 916/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICompiler_t1605_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo CharacterClass_t1579_CharacterClass_Compile_m7575_ParameterInfos[] = 
{
	{"cmp", 0, 134218634, 0, &ICompiler_t1605_0_0_0},
	{"reverse", 1, 134218635, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern const MethodInfo CharacterClass_Compile_m7575_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CharacterClass_Compile_m7575/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, CharacterClass_t1579_CharacterClass_Compile_m7575_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 917/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_1_0_2;
extern const Il2CppType Int32_t123_1_0_2;
static const ParameterInfo CharacterClass_t1579_CharacterClass_GetWidth_m7576_ParameterInfos[] = 
{
	{"min", 0, 134218636, 0, &Int32_t123_1_0_2},
	{"max", 1, 134218637, 0, &Int32_t123_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern const MethodInfo CharacterClass_GetWidth_m7576_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CharacterClass_GetWidth_m7576/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32U26_t502_Int32U26_t502/* invoker_method */
	, CharacterClass_t1579_CharacterClass_GetWidth_m7576_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 918/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern const MethodInfo CharacterClass_IsComplex_m7577_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CharacterClass_IsComplex_m7577/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 919/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Interval_t1555_0_0_0;
static const ParameterInfo CharacterClass_t1579_CharacterClass_GetIntervalCost_m7578_ParameterInfos[] = 
{
	{"i", 0, 134218638, 0, &Interval_t1555_0_0_0},
};
extern void* RuntimeInvoker_Double_t1170_Interval_t1555 (const MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern const MethodInfo CharacterClass_GetIntervalCost_m7578_MethodInfo = 
{
	"GetIntervalCost"/* name */
	, (methodPointerType)&CharacterClass_GetIntervalCost_m7578/* method */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* declaring_type */
	, &Double_t1170_0_0_0/* return_type */
	, RuntimeInvoker_Double_t1170_Interval_t1555/* invoker_method */
	, CharacterClass_t1579_CharacterClass_GetIntervalCost_m7578_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 920/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CharacterClass_t1579_MethodInfos[] =
{
	&CharacterClass__ctor_m7569_MethodInfo,
	&CharacterClass__ctor_m7570_MethodInfo,
	&CharacterClass__cctor_m7571_MethodInfo,
	&CharacterClass_AddCategory_m7572_MethodInfo,
	&CharacterClass_AddCharacter_m7573_MethodInfo,
	&CharacterClass_AddRange_m7574_MethodInfo,
	&CharacterClass_Compile_m7575_MethodInfo,
	&CharacterClass_GetWidth_m7576_MethodInfo,
	&CharacterClass_IsComplex_m7577_MethodInfo,
	&CharacterClass_GetIntervalCost_m7578_MethodInfo,
	NULL
};
extern const MethodInfo CharacterClass_Compile_m7575_MethodInfo;
extern const MethodInfo CharacterClass_GetWidth_m7576_MethodInfo;
extern const MethodInfo CharacterClass_IsComplex_m7577_MethodInfo;
static const Il2CppMethodReference CharacterClass_t1579_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&CharacterClass_Compile_m7575_MethodInfo,
	&CharacterClass_GetWidth_m7576_MethodInfo,
	&Expression_GetAnchorInfo_m7490_MethodInfo,
	&CharacterClass_IsComplex_m7577_MethodInfo,
};
static bool CharacterClass_t1579_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType CharacterClass_t1579_0_0_0;
extern const Il2CppType CharacterClass_t1579_1_0_0;
struct CharacterClass_t1579;
const Il2CppTypeDefinitionMetadata CharacterClass_t1579_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1562_0_0_0/* parent */
	, CharacterClass_t1579_VTable/* vtableMethods */
	, CharacterClass_t1579_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 743/* fieldStart */

};
TypeInfo CharacterClass_t1579_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CharacterClass"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CharacterClass_t1579_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CharacterClass_t1579_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CharacterClass_t1579_0_0_0/* byval_arg */
	, &CharacterClass_t1579_1_0_0/* this_arg */
	, &CharacterClass_t1579_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CharacterClass_t1579)/* instance_size */
	, sizeof (CharacterClass_t1579)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(CharacterClass_t1579_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.AnchorInfo
extern TypeInfo AnchorInfo_t1580_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern const Il2CppType Expression_t1562_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo AnchorInfo_t1580_AnchorInfo__ctor_m7579_ParameterInfos[] = 
{
	{"expr", 0, 134218639, 0, &Expression_t1562_0_0_0},
	{"width", 1, 134218640, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern const MethodInfo AnchorInfo__ctor_m7579_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m7579/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123/* invoker_method */
	, AnchorInfo_t1580_AnchorInfo__ctor_m7579_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 921/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo AnchorInfo_t1580_AnchorInfo__ctor_m7580_ParameterInfos[] = 
{
	{"expr", 0, 134218641, 0, &Expression_t1562_0_0_0},
	{"offset", 1, 134218642, 0, &Int32_t123_0_0_0},
	{"width", 2, 134218643, 0, &Int32_t123_0_0_0},
	{"str", 3, 134218644, 0, &String_t_0_0_0},
	{"ignore", 4, 134218645, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123_Int32_t123_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern const MethodInfo AnchorInfo__ctor_m7580_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m7580/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123_Int32_t123_Object_t_SByte_t126/* invoker_method */
	, AnchorInfo_t1580_AnchorInfo__ctor_m7580_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 922/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Expression_t1562_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
extern const Il2CppType Position_t1536_0_0_0;
static const ParameterInfo AnchorInfo_t1580_AnchorInfo__ctor_m7581_ParameterInfos[] = 
{
	{"expr", 0, 134218646, 0, &Expression_t1562_0_0_0},
	{"offset", 1, 134218647, 0, &Int32_t123_0_0_0},
	{"width", 2, 134218648, 0, &Int32_t123_0_0_0},
	{"pos", 3, 134218649, 0, &Position_t1536_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123_Int32_t123_UInt16_t415 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern const MethodInfo AnchorInfo__ctor_m7581_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m7581/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123_Int32_t123_UInt16_t415/* invoker_method */
	, AnchorInfo_t1580_AnchorInfo__ctor_m7581_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 923/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern const MethodInfo AnchorInfo_get_Offset_m7582_MethodInfo = 
{
	"get_Offset"/* name */
	, (methodPointerType)&AnchorInfo_get_Offset_m7582/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 924/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern const MethodInfo AnchorInfo_get_Width_m7583_MethodInfo = 
{
	"get_Width"/* name */
	, (methodPointerType)&AnchorInfo_get_Width_m7583/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 925/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern const MethodInfo AnchorInfo_get_Length_m7584_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&AnchorInfo_get_Length_m7584/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 926/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern const MethodInfo AnchorInfo_get_IsUnknownWidth_m7585_MethodInfo = 
{
	"get_IsUnknownWidth"/* name */
	, (methodPointerType)&AnchorInfo_get_IsUnknownWidth_m7585/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 927/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern const MethodInfo AnchorInfo_get_IsComplete_m7586_MethodInfo = 
{
	"get_IsComplete"/* name */
	, (methodPointerType)&AnchorInfo_get_IsComplete_m7586/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 928/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern const MethodInfo AnchorInfo_get_Substring_m7587_MethodInfo = 
{
	"get_Substring"/* name */
	, (methodPointerType)&AnchorInfo_get_Substring_m7587/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 929/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern const MethodInfo AnchorInfo_get_IgnoreCase_m7588_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&AnchorInfo_get_IgnoreCase_m7588/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 930/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Position_t1536 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern const MethodInfo AnchorInfo_get_Position_m7589_MethodInfo = 
{
	"get_Position"/* name */
	, (methodPointerType)&AnchorInfo_get_Position_m7589/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Position_t1536_0_0_0/* return_type */
	, RuntimeInvoker_Position_t1536/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 931/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern const MethodInfo AnchorInfo_get_IsSubstring_m7590_MethodInfo = 
{
	"get_IsSubstring"/* name */
	, (methodPointerType)&AnchorInfo_get_IsSubstring_m7590/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 932/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern const MethodInfo AnchorInfo_get_IsPosition_m7591_MethodInfo = 
{
	"get_IsPosition"/* name */
	, (methodPointerType)&AnchorInfo_get_IsPosition_m7591/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 933/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo AnchorInfo_t1580_AnchorInfo_GetInterval_m7592_ParameterInfos[] = 
{
	{"start", 0, 134218650, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Interval_t1555_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
extern const MethodInfo AnchorInfo_GetInterval_m7592_MethodInfo = 
{
	"GetInterval"/* name */
	, (methodPointerType)&AnchorInfo_GetInterval_m7592/* method */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1555_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1555_Int32_t123/* invoker_method */
	, AnchorInfo_t1580_AnchorInfo_GetInterval_m7592_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 934/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AnchorInfo_t1580_MethodInfos[] =
{
	&AnchorInfo__ctor_m7579_MethodInfo,
	&AnchorInfo__ctor_m7580_MethodInfo,
	&AnchorInfo__ctor_m7581_MethodInfo,
	&AnchorInfo_get_Offset_m7582_MethodInfo,
	&AnchorInfo_get_Width_m7583_MethodInfo,
	&AnchorInfo_get_Length_m7584_MethodInfo,
	&AnchorInfo_get_IsUnknownWidth_m7585_MethodInfo,
	&AnchorInfo_get_IsComplete_m7586_MethodInfo,
	&AnchorInfo_get_Substring_m7587_MethodInfo,
	&AnchorInfo_get_IgnoreCase_m7588_MethodInfo,
	&AnchorInfo_get_Position_m7589_MethodInfo,
	&AnchorInfo_get_IsSubstring_m7590_MethodInfo,
	&AnchorInfo_get_IsPosition_m7591_MethodInfo,
	&AnchorInfo_GetInterval_m7592_MethodInfo,
	NULL
};
extern const MethodInfo AnchorInfo_get_Offset_m7582_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____Offset_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "Offset"/* name */
	, &AnchorInfo_get_Offset_m7582_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_Width_m7583_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____Width_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "Width"/* name */
	, &AnchorInfo_get_Width_m7583_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_Length_m7584_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____Length_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &AnchorInfo_get_Length_m7584_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IsUnknownWidth_m7585_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____IsUnknownWidth_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "IsUnknownWidth"/* name */
	, &AnchorInfo_get_IsUnknownWidth_m7585_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IsComplete_m7586_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____IsComplete_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "IsComplete"/* name */
	, &AnchorInfo_get_IsComplete_m7586_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_Substring_m7587_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____Substring_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "Substring"/* name */
	, &AnchorInfo_get_Substring_m7587_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IgnoreCase_m7588_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____IgnoreCase_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &AnchorInfo_get_IgnoreCase_m7588_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_Position_m7589_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____Position_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "Position"/* name */
	, &AnchorInfo_get_Position_m7589_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IsSubstring_m7590_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____IsSubstring_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "IsSubstring"/* name */
	, &AnchorInfo_get_IsSubstring_m7590_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnchorInfo_get_IsPosition_m7591_MethodInfo;
static const PropertyInfo AnchorInfo_t1580____IsPosition_PropertyInfo = 
{
	&AnchorInfo_t1580_il2cpp_TypeInfo/* parent */
	, "IsPosition"/* name */
	, &AnchorInfo_get_IsPosition_m7591_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AnchorInfo_t1580_PropertyInfos[] =
{
	&AnchorInfo_t1580____Offset_PropertyInfo,
	&AnchorInfo_t1580____Width_PropertyInfo,
	&AnchorInfo_t1580____Length_PropertyInfo,
	&AnchorInfo_t1580____IsUnknownWidth_PropertyInfo,
	&AnchorInfo_t1580____IsComplete_PropertyInfo,
	&AnchorInfo_t1580____Substring_PropertyInfo,
	&AnchorInfo_t1580____IgnoreCase_PropertyInfo,
	&AnchorInfo_t1580____Position_PropertyInfo,
	&AnchorInfo_t1580____IsSubstring_PropertyInfo,
	&AnchorInfo_t1580____IsPosition_PropertyInfo,
	NULL
};
static const Il2CppMethodReference AnchorInfo_t1580_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool AnchorInfo_t1580_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType AnchorInfo_t1580_1_0_0;
struct AnchorInfo_t1580;
const Il2CppTypeDefinitionMetadata AnchorInfo_t1580_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AnchorInfo_t1580_VTable/* vtableMethods */
	, AnchorInfo_t1580_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 749/* fieldStart */

};
TypeInfo AnchorInfo_t1580_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnchorInfo"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, AnchorInfo_t1580_MethodInfos/* methods */
	, AnchorInfo_t1580_PropertyInfos/* properties */
	, NULL/* events */
	, &AnchorInfo_t1580_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AnchorInfo_t1580_0_0_0/* byval_arg */
	, &AnchorInfo_t1580_1_0_0/* this_arg */
	, &AnchorInfo_t1580_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnchorInfo_t1580)/* instance_size */
	, sizeof (AnchorInfo_t1580)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 14/* method_count */
	, 10/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// Metadata Definition System.DefaultUriParser
extern TypeInfo DefaultUriParser_t1581_il2cpp_TypeInfo;
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor()
extern const MethodInfo DefaultUriParser__ctor_m7593_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m7593/* method */
	, &DefaultUriParser_t1581_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 935/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo DefaultUriParser_t1581_DefaultUriParser__ctor_m7594_ParameterInfos[] = 
{
	{"scheme", 0, 134218651, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor(System.String)
extern const MethodInfo DefaultUriParser__ctor_m7594_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m7594/* method */
	, &DefaultUriParser_t1581_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, DefaultUriParser_t1581_DefaultUriParser__ctor_m7594_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 936/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* DefaultUriParser_t1581_MethodInfos[] =
{
	&DefaultUriParser__ctor_m7593_MethodInfo,
	&DefaultUriParser__ctor_m7594_MethodInfo,
	NULL
};
extern const MethodInfo UriParser_InitializeAndValidate_m7650_MethodInfo;
extern const MethodInfo UriParser_OnRegister_m7651_MethodInfo;
static const Il2CppMethodReference DefaultUriParser_t1581_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&UriParser_InitializeAndValidate_m7650_MethodInfo,
	&UriParser_OnRegister_m7651_MethodInfo,
};
static bool DefaultUriParser_t1581_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType DefaultUriParser_t1581_0_0_0;
extern const Il2CppType DefaultUriParser_t1581_1_0_0;
extern const Il2CppType UriParser_t1582_0_0_0;
struct DefaultUriParser_t1581;
const Il2CppTypeDefinitionMetadata DefaultUriParser_t1581_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1582_0_0_0/* parent */
	, DefaultUriParser_t1581_VTable/* vtableMethods */
	, DefaultUriParser_t1581_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo DefaultUriParser_t1581_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultUriParser"/* name */
	, "System"/* namespaze */
	, DefaultUriParser_t1581_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &DefaultUriParser_t1581_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &DefaultUriParser_t1581_0_0_0/* byval_arg */
	, &DefaultUriParser_t1581_1_0_0/* this_arg */
	, &DefaultUriParser_t1581_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultUriParser_t1581)/* instance_size */
	, sizeof (DefaultUriParser_t1581)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// Metadata Definition System.GenericUriParser
extern TypeInfo GenericUriParser_t1583_il2cpp_TypeInfo;
// System.GenericUriParser
#include "System_System_GenericUriParserMethodDeclarations.h"
static const MethodInfo* GenericUriParser_t1583_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference GenericUriParser_t1583_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&UriParser_InitializeAndValidate_m7650_MethodInfo,
	&UriParser_OnRegister_m7651_MethodInfo,
};
static bool GenericUriParser_t1583_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType GenericUriParser_t1583_0_0_0;
extern const Il2CppType GenericUriParser_t1583_1_0_0;
struct GenericUriParser_t1583;
const Il2CppTypeDefinitionMetadata GenericUriParser_t1583_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1582_0_0_0/* parent */
	, GenericUriParser_t1583_VTable/* vtableMethods */
	, GenericUriParser_t1583_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo GenericUriParser_t1583_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericUriParser"/* name */
	, "System"/* namespaze */
	, GenericUriParser_t1583_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GenericUriParser_t1583_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GenericUriParser_t1583_0_0_0/* byval_arg */
	, &GenericUriParser_t1583_1_0_0/* this_arg */
	, &GenericUriParser_t1583_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericUriParser_t1583)/* instance_size */
	, sizeof (GenericUriParser_t1583)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// Metadata Definition System.Uri/UriScheme
extern TypeInfo UriScheme_t1584_il2cpp_TypeInfo;
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo UriScheme_t1584_UriScheme__ctor_m7595_ParameterInfos[] = 
{
	{"s", 0, 134218704, 0, &String_t_0_0_0},
	{"d", 1, 134218705, 0, &String_t_0_0_0},
	{"p", 2, 134218706, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern const MethodInfo UriScheme__ctor_m7595_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriScheme__ctor_m7595/* method */
	, &UriScheme_t1584_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t_Int32_t123/* invoker_method */
	, UriScheme_t1584_UriScheme__ctor_m7595_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 987/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UriScheme_t1584_MethodInfos[] =
{
	&UriScheme__ctor_m7595_MethodInfo,
	NULL
};
static const Il2CppMethodReference UriScheme_t1584_VTable[] =
{
	&ValueType_Equals_m2349_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&ValueType_GetHashCode_m2350_MethodInfo,
	&ValueType_ToString_m2353_MethodInfo,
};
static bool UriScheme_t1584_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriScheme_t1584_0_0_0;
extern const Il2CppType UriScheme_t1584_1_0_0;
extern TypeInfo Uri_t1035_il2cpp_TypeInfo;
extern const Il2CppType Uri_t1035_0_0_0;
const Il2CppTypeDefinitionMetadata UriScheme_t1584_DefinitionMetadata = 
{
	&Uri_t1035_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t491_0_0_0/* parent */
	, UriScheme_t1584_VTable/* vtableMethods */
	, UriScheme_t1584_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 755/* fieldStart */

};
TypeInfo UriScheme_t1584_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriScheme"/* name */
	, ""/* namespaze */
	, UriScheme_t1584_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UriScheme_t1584_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriScheme_t1584_0_0_0/* byval_arg */
	, &UriScheme_t1584_1_0_0/* this_arg */
	, &UriScheme_t1584_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)UriScheme_t1584_marshal/* marshal_to_native_func */
	, (methodPointerType)UriScheme_t1584_marshal_back/* marshal_from_native_func */
	, (methodPointerType)UriScheme_t1584_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (UriScheme_t1584)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriScheme_t1584)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(UriScheme_t1584_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri
#include "System_System_Uri.h"
// Metadata Definition System.Uri
// System.Uri
#include "System_System_UriMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri__ctor_m6366_ParameterInfos[] = 
{
	{"uriString", 0, 134218652, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.String)
extern const MethodInfo Uri__ctor_m6366_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m6366/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Uri_t1035_Uri__ctor_m6366_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 937/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t1144_0_0_0;
extern const Il2CppType SerializationInfo_t1144_0_0_0;
extern const Il2CppType StreamingContext_t1145_0_0_0;
extern const Il2CppType StreamingContext_t1145_0_0_0;
static const ParameterInfo Uri_t1035_Uri__ctor_m7596_ParameterInfos[] = 
{
	{"serializationInfo", 0, 134218653, 0, &SerializationInfo_t1144_0_0_0},
	{"streamingContext", 1, 134218654, 0, &StreamingContext_t1145_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_StreamingContext_t1145 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo Uri__ctor_m7596_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m7596/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_StreamingContext_t1145/* invoker_method */
	, Uri_t1035_Uri__ctor_m7596_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 938/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Uri_t1035_Uri__ctor_m7597_ParameterInfos[] = 
{
	{"uriString", 0, 134218655, 0, &String_t_0_0_0},
	{"dontEscape", 1, 134218656, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern const MethodInfo Uri__ctor_m7597_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m7597/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_SByte_t126/* invoker_method */
	, Uri_t1035_Uri__ctor_m7597_ParameterInfos/* parameters */
	, 72/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 939/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t1035_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri__ctor_m6368_ParameterInfos[] = 
{
	{"baseUri", 0, 134218657, 0, &Uri_t1035_0_0_0},
	{"relativeUri", 1, 134218658, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern const MethodInfo Uri__ctor_m6368_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m6368/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t/* invoker_method */
	, Uri_t1035_Uri__ctor_m6368_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 940/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.cctor()
extern const MethodInfo Uri__cctor_m7598_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Uri__cctor_m7598/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 941/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t1144_0_0_0;
extern const Il2CppType StreamingContext_t1145_0_0_0;
static const ParameterInfo Uri_t1035_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7599_ParameterInfos[] = 
{
	{"info", 0, 134218659, 0, &SerializationInfo_t1144_0_0_0},
	{"context", 1, 134218660, 0, &StreamingContext_t1145_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_StreamingContext_t1145 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7599_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7599/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_StreamingContext_t1145/* invoker_method */
	, Uri_t1035_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7599_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 942/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t1035_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_Merge_m7600_ParameterInfos[] = 
{
	{"baseUri", 0, 134218661, 0, &Uri_t1035_0_0_0},
	{"relativeUri", 1, 134218662, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Merge(System.Uri,System.String)
extern const MethodInfo Uri_Merge_m7600_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Uri_Merge_m7600/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t/* invoker_method */
	, Uri_t1035_Uri_Merge_m7600_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 943/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_AbsoluteUri()
extern const MethodInfo Uri_get_AbsoluteUri_m7601_MethodInfo = 
{
	"get_AbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_AbsoluteUri_m7601/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 944/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Authority()
extern const MethodInfo Uri_get_Authority_m7602_MethodInfo = 
{
	"get_Authority"/* name */
	, (methodPointerType)&Uri_get_Authority_m7602/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 945/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Host()
extern const MethodInfo Uri_get_Host_m7603_MethodInfo = 
{
	"get_Host"/* name */
	, (methodPointerType)&Uri_get_Host_m7603/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 946/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsFile()
extern const MethodInfo Uri_get_IsFile_m7604_MethodInfo = 
{
	"get_IsFile"/* name */
	, (methodPointerType)&Uri_get_IsFile_m7604/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 947/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsLoopback()
extern const MethodInfo Uri_get_IsLoopback_m7605_MethodInfo = 
{
	"get_IsLoopback"/* name */
	, (methodPointerType)&Uri_get_IsLoopback_m7605/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 948/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsUnc()
extern const MethodInfo Uri_get_IsUnc_m7606_MethodInfo = 
{
	"get_IsUnc"/* name */
	, (methodPointerType)&Uri_get_IsUnc_m7606/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 949/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Scheme()
extern const MethodInfo Uri_get_Scheme_m7607_MethodInfo = 
{
	"get_Scheme"/* name */
	, (methodPointerType)&Uri_get_Scheme_m7607/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 950/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t125 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern const MethodInfo Uri_get_IsAbsoluteUri_m7608_MethodInfo = 
{
	"get_IsAbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_IsAbsoluteUri_m7608/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 951/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_CheckHostName_m7609_ParameterInfos[] = 
{
	{"name", 0, 134218663, 0, &String_t_0_0_0},
};
extern const Il2CppType UriHostNameType_t1587_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t1587_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern const MethodInfo Uri_CheckHostName_m7609_MethodInfo = 
{
	"CheckHostName"/* name */
	, (methodPointerType)&Uri_CheckHostName_m7609/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t1587_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t1587_Object_t/* invoker_method */
	, Uri_t1035_Uri_CheckHostName_m7609_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 952/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_IsIPv4Address_m7610_ParameterInfos[] = 
{
	{"name", 0, 134218664, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern const MethodInfo Uri_IsIPv4Address_m7610_MethodInfo = 
{
	"IsIPv4Address"/* name */
	, (methodPointerType)&Uri_IsIPv4Address_m7610/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Uri_t1035_Uri_IsIPv4Address_m7610_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 953/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_IsDomainAddress_m7611_ParameterInfos[] = 
{
	{"name", 0, 134218665, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern const MethodInfo Uri_IsDomainAddress_m7611_MethodInfo = 
{
	"IsDomainAddress"/* name */
	, (methodPointerType)&Uri_IsDomainAddress_m7611/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Uri_t1035_Uri_IsDomainAddress_m7611_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 954/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_CheckSchemeName_m7612_ParameterInfos[] = 
{
	{"schemeName", 0, 134218666, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern const MethodInfo Uri_CheckSchemeName_m7612_MethodInfo = 
{
	"CheckSchemeName"/* name */
	, (methodPointerType)&Uri_CheckSchemeName_m7612/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Uri_t1035_Uri_CheckSchemeName_m7612_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 955/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo Uri_t1035_Uri_IsAlpha_m7613_ParameterInfos[] = 
{
	{"c", 0, 134218667, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsAlpha(System.Char)
extern const MethodInfo Uri_IsAlpha_m7613_MethodInfo = 
{
	"IsAlpha"/* name */
	, (methodPointerType)&Uri_IsAlpha_m7613/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int16_t501/* invoker_method */
	, Uri_t1035_Uri_IsAlpha_m7613_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 956/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_Equals_m7614_ParameterInfos[] = 
{
	{"comparant", 0, 134218668, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::Equals(System.Object)
extern const MethodInfo Uri_Equals_m7614_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Uri_Equals_m7614/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Uri_t1035_Uri_Equals_m7614_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 957/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t1035_0_0_0;
static const ParameterInfo Uri_t1035_Uri_InternalEquals_m7615_ParameterInfos[] = 
{
	{"uri", 0, 134218669, 0, &Uri_t1035_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern const MethodInfo Uri_InternalEquals_m7615_MethodInfo = 
{
	"InternalEquals"/* name */
	, (methodPointerType)&Uri_InternalEquals_m7615/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Uri_t1035_Uri_InternalEquals_m7615_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 958/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetHashCode()
extern const MethodInfo Uri_GetHashCode_m7616_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Uri_GetHashCode_m7616/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 959/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UriPartial_t1589_0_0_0;
extern const Il2CppType UriPartial_t1589_0_0_0;
static const ParameterInfo Uri_t1035_Uri_GetLeftPart_m7617_ParameterInfos[] = 
{
	{"part", 0, 134218670, 0, &UriPartial_t1589_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern const MethodInfo Uri_GetLeftPart_m7617_MethodInfo = 
{
	"GetLeftPart"/* name */
	, (methodPointerType)&Uri_GetLeftPart_m7617/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t123/* invoker_method */
	, Uri_t1035_Uri_GetLeftPart_m7617_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 960/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo Uri_t1035_Uri_FromHex_m7618_ParameterInfos[] = 
{
	{"digit", 0, 134218671, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::FromHex(System.Char)
extern const MethodInfo Uri_FromHex_m7618_MethodInfo = 
{
	"FromHex"/* name */
	, (methodPointerType)&Uri_FromHex_m7618/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Int16_t501/* invoker_method */
	, Uri_t1035_Uri_FromHex_m7618_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 961/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo Uri_t1035_Uri_HexEscape_m7619_ParameterInfos[] = 
{
	{"character", 0, 134218672, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::HexEscape(System.Char)
extern const MethodInfo Uri_HexEscape_m7619_MethodInfo = 
{
	"HexEscape"/* name */
	, (methodPointerType)&Uri_HexEscape_m7619/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int16_t501/* invoker_method */
	, Uri_t1035_Uri_HexEscape_m7619_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 962/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Char_t412_0_0_0;
static const ParameterInfo Uri_t1035_Uri_IsHexDigit_m7620_ParameterInfos[] = 
{
	{"digit", 0, 134218673, 0, &Char_t412_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Int16_t501 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern const MethodInfo Uri_IsHexDigit_m7620_MethodInfo = 
{
	"IsHexDigit"/* name */
	, (methodPointerType)&Uri_IsHexDigit_m7620/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Int16_t501/* invoker_method */
	, Uri_t1035_Uri_IsHexDigit_m7620_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 963/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo Uri_t1035_Uri_IsHexEncoding_m7621_ParameterInfos[] = 
{
	{"pattern", 0, 134218674, 0, &String_t_0_0_0},
	{"index", 1, 134218675, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern const MethodInfo Uri_IsHexEncoding_m7621_MethodInfo = 
{
	"IsHexEncoding"/* name */
	, (methodPointerType)&Uri_IsHexEncoding_m7621/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t_Int32_t123/* invoker_method */
	, Uri_t1035_Uri_IsHexEncoding_m7621_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 964/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_1_0_0;
extern const Il2CppType String_t_1_0_0;
static const ParameterInfo Uri_t1035_Uri_AppendQueryAndFragment_m7622_ParameterInfos[] = 
{
	{"result", 0, 134218676, 0, &String_t_1_0_0},
};
extern void* RuntimeInvoker_Void_t117_StringU26_t1301 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern const MethodInfo Uri_AppendQueryAndFragment_m7622_MethodInfo = 
{
	"AppendQueryAndFragment"/* name */
	, (methodPointerType)&Uri_AppendQueryAndFragment_m7622/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_StringU26_t1301/* invoker_method */
	, Uri_t1035_Uri_AppendQueryAndFragment_m7622_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 965/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ToString()
extern const MethodInfo Uri_ToString_m7623_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Uri_ToString_m7623/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 966/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_EscapeString_m7624_ParameterInfos[] = 
{
	{"str", 0, 134218677, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::EscapeString(System.String)
extern const MethodInfo Uri_EscapeString_m7624_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m7624/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t1035_Uri_EscapeString_m7624_ParameterInfos/* parameters */
	, 73/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 967/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Uri_t1035_Uri_EscapeString_m7625_ParameterInfos[] = 
{
	{"str", 0, 134218678, 0, &String_t_0_0_0},
	{"escapeReserved", 1, 134218679, 0, &Boolean_t125_0_0_0},
	{"escapeHex", 2, 134218680, 0, &Boolean_t125_0_0_0},
	{"escapeBrackets", 3, 134218681, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t126_SByte_t126_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern const MethodInfo Uri_EscapeString_m7625_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m7625/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t126_SByte_t126_SByte_t126/* invoker_method */
	, Uri_t1035_Uri_EscapeString_m7625_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 968/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UriKind_t1588_0_0_0;
extern const Il2CppType UriKind_t1588_0_0_0;
static const ParameterInfo Uri_t1035_Uri_ParseUri_m7626_ParameterInfos[] = 
{
	{"kind", 0, 134218682, 0, &UriKind_t1588_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseUri(System.UriKind)
extern const MethodInfo Uri_ParseUri_m7626_MethodInfo = 
{
	"ParseUri"/* name */
	, (methodPointerType)&Uri_ParseUri_m7626/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, Uri_t1035_Uri_ParseUri_m7626_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 969/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_Unescape_m7627_ParameterInfos[] = 
{
	{"str", 0, 134218683, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Unescape(System.String)
extern const MethodInfo Uri_Unescape_m7627_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m7627/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t1035_Uri_Unescape_m7627_ParameterInfos/* parameters */
	, 74/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 970/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Uri_t1035_Uri_Unescape_m7628_ParameterInfos[] = 
{
	{"str", 0, 134218684, 0, &String_t_0_0_0},
	{"excludeSpecial", 1, 134218685, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern const MethodInfo Uri_Unescape_m7628_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m7628/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t126/* invoker_method */
	, Uri_t1035_Uri_Unescape_m7628_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 971/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_ParseAsWindowsUNC_m7629_ParameterInfos[] = 
{
	{"uriString", 0, 134218686, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern const MethodInfo Uri_ParseAsWindowsUNC_m7629_MethodInfo = 
{
	"ParseAsWindowsUNC"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsUNC_m7629/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Uri_t1035_Uri_ParseAsWindowsUNC_m7629_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 972/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_ParseAsWindowsAbsoluteFilePath_m7630_ParameterInfos[] = 
{
	{"uriString", 0, 134218687, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern const MethodInfo Uri_ParseAsWindowsAbsoluteFilePath_m7630_MethodInfo = 
{
	"ParseAsWindowsAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsAbsoluteFilePath_m7630/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t1035_Uri_ParseAsWindowsAbsoluteFilePath_m7630_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 973/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_ParseAsUnixAbsoluteFilePath_m7631_ParameterInfos[] = 
{
	{"uriString", 0, 134218688, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern const MethodInfo Uri_ParseAsUnixAbsoluteFilePath_m7631_MethodInfo = 
{
	"ParseAsUnixAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsUnixAbsoluteFilePath_m7631/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, Uri_t1035_Uri_ParseAsUnixAbsoluteFilePath_m7631_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 974/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UriKind_t1588_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_Parse_m7632_ParameterInfos[] = 
{
	{"kind", 0, 134218689, 0, &UriKind_t1588_0_0_0},
	{"uriString", 1, 134218690, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern const MethodInfo Uri_Parse_m7632_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&Uri_Parse_m7632/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123_Object_t/* invoker_method */
	, Uri_t1035_Uri_Parse_m7632_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 975/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UriKind_t1588_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_ParseNoExceptions_m7633_ParameterInfos[] = 
{
	{"kind", 0, 134218691, 0, &UriKind_t1588_0_0_0},
	{"uriString", 1, 134218692, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern const MethodInfo Uri_ParseNoExceptions_m7633_MethodInfo = 
{
	"ParseNoExceptions"/* name */
	, (methodPointerType)&Uri_ParseNoExceptions_m7633/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t123_Object_t/* invoker_method */
	, Uri_t1035_Uri_ParseNoExceptions_m7633_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 976/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_CompactEscaped_m7634_ParameterInfos[] = 
{
	{"scheme", 0, 134218693, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CompactEscaped(System.String)
extern const MethodInfo Uri_CompactEscaped_m7634_MethodInfo = 
{
	"CompactEscaped"/* name */
	, (methodPointerType)&Uri_CompactEscaped_m7634/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Uri_t1035_Uri_CompactEscaped_m7634_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 977/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t125_0_0_0;
static const ParameterInfo Uri_t1035_Uri_Reduce_m7635_ParameterInfos[] = 
{
	{"path", 0, 134218694, 0, &String_t_0_0_0},
	{"compact_escaped", 1, 134218695, 0, &Boolean_t125_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t126 (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern const MethodInfo Uri_Reduce_m7635_MethodInfo = 
{
	"Reduce"/* name */
	, (methodPointerType)&Uri_Reduce_m7635/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t126/* invoker_method */
	, Uri_t1035_Uri_Reduce_m7635_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 978/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_1_0_0;
extern const Il2CppType Char_t412_1_0_2;
extern const Il2CppType Char_t412_1_0_0;
static const ParameterInfo Uri_t1035_Uri_HexUnescapeMultiByte_m7636_ParameterInfos[] = 
{
	{"pattern", 0, 134218696, 0, &String_t_0_0_0},
	{"index", 1, 134218697, 0, &Int32_t123_1_0_0},
	{"surrogate", 2, 134218698, 0, &Char_t412_1_0_2},
};
extern void* RuntimeInvoker_Char_t412_Object_t_Int32U26_t502_CharU26_t1664 (const MethodInfo* method, void* obj, void** args);
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern const MethodInfo Uri_HexUnescapeMultiByte_m7636_MethodInfo = 
{
	"HexUnescapeMultiByte"/* name */
	, (methodPointerType)&Uri_HexUnescapeMultiByte_m7636/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Char_t412_0_0_0/* return_type */
	, RuntimeInvoker_Char_t412_Object_t_Int32U26_t502_CharU26_t1664/* invoker_method */
	, Uri_t1035_Uri_HexUnescapeMultiByte_m7636_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 979/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_GetSchemeDelimiter_m7637_ParameterInfos[] = 
{
	{"scheme", 0, 134218699, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern const MethodInfo Uri_GetSchemeDelimiter_m7637_MethodInfo = 
{
	"GetSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetSchemeDelimiter_m7637/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t1035_Uri_GetSchemeDelimiter_m7637_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 980/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_GetDefaultPort_m7638_ParameterInfos[] = 
{
	{"scheme", 0, 134218700, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t123_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern const MethodInfo Uri_GetDefaultPort_m7638_MethodInfo = 
{
	"GetDefaultPort"/* name */
	, (methodPointerType)&Uri_GetDefaultPort_m7638/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123_Object_t/* invoker_method */
	, Uri_t1035_Uri_GetDefaultPort_m7638_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 981/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern const MethodInfo Uri_GetOpaqueWiseSchemeDelimiter_m7639_MethodInfo = 
{
	"GetOpaqueWiseSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetOpaqueWiseSchemeDelimiter_m7639/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 982/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Uri_t1035_Uri_IsPredefinedScheme_m7640_ParameterInfos[] = 
{
	{"scheme", 0, 134218701, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern const MethodInfo Uri_IsPredefinedScheme_m7640_MethodInfo = 
{
	"IsPredefinedScheme"/* name */
	, (methodPointerType)&Uri_IsPredefinedScheme_m7640/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, Uri_t1035_Uri_IsPredefinedScheme_m7640_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 983/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UriParser System.Uri::get_Parser()
extern const MethodInfo Uri_get_Parser_m7641_MethodInfo = 
{
	"get_Parser"/* name */
	, (methodPointerType)&Uri_get_Parser_m7641/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1582_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 984/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::EnsureAbsoluteUri()
extern const MethodInfo Uri_EnsureAbsoluteUri_m7642_MethodInfo = 
{
	"EnsureAbsoluteUri"/* name */
	, (methodPointerType)&Uri_EnsureAbsoluteUri_m7642/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 985/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t1035_0_0_0;
extern const Il2CppType Uri_t1035_0_0_0;
static const ParameterInfo Uri_t1035_Uri_op_Equality_m7643_ParameterInfos[] = 
{
	{"u1", 0, 134218702, 0, &Uri_t1035_0_0_0},
	{"u2", 1, 134218703, 0, &Uri_t1035_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern const MethodInfo Uri_op_Equality_m7643_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&Uri_op_Equality_m7643/* method */
	, &Uri_t1035_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t_Object_t/* invoker_method */
	, Uri_t1035_Uri_op_Equality_m7643_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 986/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Uri_t1035_MethodInfos[] =
{
	&Uri__ctor_m6366_MethodInfo,
	&Uri__ctor_m7596_MethodInfo,
	&Uri__ctor_m7597_MethodInfo,
	&Uri__ctor_m6368_MethodInfo,
	&Uri__cctor_m7598_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7599_MethodInfo,
	&Uri_Merge_m7600_MethodInfo,
	&Uri_get_AbsoluteUri_m7601_MethodInfo,
	&Uri_get_Authority_m7602_MethodInfo,
	&Uri_get_Host_m7603_MethodInfo,
	&Uri_get_IsFile_m7604_MethodInfo,
	&Uri_get_IsLoopback_m7605_MethodInfo,
	&Uri_get_IsUnc_m7606_MethodInfo,
	&Uri_get_Scheme_m7607_MethodInfo,
	&Uri_get_IsAbsoluteUri_m7608_MethodInfo,
	&Uri_CheckHostName_m7609_MethodInfo,
	&Uri_IsIPv4Address_m7610_MethodInfo,
	&Uri_IsDomainAddress_m7611_MethodInfo,
	&Uri_CheckSchemeName_m7612_MethodInfo,
	&Uri_IsAlpha_m7613_MethodInfo,
	&Uri_Equals_m7614_MethodInfo,
	&Uri_InternalEquals_m7615_MethodInfo,
	&Uri_GetHashCode_m7616_MethodInfo,
	&Uri_GetLeftPart_m7617_MethodInfo,
	&Uri_FromHex_m7618_MethodInfo,
	&Uri_HexEscape_m7619_MethodInfo,
	&Uri_IsHexDigit_m7620_MethodInfo,
	&Uri_IsHexEncoding_m7621_MethodInfo,
	&Uri_AppendQueryAndFragment_m7622_MethodInfo,
	&Uri_ToString_m7623_MethodInfo,
	&Uri_EscapeString_m7624_MethodInfo,
	&Uri_EscapeString_m7625_MethodInfo,
	&Uri_ParseUri_m7626_MethodInfo,
	&Uri_Unescape_m7627_MethodInfo,
	&Uri_Unescape_m7628_MethodInfo,
	&Uri_ParseAsWindowsUNC_m7629_MethodInfo,
	&Uri_ParseAsWindowsAbsoluteFilePath_m7630_MethodInfo,
	&Uri_ParseAsUnixAbsoluteFilePath_m7631_MethodInfo,
	&Uri_Parse_m7632_MethodInfo,
	&Uri_ParseNoExceptions_m7633_MethodInfo,
	&Uri_CompactEscaped_m7634_MethodInfo,
	&Uri_Reduce_m7635_MethodInfo,
	&Uri_HexUnescapeMultiByte_m7636_MethodInfo,
	&Uri_GetSchemeDelimiter_m7637_MethodInfo,
	&Uri_GetDefaultPort_m7638_MethodInfo,
	&Uri_GetOpaqueWiseSchemeDelimiter_m7639_MethodInfo,
	&Uri_IsPredefinedScheme_m7640_MethodInfo,
	&Uri_get_Parser_m7641_MethodInfo,
	&Uri_EnsureAbsoluteUri_m7642_MethodInfo,
	&Uri_op_Equality_m7643_MethodInfo,
	NULL
};
extern const MethodInfo Uri_get_AbsoluteUri_m7601_MethodInfo;
static const PropertyInfo Uri_t1035____AbsoluteUri_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "AbsoluteUri"/* name */
	, &Uri_get_AbsoluteUri_m7601_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_Authority_m7602_MethodInfo;
static const PropertyInfo Uri_t1035____Authority_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "Authority"/* name */
	, &Uri_get_Authority_m7602_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_Host_m7603_MethodInfo;
static const PropertyInfo Uri_t1035____Host_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "Host"/* name */
	, &Uri_get_Host_m7603_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_IsFile_m7604_MethodInfo;
static const PropertyInfo Uri_t1035____IsFile_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "IsFile"/* name */
	, &Uri_get_IsFile_m7604_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_IsLoopback_m7605_MethodInfo;
static const PropertyInfo Uri_t1035____IsLoopback_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "IsLoopback"/* name */
	, &Uri_get_IsLoopback_m7605_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_IsUnc_m7606_MethodInfo;
static const PropertyInfo Uri_t1035____IsUnc_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "IsUnc"/* name */
	, &Uri_get_IsUnc_m7606_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_Scheme_m7607_MethodInfo;
static const PropertyInfo Uri_t1035____Scheme_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "Scheme"/* name */
	, &Uri_get_Scheme_m7607_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_IsAbsoluteUri_m7608_MethodInfo;
static const PropertyInfo Uri_t1035____IsAbsoluteUri_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "IsAbsoluteUri"/* name */
	, &Uri_get_IsAbsoluteUri_m7608_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Uri_get_Parser_m7641_MethodInfo;
static const PropertyInfo Uri_t1035____Parser_PropertyInfo = 
{
	&Uri_t1035_il2cpp_TypeInfo/* parent */
	, "Parser"/* name */
	, &Uri_get_Parser_m7641_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Uri_t1035_PropertyInfos[] =
{
	&Uri_t1035____AbsoluteUri_PropertyInfo,
	&Uri_t1035____Authority_PropertyInfo,
	&Uri_t1035____Host_PropertyInfo,
	&Uri_t1035____IsFile_PropertyInfo,
	&Uri_t1035____IsLoopback_PropertyInfo,
	&Uri_t1035____IsUnc_PropertyInfo,
	&Uri_t1035____Scheme_PropertyInfo,
	&Uri_t1035____IsAbsoluteUri_PropertyInfo,
	&Uri_t1035____Parser_PropertyInfo,
	NULL
};
static const Il2CppType* Uri_t1035_il2cpp_TypeInfo__nestedTypes[1] =
{
	&UriScheme_t1584_0_0_0,
};
extern const MethodInfo Uri_Equals_m7614_MethodInfo;
extern const MethodInfo Uri_GetHashCode_m7616_MethodInfo;
extern const MethodInfo Uri_ToString_m7623_MethodInfo;
extern const MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7599_MethodInfo;
extern const MethodInfo Uri_Unescape_m7627_MethodInfo;
static const Il2CppMethodReference Uri_t1035_VTable[] =
{
	&Uri_Equals_m7614_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Uri_GetHashCode_m7616_MethodInfo,
	&Uri_ToString_m7623_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7599_MethodInfo,
	&Uri_Unescape_m7627_MethodInfo,
};
static bool Uri_t1035_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Uri_t1035_InterfacesTypeInfos[] = 
{
	&ISerializable_t480_0_0_0,
};
static Il2CppInterfaceOffsetPair Uri_t1035_InterfacesOffsets[] = 
{
	{ &ISerializable_t480_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType Uri_t1035_1_0_0;
struct Uri_t1035;
const Il2CppTypeDefinitionMetadata Uri_t1035_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Uri_t1035_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, Uri_t1035_InterfacesTypeInfos/* implementedInterfaces */
	, Uri_t1035_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Uri_t1035_VTable/* vtableMethods */
	, Uri_t1035_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 758/* fieldStart */

};
TypeInfo Uri_t1035_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Uri"/* name */
	, "System"/* namespaze */
	, Uri_t1035_MethodInfos/* methods */
	, Uri_t1035_PropertyInfos/* properties */
	, NULL/* events */
	, &Uri_t1035_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 66/* custom_attributes_cache */
	, &Uri_t1035_0_0_0/* byval_arg */
	, &Uri_t1035_1_0_0/* this_arg */
	, &Uri_t1035_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Uri_t1035)/* instance_size */
	, sizeof (Uri_t1035)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Uri_t1035_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 50/* method_count */
	, 9/* property_count */
	, 38/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.UriFormatException
#include "System_System_UriFormatException.h"
// Metadata Definition System.UriFormatException
extern TypeInfo UriFormatException_t1586_il2cpp_TypeInfo;
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor()
extern const MethodInfo UriFormatException__ctor_m7644_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m7644/* method */
	, &UriFormatException_t1586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 988/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UriFormatException_t1586_UriFormatException__ctor_m7645_ParameterInfos[] = 
{
	{"message", 0, 134218707, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.String)
extern const MethodInfo UriFormatException__ctor_m7645_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m7645/* method */
	, &UriFormatException_t1586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, UriFormatException_t1586_UriFormatException__ctor_m7645_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 989/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t1144_0_0_0;
extern const Il2CppType StreamingContext_t1145_0_0_0;
static const ParameterInfo UriFormatException_t1586_UriFormatException__ctor_m7646_ParameterInfos[] = 
{
	{"info", 0, 134218708, 0, &SerializationInfo_t1144_0_0_0},
	{"context", 1, 134218709, 0, &StreamingContext_t1145_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_StreamingContext_t1145 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UriFormatException__ctor_m7646_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m7646/* method */
	, &UriFormatException_t1586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_StreamingContext_t1145/* invoker_method */
	, UriFormatException_t1586_UriFormatException__ctor_m7646_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 990/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SerializationInfo_t1144_0_0_0;
extern const Il2CppType StreamingContext_t1145_0_0_0;
static const ParameterInfo UriFormatException_t1586_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7647_ParameterInfos[] = 
{
	{"info", 0, 134218710, 0, &SerializationInfo_t1144_0_0_0},
	{"context", 1, 134218711, 0, &StreamingContext_t1145_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_StreamingContext_t1145 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7647_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7647/* method */
	, &UriFormatException_t1586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_StreamingContext_t1145/* invoker_method */
	, UriFormatException_t1586_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7647_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 991/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UriFormatException_t1586_MethodInfos[] =
{
	&UriFormatException__ctor_m7644_MethodInfo,
	&UriFormatException__ctor_m7645_MethodInfo,
	&UriFormatException__ctor_m7646_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7647_MethodInfo,
	NULL
};
extern const MethodInfo Exception_ToString_m6570_MethodInfo;
extern const MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7647_MethodInfo;
extern const MethodInfo Exception_get_InnerException_m6572_MethodInfo;
extern const MethodInfo Exception_get_Message_m6573_MethodInfo;
extern const MethodInfo Exception_get_Source_m6574_MethodInfo;
extern const MethodInfo Exception_get_StackTrace_m6575_MethodInfo;
extern const MethodInfo Exception_GetObjectData_m6571_MethodInfo;
extern const MethodInfo Exception_GetType_m6576_MethodInfo;
static const Il2CppMethodReference UriFormatException_t1586_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Exception_ToString_m6570_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7647_MethodInfo,
	&Exception_get_InnerException_m6572_MethodInfo,
	&Exception_get_Message_m6573_MethodInfo,
	&Exception_get_Source_m6574_MethodInfo,
	&Exception_get_StackTrace_m6575_MethodInfo,
	&Exception_GetObjectData_m6571_MethodInfo,
	&Exception_GetType_m6576_MethodInfo,
};
static bool UriFormatException_t1586_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* UriFormatException_t1586_InterfacesTypeInfos[] = 
{
	&ISerializable_t480_0_0_0,
};
extern const Il2CppType _Exception_t1240_0_0_0;
static Il2CppInterfaceOffsetPair UriFormatException_t1586_InterfacesOffsets[] = 
{
	{ &ISerializable_t480_0_0_0, 4},
	{ &_Exception_t1240_0_0_0, 5},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriFormatException_t1586_0_0_0;
extern const Il2CppType UriFormatException_t1586_1_0_0;
extern const Il2CppType FormatException_t1161_0_0_0;
struct UriFormatException_t1586;
const Il2CppTypeDefinitionMetadata UriFormatException_t1586_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, UriFormatException_t1586_InterfacesTypeInfos/* implementedInterfaces */
	, UriFormatException_t1586_InterfacesOffsets/* interfaceOffsets */
	, &FormatException_t1161_0_0_0/* parent */
	, UriFormatException_t1586_VTable/* vtableMethods */
	, UriFormatException_t1586_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UriFormatException_t1586_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriFormatException"/* name */
	, "System"/* namespaze */
	, UriFormatException_t1586_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UriFormatException_t1586_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriFormatException_t1586_0_0_0/* byval_arg */
	, &UriFormatException_t1586_1_0_0/* this_arg */
	, &UriFormatException_t1586_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriFormatException_t1586)/* instance_size */
	, sizeof (UriFormatException_t1586)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// Metadata Definition System.UriHostNameType
extern TypeInfo UriHostNameType_t1587_il2cpp_TypeInfo;
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"
static const MethodInfo* UriHostNameType_t1587_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UriHostNameType_t1587_VTable[] =
{
	&Enum_Equals_m2309_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Enum_GetHashCode_m2310_MethodInfo,
	&Enum_ToString_m2311_MethodInfo,
	&Enum_ToString_m2312_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2313_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2314_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2315_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2316_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2317_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2318_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2319_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2320_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2321_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2322_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2323_MethodInfo,
	&Enum_ToString_m2324_MethodInfo,
	&Enum_System_IConvertible_ToType_m2325_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2326_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2327_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2328_MethodInfo,
	&Enum_CompareTo_m2329_MethodInfo,
	&Enum_GetTypeCode_m2330_MethodInfo,
};
static bool UriHostNameType_t1587_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriHostNameType_t1587_InterfacesOffsets[] = 
{
	{ &IFormattable_t473_0_0_0, 4},
	{ &IConvertible_t474_0_0_0, 5},
	{ &IComparable_t475_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriHostNameType_t1587_1_0_0;
const Il2CppTypeDefinitionMetadata UriHostNameType_t1587_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriHostNameType_t1587_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t476_0_0_0/* parent */
	, UriHostNameType_t1587_VTable/* vtableMethods */
	, UriHostNameType_t1587_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 796/* fieldStart */

};
TypeInfo UriHostNameType_t1587_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriHostNameType"/* name */
	, "System"/* namespaze */
	, UriHostNameType_t1587_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t123_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriHostNameType_t1587_0_0_0/* byval_arg */
	, &UriHostNameType_t1587_1_0_0/* this_arg */
	, &UriHostNameType_t1587_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriHostNameType_t1587)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriHostNameType_t1587)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriKind
#include "System_System_UriKind.h"
// Metadata Definition System.UriKind
extern TypeInfo UriKind_t1588_il2cpp_TypeInfo;
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"
static const MethodInfo* UriKind_t1588_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UriKind_t1588_VTable[] =
{
	&Enum_Equals_m2309_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Enum_GetHashCode_m2310_MethodInfo,
	&Enum_ToString_m2311_MethodInfo,
	&Enum_ToString_m2312_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2313_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2314_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2315_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2316_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2317_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2318_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2319_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2320_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2321_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2322_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2323_MethodInfo,
	&Enum_ToString_m2324_MethodInfo,
	&Enum_System_IConvertible_ToType_m2325_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2326_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2327_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2328_MethodInfo,
	&Enum_CompareTo_m2329_MethodInfo,
	&Enum_GetTypeCode_m2330_MethodInfo,
};
static bool UriKind_t1588_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriKind_t1588_InterfacesOffsets[] = 
{
	{ &IFormattable_t473_0_0_0, 4},
	{ &IConvertible_t474_0_0_0, 5},
	{ &IComparable_t475_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriKind_t1588_1_0_0;
const Il2CppTypeDefinitionMetadata UriKind_t1588_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriKind_t1588_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t476_0_0_0/* parent */
	, UriKind_t1588_VTable/* vtableMethods */
	, UriKind_t1588_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 802/* fieldStart */

};
TypeInfo UriKind_t1588_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriKind"/* name */
	, "System"/* namespaze */
	, UriKind_t1588_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t123_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriKind_t1588_0_0_0/* byval_arg */
	, &UriKind_t1588_1_0_0/* this_arg */
	, &UriKind_t1588_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriKind_t1588)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriKind_t1588)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriParser
#include "System_System_UriParser.h"
// Metadata Definition System.UriParser
extern TypeInfo UriParser_t1582_il2cpp_TypeInfo;
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.ctor()
extern const MethodInfo UriParser__ctor_m7648_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriParser__ctor_m7648/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 992/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.cctor()
extern const MethodInfo UriParser__cctor_m7649_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&UriParser__cctor_m7649/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 993/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t1035_0_0_0;
extern const Il2CppType UriFormatException_t1586_1_0_2;
static const ParameterInfo UriParser_t1582_UriParser_InitializeAndValidate_m7650_ParameterInfos[] = 
{
	{"uri", 0, 134218712, 0, &Uri_t1035_0_0_0},
	{"parsingError", 1, 134218713, 0, &UriFormatException_t1586_1_0_2},
};
extern void* RuntimeInvoker_Void_t117_Object_t_UriFormatExceptionU26_t1665 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern const MethodInfo UriParser_InitializeAndValidate_m7650_MethodInfo = 
{
	"InitializeAndValidate"/* name */
	, (methodPointerType)&UriParser_InitializeAndValidate_m7650/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_UriFormatExceptionU26_t1665/* invoker_method */
	, UriParser_t1582_UriParser_InitializeAndValidate_m7650_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 453/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 994/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo UriParser_t1582_UriParser_OnRegister_m7651_ParameterInfos[] = 
{
	{"schemeName", 0, 134218714, 0, &String_t_0_0_0},
	{"defaultPort", 1, 134218715, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern const MethodInfo UriParser_OnRegister_m7651_MethodInfo = 
{
	"OnRegister"/* name */
	, (methodPointerType)&UriParser_OnRegister_m7651/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Int32_t123/* invoker_method */
	, UriParser_t1582_UriParser_OnRegister_m7651_ParameterInfos/* parameters */
	, 75/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 995/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UriParser_t1582_UriParser_set_SchemeName_m7652_ParameterInfos[] = 
{
	{"value", 0, 134218716, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_SchemeName(System.String)
extern const MethodInfo UriParser_set_SchemeName_m7652_MethodInfo = 
{
	"set_SchemeName"/* name */
	, (methodPointerType)&UriParser_set_SchemeName_m7652/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t/* invoker_method */
	, UriParser_t1582_UriParser_set_SchemeName_m7652_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 996/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Int32 System.UriParser::get_DefaultPort()
extern const MethodInfo UriParser_get_DefaultPort_m7653_MethodInfo = 
{
	"get_DefaultPort"/* name */
	, (methodPointerType)&UriParser_get_DefaultPort_m7653/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t123_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t123/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 997/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo UriParser_t1582_UriParser_set_DefaultPort_m7654_ParameterInfos[] = 
{
	{"value", 0, 134218717, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern const MethodInfo UriParser_set_DefaultPort_m7654_MethodInfo = 
{
	"set_DefaultPort"/* name */
	, (methodPointerType)&UriParser_set_DefaultPort_m7654/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Int32_t123/* invoker_method */
	, UriParser_t1582_UriParser_set_DefaultPort_m7654_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 998/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t117 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::CreateDefaults()
extern const MethodInfo UriParser_CreateDefaults_m7655_MethodInfo = 
{
	"CreateDefaults"/* name */
	, (methodPointerType)&UriParser_CreateDefaults_m7655/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 999/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Hashtable_t1426_0_0_0;
extern const Il2CppType UriParser_t1582_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t123_0_0_0;
static const ParameterInfo UriParser_t1582_UriParser_InternalRegister_m7656_ParameterInfos[] = 
{
	{"table", 0, 134218718, 0, &Hashtable_t1426_0_0_0},
	{"uriParser", 1, 134218719, 0, &UriParser_t1582_0_0_0},
	{"schemeName", 2, 134218720, 0, &String_t_0_0_0},
	{"defaultPort", 3, 134218721, 0, &Int32_t123_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_Object_t_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern const MethodInfo UriParser_InternalRegister_m7656_MethodInfo = 
{
	"InternalRegister"/* name */
	, (methodPointerType)&UriParser_InternalRegister_m7656/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_Object_t_Object_t_Int32_t123/* invoker_method */
	, UriParser_t1582_UriParser_InternalRegister_m7656_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1000/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UriParser_t1582_UriParser_GetParser_m7657_ParameterInfos[] = 
{
	{"schemeName", 0, 134218722, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UriParser System.UriParser::GetParser(System.String)
extern const MethodInfo UriParser_GetParser_m7657_MethodInfo = 
{
	"GetParser"/* name */
	, (methodPointerType)&UriParser_GetParser_m7657/* method */
	, &UriParser_t1582_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1582_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UriParser_t1582_UriParser_GetParser_m7657_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1001/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UriParser_t1582_MethodInfos[] =
{
	&UriParser__ctor_m7648_MethodInfo,
	&UriParser__cctor_m7649_MethodInfo,
	&UriParser_InitializeAndValidate_m7650_MethodInfo,
	&UriParser_OnRegister_m7651_MethodInfo,
	&UriParser_set_SchemeName_m7652_MethodInfo,
	&UriParser_get_DefaultPort_m7653_MethodInfo,
	&UriParser_set_DefaultPort_m7654_MethodInfo,
	&UriParser_CreateDefaults_m7655_MethodInfo,
	&UriParser_InternalRegister_m7656_MethodInfo,
	&UriParser_GetParser_m7657_MethodInfo,
	NULL
};
extern const MethodInfo UriParser_set_SchemeName_m7652_MethodInfo;
static const PropertyInfo UriParser_t1582____SchemeName_PropertyInfo = 
{
	&UriParser_t1582_il2cpp_TypeInfo/* parent */
	, "SchemeName"/* name */
	, NULL/* get */
	, &UriParser_set_SchemeName_m7652_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo UriParser_get_DefaultPort_m7653_MethodInfo;
extern const MethodInfo UriParser_set_DefaultPort_m7654_MethodInfo;
static const PropertyInfo UriParser_t1582____DefaultPort_PropertyInfo = 
{
	&UriParser_t1582_il2cpp_TypeInfo/* parent */
	, "DefaultPort"/* name */
	, &UriParser_get_DefaultPort_m7653_MethodInfo/* get */
	, &UriParser_set_DefaultPort_m7654_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* UriParser_t1582_PropertyInfos[] =
{
	&UriParser_t1582____SchemeName_PropertyInfo,
	&UriParser_t1582____DefaultPort_PropertyInfo,
	NULL
};
static const Il2CppMethodReference UriParser_t1582_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&UriParser_InitializeAndValidate_m7650_MethodInfo,
	&UriParser_OnRegister_m7651_MethodInfo,
};
static bool UriParser_t1582_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriParser_t1582_1_0_0;
struct UriParser_t1582;
const Il2CppTypeDefinitionMetadata UriParser_t1582_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UriParser_t1582_VTable/* vtableMethods */
	, UriParser_t1582_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 806/* fieldStart */

};
TypeInfo UriParser_t1582_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriParser"/* name */
	, "System"/* namespaze */
	, UriParser_t1582_MethodInfos/* methods */
	, UriParser_t1582_PropertyInfos/* properties */
	, NULL/* events */
	, &UriParser_t1582_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriParser_t1582_0_0_0/* byval_arg */
	, &UriParser_t1582_1_0_0/* this_arg */
	, &UriParser_t1582_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriParser_t1582)/* instance_size */
	, sizeof (UriParser_t1582)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(UriParser_t1582_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.UriPartial
#include "System_System_UriPartial.h"
// Metadata Definition System.UriPartial
extern TypeInfo UriPartial_t1589_il2cpp_TypeInfo;
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"
static const MethodInfo* UriPartial_t1589_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UriPartial_t1589_VTable[] =
{
	&Enum_Equals_m2309_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Enum_GetHashCode_m2310_MethodInfo,
	&Enum_ToString_m2311_MethodInfo,
	&Enum_ToString_m2312_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m2313_MethodInfo,
	&Enum_System_IConvertible_ToByte_m2314_MethodInfo,
	&Enum_System_IConvertible_ToChar_m2315_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m2316_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m2317_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m2318_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m2319_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m2320_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m2321_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m2322_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m2323_MethodInfo,
	&Enum_ToString_m2324_MethodInfo,
	&Enum_System_IConvertible_ToType_m2325_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m2326_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m2327_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m2328_MethodInfo,
	&Enum_CompareTo_m2329_MethodInfo,
	&Enum_GetTypeCode_m2330_MethodInfo,
};
static bool UriPartial_t1589_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriPartial_t1589_InterfacesOffsets[] = 
{
	{ &IFormattable_t473_0_0_0, 4},
	{ &IConvertible_t474_0_0_0, 5},
	{ &IComparable_t475_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriPartial_t1589_1_0_0;
const Il2CppTypeDefinitionMetadata UriPartial_t1589_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriPartial_t1589_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t476_0_0_0/* parent */
	, UriPartial_t1589_VTable/* vtableMethods */
	, UriPartial_t1589_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 812/* fieldStart */

};
TypeInfo UriPartial_t1589_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriPartial"/* name */
	, "System"/* namespaze */
	, UriPartial_t1589_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t123_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriPartial_t1589_0_0_0/* byval_arg */
	, &UriPartial_t1589_1_0_0/* this_arg */
	, &UriPartial_t1589_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriPartial_t1589)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriPartial_t1589)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
// Metadata Definition System.UriTypeConverter
extern TypeInfo UriTypeConverter_t1590_il2cpp_TypeInfo;
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"
static const MethodInfo* UriTypeConverter_t1590_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UriTypeConverter_t1590_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool UriTypeConverter_t1590_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType UriTypeConverter_t1590_0_0_0;
extern const Il2CppType UriTypeConverter_t1590_1_0_0;
extern const Il2CppType TypeConverter_t1441_0_0_0;
struct UriTypeConverter_t1590;
const Il2CppTypeDefinitionMetadata UriTypeConverter_t1590_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &TypeConverter_t1441_0_0_0/* parent */
	, UriTypeConverter_t1590_VTable/* vtableMethods */
	, UriTypeConverter_t1590_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo UriTypeConverter_t1590_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriTypeConverter"/* name */
	, "System"/* namespaze */
	, UriTypeConverter_t1590_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UriTypeConverter_t1590_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UriTypeConverter_t1590_0_0_0/* byval_arg */
	, &UriTypeConverter_t1590_1_0_0/* this_arg */
	, &UriTypeConverter_t1590_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriTypeConverter_t1590)/* instance_size */
	, sizeof (UriTypeConverter_t1590)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
// Metadata Definition System.Net.Security.RemoteCertificateValidationCallback
extern TypeInfo RemoteCertificateValidationCallback_t1453_il2cpp_TypeInfo;
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo RemoteCertificateValidationCallback_t1453_RemoteCertificateValidationCallback__ctor_m7658_ParameterInfos[] = 
{
	{"object", 0, 134218723, 0, &Object_t_0_0_0},
	{"method", 1, 134218724, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo RemoteCertificateValidationCallback__ctor_m7658_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback__ctor_m7658/* method */
	, &RemoteCertificateValidationCallback_t1453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_IntPtr_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1453_RemoteCertificateValidationCallback__ctor_m7658_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1002/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType X509Certificate_t1488_0_0_0;
extern const Il2CppType X509Certificate_t1488_0_0_0;
extern const Il2CppType X509Chain_t1499_0_0_0;
extern const Il2CppType X509Chain_t1499_0_0_0;
extern const Il2CppType SslPolicyErrors_t1444_0_0_0;
extern const Il2CppType SslPolicyErrors_t1444_0_0_0;
static const ParameterInfo RemoteCertificateValidationCallback_t1453_RemoteCertificateValidationCallback_Invoke_m7659_ParameterInfos[] = 
{
	{"sender", 0, 134218725, 0, &Object_t_0_0_0},
	{"certificate", 1, 134218726, 0, &X509Certificate_t1488_0_0_0},
	{"chain", 2, 134218727, 0, &X509Chain_t1499_0_0_0},
	{"sslPolicyErrors", 3, 134218728, 0, &SslPolicyErrors_t1444_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t_Object_t_Object_t_Int32_t123 (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern const MethodInfo RemoteCertificateValidationCallback_Invoke_m7659_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_Invoke_m7659/* method */
	, &RemoteCertificateValidationCallback_t1453_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t_Object_t_Object_t_Int32_t123/* invoker_method */
	, RemoteCertificateValidationCallback_t1453_RemoteCertificateValidationCallback_Invoke_m7659_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1003/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType X509Certificate_t1488_0_0_0;
extern const Il2CppType X509Chain_t1499_0_0_0;
extern const Il2CppType SslPolicyErrors_t1444_0_0_0;
extern const Il2CppType AsyncCallback_t258_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo RemoteCertificateValidationCallback_t1453_RemoteCertificateValidationCallback_BeginInvoke_m7660_ParameterInfos[] = 
{
	{"sender", 0, 134218729, 0, &Object_t_0_0_0},
	{"certificate", 1, 134218730, 0, &X509Certificate_t1488_0_0_0},
	{"chain", 2, 134218731, 0, &X509Chain_t1499_0_0_0},
	{"sslPolicyErrors", 3, 134218732, 0, &SslPolicyErrors_t1444_0_0_0},
	{"callback", 4, 134218733, 0, &AsyncCallback_t258_0_0_0},
	{"object", 5, 134218734, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t123_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern const MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m7660_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_BeginInvoke_m7660/* method */
	, &RemoteCertificateValidationCallback_t1453_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t257_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t123_Object_t_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1453_RemoteCertificateValidationCallback_BeginInvoke_m7660_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1004/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t257_0_0_0;
static const ParameterInfo RemoteCertificateValidationCallback_t1453_RemoteCertificateValidationCallback_EndInvoke_m7661_ParameterInfos[] = 
{
	{"result", 0, 134218735, 0, &IAsyncResult_t257_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t125_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo RemoteCertificateValidationCallback_EndInvoke_m7661_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_EndInvoke_m7661/* method */
	, &RemoteCertificateValidationCallback_t1453_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t125_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t125_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1453_RemoteCertificateValidationCallback_EndInvoke_m7661_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1005/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* RemoteCertificateValidationCallback_t1453_MethodInfos[] =
{
	&RemoteCertificateValidationCallback__ctor_m7658_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m7659_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m7660_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m7661_MethodInfo,
	NULL
};
extern const MethodInfo RemoteCertificateValidationCallback_Invoke_m7659_MethodInfo;
extern const MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m7660_MethodInfo;
extern const MethodInfo RemoteCertificateValidationCallback_EndInvoke_m7661_MethodInfo;
static const Il2CppMethodReference RemoteCertificateValidationCallback_t1453_VTable[] =
{
	&MulticastDelegate_Equals_m2336_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&MulticastDelegate_GetHashCode_m2337_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&MulticastDelegate_GetObjectData_m2338_MethodInfo,
	&Delegate_Clone_m2339_MethodInfo,
	&MulticastDelegate_GetObjectData_m2338_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2340_MethodInfo,
	&MulticastDelegate_CombineImpl_m2341_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2342_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m7659_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m7660_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m7661_MethodInfo,
};
static bool RemoteCertificateValidationCallback_t1453_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair RemoteCertificateValidationCallback_t1453_InterfacesOffsets[] = 
{
	{ &ICloneable_t479_0_0_0, 4},
	{ &ISerializable_t480_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType RemoteCertificateValidationCallback_t1453_0_0_0;
extern const Il2CppType RemoteCertificateValidationCallback_t1453_1_0_0;
struct RemoteCertificateValidationCallback_t1453;
const Il2CppTypeDefinitionMetadata RemoteCertificateValidationCallback_t1453_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RemoteCertificateValidationCallback_t1453_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t260_0_0_0/* parent */
	, RemoteCertificateValidationCallback_t1453_VTable/* vtableMethods */
	, RemoteCertificateValidationCallback_t1453_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo RemoteCertificateValidationCallback_t1453_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RemoteCertificateValidationCallback"/* name */
	, "System.Net.Security"/* namespaze */
	, RemoteCertificateValidationCallback_t1453_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RemoteCertificateValidationCallback_t1453_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RemoteCertificateValidationCallback_t1453_0_0_0/* byval_arg */
	, &RemoteCertificateValidationCallback_t1453_1_0_0/* this_arg */
	, &RemoteCertificateValidationCallback_t1453_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t1453/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RemoteCertificateValidationCallback_t1453)/* instance_size */
	, sizeof (RemoteCertificateValidationCallback_t1453)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
// Metadata Definition System.Text.RegularExpressions.MatchEvaluator
extern TypeInfo MatchEvaluator_t1591_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo MatchEvaluator_t1591_MatchEvaluator__ctor_m7662_ParameterInfos[] = 
{
	{"object", 0, 134218736, 0, &Object_t_0_0_0},
	{"method", 1, 134218737, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t117_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern const MethodInfo MatchEvaluator__ctor_m7662_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MatchEvaluator__ctor_m7662/* method */
	, &MatchEvaluator_t1591_il2cpp_TypeInfo/* declaring_type */
	, &Void_t117_0_0_0/* return_type */
	, RuntimeInvoker_Void_t117_Object_t_IntPtr_t/* invoker_method */
	, MatchEvaluator_t1591_MatchEvaluator__ctor_m7662_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1006/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Match_t1517_0_0_0;
static const ParameterInfo MatchEvaluator_t1591_MatchEvaluator_Invoke_m7663_ParameterInfos[] = 
{
	{"match", 0, 134218738, 0, &Match_t1517_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern const MethodInfo MatchEvaluator_Invoke_m7663_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&MatchEvaluator_Invoke_m7663/* method */
	, &MatchEvaluator_t1591_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1591_MatchEvaluator_Invoke_m7663_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1007/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Match_t1517_0_0_0;
extern const Il2CppType AsyncCallback_t258_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MatchEvaluator_t1591_MatchEvaluator_BeginInvoke_m7664_ParameterInfos[] = 
{
	{"match", 0, 134218739, 0, &Match_t1517_0_0_0},
	{"callback", 1, 134218740, 0, &AsyncCallback_t258_0_0_0},
	{"object", 2, 134218741, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern const MethodInfo MatchEvaluator_BeginInvoke_m7664_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_BeginInvoke_m7664/* method */
	, &MatchEvaluator_t1591_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t257_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1591_MatchEvaluator_BeginInvoke_m7664_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1008/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t257_0_0_0;
static const ParameterInfo MatchEvaluator_t1591_MatchEvaluator_EndInvoke_m7665_ParameterInfos[] = 
{
	{"result", 0, 134218742, 0, &IAsyncResult_t257_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern const MethodInfo MatchEvaluator_EndInvoke_m7665_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_EndInvoke_m7665/* method */
	, &MatchEvaluator_t1591_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1591_MatchEvaluator_EndInvoke_m7665_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1009/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MatchEvaluator_t1591_MethodInfos[] =
{
	&MatchEvaluator__ctor_m7662_MethodInfo,
	&MatchEvaluator_Invoke_m7663_MethodInfo,
	&MatchEvaluator_BeginInvoke_m7664_MethodInfo,
	&MatchEvaluator_EndInvoke_m7665_MethodInfo,
	NULL
};
extern const MethodInfo MatchEvaluator_Invoke_m7663_MethodInfo;
extern const MethodInfo MatchEvaluator_BeginInvoke_m7664_MethodInfo;
extern const MethodInfo MatchEvaluator_EndInvoke_m7665_MethodInfo;
static const Il2CppMethodReference MatchEvaluator_t1591_VTable[] =
{
	&MulticastDelegate_Equals_m2336_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&MulticastDelegate_GetHashCode_m2337_MethodInfo,
	&Object_ToString_m325_MethodInfo,
	&MulticastDelegate_GetObjectData_m2338_MethodInfo,
	&Delegate_Clone_m2339_MethodInfo,
	&MulticastDelegate_GetObjectData_m2338_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2340_MethodInfo,
	&MulticastDelegate_CombineImpl_m2341_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2342_MethodInfo,
	&MatchEvaluator_Invoke_m7663_MethodInfo,
	&MatchEvaluator_BeginInvoke_m7664_MethodInfo,
	&MatchEvaluator_EndInvoke_m7665_MethodInfo,
};
static bool MatchEvaluator_t1591_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair MatchEvaluator_t1591_InterfacesOffsets[] = 
{
	{ &ICloneable_t479_0_0_0, 4},
	{ &ISerializable_t480_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType MatchEvaluator_t1591_0_0_0;
extern const Il2CppType MatchEvaluator_t1591_1_0_0;
struct MatchEvaluator_t1591;
const Il2CppTypeDefinitionMetadata MatchEvaluator_t1591_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MatchEvaluator_t1591_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t260_0_0_0/* parent */
	, MatchEvaluator_t1591_VTable/* vtableMethods */
	, MatchEvaluator_t1591_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo MatchEvaluator_t1591_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MatchEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MatchEvaluator_t1591_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &MatchEvaluator_t1591_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MatchEvaluator_t1591_0_0_0/* byval_arg */
	, &MatchEvaluator_t1591_1_0_0/* this_arg */
	, &MatchEvaluator_t1591_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_MatchEvaluator_t1591/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MatchEvaluator_t1591)/* instance_size */
	, sizeof (MatchEvaluator_t1591)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
extern TypeInfo U24ArrayTypeU24128_t1592_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU24128_t1592_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU24128_t1592_VTable[] =
{
	&ValueType_Equals_m2349_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&ValueType_GetHashCode_m2350_MethodInfo,
	&ValueType_ToString_m2353_MethodInfo,
};
static bool U24ArrayTypeU24128_t1592_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType U24ArrayTypeU24128_t1592_0_0_0;
extern const Il2CppType U24ArrayTypeU24128_t1592_1_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1594_il2cpp_TypeInfo;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t1594_0_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU24128_t1592_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1594_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t491_0_0_0/* parent */
	, U24ArrayTypeU24128_t1592_VTable/* vtableMethods */
	, U24ArrayTypeU24128_t1592_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU24128_t1592_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU24128_t1592_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU24128_t1592_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU24128_t1592_0_0_0/* byval_arg */
	, &U24ArrayTypeU24128_t1592_1_0_0/* this_arg */
	, &U24ArrayTypeU24128_t1592_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU24128_t1592_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t1592_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU24128_t1592_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU24128_t1592)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU24128_t1592)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU24128_t1592_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
extern TypeInfo U24ArrayTypeU2412_t1593_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412MethodDeclarations.h"
static const MethodInfo* U24ArrayTypeU2412_t1593_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference U24ArrayTypeU2412_t1593_VTable[] =
{
	&ValueType_Equals_m2349_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&ValueType_GetHashCode_m2350_MethodInfo,
	&ValueType_ToString_m2353_MethodInfo,
};
static bool U24ArrayTypeU2412_t1593_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType U24ArrayTypeU2412_t1593_0_0_0;
extern const Il2CppType U24ArrayTypeU2412_t1593_1_0_0;
const Il2CppTypeDefinitionMetadata U24ArrayTypeU2412_t1593_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1594_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t491_0_0_0/* parent */
	, U24ArrayTypeU2412_t1593_VTable/* vtableMethods */
	, U24ArrayTypeU2412_t1593_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo U24ArrayTypeU2412_t1593_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, U24ArrayTypeU2412_t1593_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U24ArrayTypeU2412_t1593_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &U24ArrayTypeU2412_t1593_0_0_0/* byval_arg */
	, &U24ArrayTypeU2412_t1593_1_0_0/* this_arg */
	, &U24ArrayTypeU2412_t1593_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)U24ArrayTypeU2412_t1593_marshal/* marshal_to_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t1593_marshal_back/* marshal_from_native_func */
	, (methodPointerType)U24ArrayTypeU2412_t1593_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (U24ArrayTypeU2412_t1593)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (U24ArrayTypeU2412_t1593)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(U24ArrayTypeU2412_t1593_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
// Metadata Definition <PrivateImplementationDetails>
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
static const MethodInfo* U3CPrivateImplementationDetailsU3E_t1594_MethodInfos[] =
{
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t1594_il2cpp_TypeInfo__nestedTypes[2] =
{
	&U24ArrayTypeU24128_t1592_0_0_0,
	&U24ArrayTypeU2412_t1593_0_0_0,
};
static const Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t1594_VTable[] =
{
	&Object_Equals_m323_MethodInfo,
	&Object_Finalize_m250_MethodInfo,
	&Object_GetHashCode_m324_MethodInfo,
	&Object_ToString_m325_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t1594_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern const Il2CppType U3CPrivateImplementationDetailsU3E_t1594_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t1594;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t1594_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t1594_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t1594_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t1594_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 817/* fieldStart */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t1594_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t1594_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t1594_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 76/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t1594_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t1594_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t1594_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1594)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1594)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t1594_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
