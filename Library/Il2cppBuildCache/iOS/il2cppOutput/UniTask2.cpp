#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.IProgress`1<System.Single>
struct IProgress_1_tE82D96A0C5152A8696D32ABF6E2ABE3A891118F7;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4;
// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise
struct EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB;
// Cysharp.Threading.Tasks.UniTask/DelayFramePromise
struct DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F;
// Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise
struct DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880;
// Cysharp.Threading.Tasks.UniTask/DelayPromise
struct DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902;
// Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise
struct DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2;
// Cysharp.Threading.Tasks.UniTask/NextFramePromise
struct NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B;
// Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise
struct WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC;
// Cysharp.Threading.Tasks.UniTask/WaitUntilPromise
struct WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D;
// Cysharp.Threading.Tasks.UniTask/WaitWhilePromise
struct WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7;
// Cysharp.Threading.Tasks.UniTask/WhenAllPromise
struct WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D;
// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise
struct WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4;
// Cysharp.Threading.Tasks.UniTask/YieldPromise
struct YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B;
// Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource
struct AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2;
// Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator
struct ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource
struct AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource
struct AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource
struct AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource
struct AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource
struct AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource
struct ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource
struct UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB;
// Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22
struct U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4;
// Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21
struct U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484;
// Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c
struct U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE;
// Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c
struct U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A;
// Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c
struct U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80;
// Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c
struct U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49;
// Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c
struct U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5;
// Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c
struct U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270;
// Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c
struct U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3;
// Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c
struct U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3;
// Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c
struct U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019;
// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c
struct U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E;
// Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c
struct U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c
struct U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c
struct U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c
struct U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c
struct U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c
struct U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c
struct U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c
struct U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046;

IL2CPP_EXTERN_C RuntimeClass* AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t9DBF8570AC748696C52D015E46344646DFA4B230_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8_mED35FD47FBCA89C6E0C3EDD4548E5845348B8509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23_m41013169E2B50CD5D61E9BD4091C978F5E548182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_m2A1E103465C85F6F6D48B30ADB3EFF20D95406B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_m2E4DD7F6844745C57426C0CF56F089BF616C3556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_m6855EA4990B3EC46E0E3378173D29E0DDD7622A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_m7B53AE6AD6BE65C7946FBBF44C5531C2BE425E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_m8FC6C0E5E03E682A1F8DE7DCCAB21F1D836C6CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_m966D674C1BAFF20F94E62D15838061CA843F0089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mA384FEC937BE12568C3188D02C14C88868D3F49B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mA518FABFB8639343A780CC6A84DD23A5BA78E197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mA5497BBA83557354373A37538967DF9BB173122C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mB5B0581589A45DC8386EB841CA65832F20DAA83D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mCE1F33A0D2CE4BDD2E3255D338171734A2BBFDE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mD43E0D7F802F560B0D0D40970D3D1045F033D286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mD69833FB45B5E49D011E2DA4191BFC5FDD6A24F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mE4545A71758A3B1A6981A5442B32FAA1410C64AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mE4C14FD29A3F1193AD746ADF6FB00F78922D7E14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskPool_1_get_Size_mE58E504580EA1E7D7CAFFB61B5C599703DE60532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnwrapWaitAsyncOperationU3Ed__22_System_Collections_IEnumerator_Reset_m87403686ABEAAF97F1E4AE560EE69DB0C52682E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUnwrapWaitForSecondsU3Ed__21_System_Collections_IEnumerator_Reset_mF7E17E480624D82549D9F56EE999CB57DD6BB6BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_mE374258A08F85AE4E9A17AEDFBA9CE8AB9B3876B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m4DE1B10A7D12410051B7C974121328D40A1FF8C5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD  : public RuntimeObject
{
public:

public:
};

struct AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___InvokeContinuationDelegate_0;

public:
	inline static int32_t get_offset_of_InvokeContinuationDelegate_0() { return static_cast<int32_t>(offsetof(AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_StaticFields, ___InvokeContinuationDelegate_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_InvokeContinuationDelegate_0() const { return ___InvokeContinuationDelegate_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_InvokeContinuationDelegate_0() { return &___InvokeContinuationDelegate_0; }
	inline void set_InvokeContinuationDelegate_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___InvokeContinuationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvokeContinuationDelegate_0), (void*)value);
	}
};


// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22
struct U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4  : public RuntimeObject
{
public:
	// System.Int32 Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AsyncOperation Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::asyncOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperation_2() { return static_cast<int32_t>(offsetof(U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4, ___asyncOperation_2)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_asyncOperation_2() const { return ___asyncOperation_2; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_asyncOperation_2() { return &___asyncOperation_2; }
	inline void set_asyncOperation_2(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___asyncOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncOperation_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21
struct U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484  : public RuntimeObject
{
public:
	// System.Int32 Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WaitForSeconds Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::waitForSeconds
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___waitForSeconds_2;
	// System.Single Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::<second>5__2
	float ___U3CsecondU3E5__2_3;
	// System.Single Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::<elapsed>5__3
	float ___U3CelapsedU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitForSeconds_2() { return static_cast<int32_t>(offsetof(U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484, ___waitForSeconds_2)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_waitForSeconds_2() const { return ___waitForSeconds_2; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_waitForSeconds_2() { return &___waitForSeconds_2; }
	inline void set_waitForSeconds_2(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___waitForSeconds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForSeconds_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484, ___U3CsecondU3E5__2_3)); }
	inline float get_U3CsecondU3E5__2_3() const { return ___U3CsecondU3E5__2_3; }
	inline float* get_address_of_U3CsecondU3E5__2_3() { return &___U3CsecondU3E5__2_3; }
	inline void set_U3CsecondU3E5__2_3(float value)
	{
		___U3CsecondU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484, ___U3CelapsedU3E5__3_4)); }
	inline float get_U3CelapsedU3E5__3_4() const { return ___U3CelapsedU3E5__3_4; }
	inline float* get_address_of_U3CelapsedU3E5__3_4() { return &___U3CelapsedU3E5__3_4; }
	inline void set_U3CelapsedU3E5__3_4(float value)
	{
		___U3CelapsedU3E5__3_4 = value;
	}
};


// Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c
struct U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c::<>9
	U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c
struct U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c::<>9
	U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c
struct U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c::<>9
	U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c
struct U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c::<>9
	U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c
struct U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c::<>9
	U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c
struct U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c::<>9
	U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c
struct U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c::<>9
	U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c
struct U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c::<>9
	U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c
struct U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c::<>9
	U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 * ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c::<>9__3_0
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c
struct U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c::<>9
	U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E * ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c::<>9__2_0
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c
struct U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c::<>9
	U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c
struct U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c::<>9
	U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c
struct U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c::<>9
	U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c
struct U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c::<>9
	U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c
struct U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c::<>9
	U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c
struct U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c::<>9
	U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c
struct U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c::<>9
	U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c
struct U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c::<>9
	U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<System.Object>
struct TaskPool_1_tA15F1EE20733E08D91DFCB2C879C7FD513D8224C 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	RuntimeObject * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_tA15F1EE20733E08D91DFCB2C879C7FD513D8224C, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_tA15F1EE20733E08D91DFCB2C879C7FD513D8224C, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_tA15F1EE20733E08D91DFCB2C879C7FD513D8224C, ___root_2)); }
	inline RuntimeObject * get_root_2() const { return ___root_2; }
	inline RuntimeObject ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(RuntimeObject * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise>
struct TaskPool_1_tAAA576A7F87B00AFCF1A73A0D74A5EB4EC660624 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_tAAA576A7F87B00AFCF1A73A0D74A5EB4EC660624, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_tAAA576A7F87B00AFCF1A73A0D74A5EB4EC660624, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_tAAA576A7F87B00AFCF1A73A0D74A5EB4EC660624, ___root_2)); }
	inline EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB * get_root_2() const { return ___root_2; }
	inline EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayFramePromise>
struct TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68, ___root_2)); }
	inline DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F * get_root_2() const { return ___root_2; }
	inline DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise>
struct TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880 * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548, ___root_2)); }
	inline DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880 * get_root_2() const { return ___root_2; }
	inline DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayPromise>
struct TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902 * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9, ___root_2)); }
	inline DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902 * get_root_2() const { return ___root_2; }
	inline DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise>
struct TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2 * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8, ___root_2)); }
	inline DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2 * get_root_2() const { return ___root_2; }
	inline DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/NextFramePromise>
struct TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B, ___root_2)); }
	inline NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B * get_root_2() const { return ___root_2; }
	inline NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise>
struct TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1, ___root_2)); }
	inline WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC * get_root_2() const { return ___root_2; }
	inline WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitUntilPromise>
struct TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68, ___root_2)); }
	inline WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D * get_root_2() const { return ___root_2; }
	inline WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitWhilePromise>
struct TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7 * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505, ___root_2)); }
	inline WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7 * get_root_2() const { return ___root_2; }
	inline WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/YieldPromise>
struct TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687, ___root_2)); }
	inline YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B * get_root_2() const { return ___root_2; }
	inline YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource>
struct TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471 * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C, ___root_2)); }
	inline AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471 * get_root_2() const { return ___root_2; }
	inline AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource>
struct TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11 * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1, ___root_2)); }
	inline AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11 * get_root_2() const { return ___root_2; }
	inline AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource>
struct TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4 * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05, ___root_2)); }
	inline AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4 * get_root_2() const { return ___root_2; }
	inline AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource>
struct TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F, ___root_2)); }
	inline AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF * get_root_2() const { return ___root_2; }
	inline AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource>
struct TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33 * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781, ___root_2)); }
	inline AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33 * get_root_2() const { return ___root_2; }
	inline AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource>
struct TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44, ___root_2)); }
	inline ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C * get_root_2() const { return ___root_2; }
	inline ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource>
struct TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::gate
	int32_t ___gate_0;
	// System.Int32 Cysharp.Threading.Tasks.TaskPool`1::size
	int32_t ___size_1;
	// T Cysharp.Threading.Tasks.TaskPool`1::root
	UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB * ___root_2;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977, ___gate_0)); }
	inline int32_t get_gate_0() const { return ___gate_0; }
	inline int32_t* get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(int32_t value)
	{
		___gate_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977, ___root_2)); }
	inline UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB * get_root_2() const { return ___root_2; }
	inline UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_2), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Object[]>
struct UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0, ___result_0)); }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* get_result_0() const { return ___result_0; }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.AssetBundle>
struct UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A, ___result_0)); }
	inline AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * get_result_0() const { return ___result_0; }
	inline AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Int32>
struct UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	int32_t ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38, ___result_0)); }
	inline int32_t get_result_0() const { return ___result_0; }
	inline int32_t* get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(int32_t value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Object>
struct UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	RuntimeObject * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A, ___result_0)); }
	inline RuntimeObject * get_result_0() const { return ___result_0; }
	inline RuntimeObject ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(RuntimeObject * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Object>
struct UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6, ___result_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_result_0() const { return ___result_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Networking.UnityWebRequest>
struct UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342, ___result_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_result_0() const { return ___result_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C 
{
public:
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;

public:
	inline static int32_t get_offset_of_runner_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C, ___runner_0)); }
	inline RuntimeObject* get_runner_0() const { return ___runner_0; }
	inline RuntimeObject** get_address_of_runner_0() { return &___runner_0; }
	inline void set_runner_0(RuntimeObject* value)
	{
		___runner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runner_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.AsyncUnit
struct AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210__padding[1];
	};

public:
};

struct AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_StaticFields
{
public:
	// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.AsyncUnit::Default
	AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_StaticFields, ___Default_0)); }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  get_Default_0() const { return ___Default_0; }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  value)
	{
		___Default_0 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Cysharp.Threading.Tasks.UniTask
struct UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_2;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_3;

public:
	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F, ___source_2)); }
	inline RuntimeObject* get_source_2() const { return ___source_2; }
	inline RuntimeObject** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(RuntimeObject* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_2), (void*)value);
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F, ___token_3)); }
	inline int16_t get_token_3() const { return ___token_3; }
	inline int16_t* get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(int16_t value)
	{
		___token_3 = value;
	}
};

struct UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_StaticFields
{
public:
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___CanceledUniTask_0;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___CompletedTask_1;

public:
	inline static int32_t get_offset_of_CanceledUniTask_0() { return static_cast<int32_t>(offsetof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_StaticFields, ___CanceledUniTask_0)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_CanceledUniTask_0() const { return ___CanceledUniTask_0; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_CanceledUniTask_0() { return &___CanceledUniTask_0; }
	inline void set_CanceledUniTask_0(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___CanceledUniTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___CanceledUniTask_0))->___source_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_CompletedTask_1() { return static_cast<int32_t>(offsetof(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_StaticFields, ___CompletedTask_1)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_CompletedTask_1() const { return ___CompletedTask_1; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_CompletedTask_1() { return &___CompletedTask_1; }
	inline void set_CompletedTask_1(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___CompletedTask_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___CompletedTask_1))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Internal.ValueStopwatch
struct ValueStopwatch_tE425EC628AC9CB8666C82753EDD54BD7DF2FAA4E 
{
public:
	// System.Int64 Cysharp.Threading.Tasks.Internal.ValueStopwatch::startTimestamp
	int64_t ___startTimestamp_1;

public:
	inline static int32_t get_offset_of_startTimestamp_1() { return static_cast<int32_t>(offsetof(ValueStopwatch_tE425EC628AC9CB8666C82753EDD54BD7DF2FAA4E, ___startTimestamp_1)); }
	inline int64_t get_startTimestamp_1() const { return ___startTimestamp_1; }
	inline int64_t* get_address_of_startTimestamp_1() { return &___startTimestamp_1; }
	inline void set_startTimestamp_1(int64_t value)
	{
		___startTimestamp_1 = value;
	}
};

struct ValueStopwatch_tE425EC628AC9CB8666C82753EDD54BD7DF2FAA4E_StaticFields
{
public:
	// System.Double Cysharp.Threading.Tasks.Internal.ValueStopwatch::TimestampToTicks
	double ___TimestampToTicks_0;

public:
	inline static int32_t get_offset_of_TimestampToTicks_0() { return static_cast<int32_t>(offsetof(ValueStopwatch_tE425EC628AC9CB8666C82753EDD54BD7DF2FAA4E_StaticFields, ___TimestampToTicks_0)); }
	inline double get_TimestampToTicks_0() const { return ___TimestampToTicks_0; }
	inline double* get_address_of_TimestampToTicks_0() { return &___TimestampToTicks_0; }
	inline void set_TimestampToTicks_0(double value)
	{
		___TimestampToTicks_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit>
struct UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___result_0)); }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  get_result_0() const { return ___result_0; }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// UnityEngine.Rendering.AsyncGPUReadbackRequest
struct AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA 
{
public:
	// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Cysharp.Threading.Tasks.PlayerLoopTiming
struct PlayerLoopTiming_tB34EB7F009734F327EAB60670DA7DC0A69619BB2 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.PlayerLoopTiming::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerLoopTiming_tB34EB7F009734F327EAB60670DA7DC0A69619BB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cysharp.Threading.Tasks.UniTaskStatus
struct UniTaskStatus_t3D56DC8D2C47DC83E395CBC04D14FE3DA0A86B13 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.UniTaskStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniTaskStatus_t3D56DC8D2C47DC83E395CBC04D14FE3DA0A86B13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise
struct EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::nextNode
	EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB * ___nextNode_1;
	// System.Collections.IEnumerator Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::innerEnumerator
	RuntimeObject* ___innerEnumerator_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::initialFrame
	int32_t ___initialFrame_4;
	// System.Boolean Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::loopRunning
	bool ___loopRunning_5;
	// System.Boolean Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::calledGetResult
	bool ___calledGetResult_6;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Object> Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::core
	UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  ___core_7;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB, ___nextNode_1)); }
	inline EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB * get_nextNode_1() const { return ___nextNode_1; }
	inline EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_innerEnumerator_2() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB, ___innerEnumerator_2)); }
	inline RuntimeObject* get_innerEnumerator_2() const { return ___innerEnumerator_2; }
	inline RuntimeObject** get_address_of_innerEnumerator_2() { return &___innerEnumerator_2; }
	inline void set_innerEnumerator_2(RuntimeObject* value)
	{
		___innerEnumerator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___innerEnumerator_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_initialFrame_4() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB, ___initialFrame_4)); }
	inline int32_t get_initialFrame_4() const { return ___initialFrame_4; }
	inline int32_t* get_address_of_initialFrame_4() { return &___initialFrame_4; }
	inline void set_initialFrame_4(int32_t value)
	{
		___initialFrame_4 = value;
	}

	inline static int32_t get_offset_of_loopRunning_5() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB, ___loopRunning_5)); }
	inline bool get_loopRunning_5() const { return ___loopRunning_5; }
	inline bool* get_address_of_loopRunning_5() { return &___loopRunning_5; }
	inline void set_loopRunning_5(bool value)
	{
		___loopRunning_5 = value;
	}

	inline static int32_t get_offset_of_calledGetResult_6() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB, ___calledGetResult_6)); }
	inline bool get_calledGetResult_6() const { return ___calledGetResult_6; }
	inline bool* get_address_of_calledGetResult_6() { return &___calledGetResult_6; }
	inline void set_calledGetResult_6(bool value)
	{
		___calledGetResult_6 = value;
	}

	inline static int32_t get_offset_of_core_7() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB, ___core_7)); }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  get_core_7() const { return ___core_7; }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A * get_address_of_core_7() { return &___core_7; }
	inline void set_core_7(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  value)
	{
		___core_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise> Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::pool
	TaskPool_1_tAAA576A7F87B00AFCF1A73A0D74A5EB4EC660624  ___pool_0;
	// System.Reflection.FieldInfo Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise::waitForSeconds_Seconds
	FieldInfo_t * ___waitForSeconds_Seconds_8;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB_StaticFields, ___pool_0)); }
	inline TaskPool_1_tAAA576A7F87B00AFCF1A73A0D74A5EB4EC660624  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_tAAA576A7F87B00AFCF1A73A0D74A5EB4EC660624 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_tAAA576A7F87B00AFCF1A73A0D74A5EB4EC660624  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_waitForSeconds_Seconds_8() { return static_cast<int32_t>(offsetof(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB_StaticFields, ___waitForSeconds_Seconds_8)); }
	inline FieldInfo_t * get_waitForSeconds_Seconds_8() const { return ___waitForSeconds_Seconds_8; }
	inline FieldInfo_t ** get_address_of_waitForSeconds_Seconds_8() { return &___waitForSeconds_Seconds_8; }
	inline void set_waitForSeconds_Seconds_8(FieldInfo_t * value)
	{
		___waitForSeconds_Seconds_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForSeconds_Seconds_8), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 
{
public:
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0, ___task_0)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_task_0() const { return ___task_0; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___source_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_marshaled_pinvoke
{
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_marshaled_com
{
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_0;
};

// Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise
struct DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise::nextNode
	DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880 * ___nextNode_1;
	// System.Single Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise::delayFrameTimeSpan
	float ___delayFrameTimeSpan_2;
	// System.Single Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise::elapsed
	float ___elapsed_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise::initialFrame
	int32_t ___initialFrame_4;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Object> Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise::core
	UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  ___core_6;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880, ___nextNode_1)); }
	inline DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880 * get_nextNode_1() const { return ___nextNode_1; }
	inline DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880 ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880 * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_delayFrameTimeSpan_2() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880, ___delayFrameTimeSpan_2)); }
	inline float get_delayFrameTimeSpan_2() const { return ___delayFrameTimeSpan_2; }
	inline float* get_address_of_delayFrameTimeSpan_2() { return &___delayFrameTimeSpan_2; }
	inline void set_delayFrameTimeSpan_2(float value)
	{
		___delayFrameTimeSpan_2 = value;
	}

	inline static int32_t get_offset_of_elapsed_3() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880, ___elapsed_3)); }
	inline float get_elapsed_3() const { return ___elapsed_3; }
	inline float* get_address_of_elapsed_3() { return &___elapsed_3; }
	inline void set_elapsed_3(float value)
	{
		___elapsed_3 = value;
	}

	inline static int32_t get_offset_of_initialFrame_4() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880, ___initialFrame_4)); }
	inline int32_t get_initialFrame_4() const { return ___initialFrame_4; }
	inline int32_t* get_address_of_initialFrame_4() { return &___initialFrame_4; }
	inline void set_initialFrame_4(int32_t value)
	{
		___initialFrame_4 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_5() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880, ___cancellationToken_5)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_5() const { return ___cancellationToken_5; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_5() { return &___cancellationToken_5; }
	inline void set_cancellationToken_5(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise> Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise::pool
	TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880_StaticFields, ___pool_0)); }
	inline TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTask/DelayPromise
struct DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/DelayPromise Cysharp.Threading.Tasks.UniTask/DelayPromise::nextNode
	DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902 * ___nextNode_1;
	// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayPromise::initialFrame
	int32_t ___initialFrame_2;
	// System.Single Cysharp.Threading.Tasks.UniTask/DelayPromise::delayTimeSpan
	float ___delayTimeSpan_3;
	// System.Single Cysharp.Threading.Tasks.UniTask/DelayPromise::elapsed
	float ___elapsed_4;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/DelayPromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Object> Cysharp.Threading.Tasks.UniTask/DelayPromise::core
	UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  ___core_6;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902, ___nextNode_1)); }
	inline DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902 * get_nextNode_1() const { return ___nextNode_1; }
	inline DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902 ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902 * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_initialFrame_2() { return static_cast<int32_t>(offsetof(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902, ___initialFrame_2)); }
	inline int32_t get_initialFrame_2() const { return ___initialFrame_2; }
	inline int32_t* get_address_of_initialFrame_2() { return &___initialFrame_2; }
	inline void set_initialFrame_2(int32_t value)
	{
		___initialFrame_2 = value;
	}

	inline static int32_t get_offset_of_delayTimeSpan_3() { return static_cast<int32_t>(offsetof(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902, ___delayTimeSpan_3)); }
	inline float get_delayTimeSpan_3() const { return ___delayTimeSpan_3; }
	inline float* get_address_of_delayTimeSpan_3() { return &___delayTimeSpan_3; }
	inline void set_delayTimeSpan_3(float value)
	{
		___delayTimeSpan_3 = value;
	}

	inline static int32_t get_offset_of_elapsed_4() { return static_cast<int32_t>(offsetof(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902, ___elapsed_4)); }
	inline float get_elapsed_4() const { return ___elapsed_4; }
	inline float* get_address_of_elapsed_4() { return &___elapsed_4; }
	inline void set_elapsed_4(float value)
	{
		___elapsed_4 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_5() { return static_cast<int32_t>(offsetof(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902, ___cancellationToken_5)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_5() const { return ___cancellationToken_5; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_5() { return &___cancellationToken_5; }
	inline void set_cancellationToken_5(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayPromise> Cysharp.Threading.Tasks.UniTask/DelayPromise::pool
	TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902_StaticFields, ___pool_0)); }
	inline TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise
struct WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise::nextNode
	WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC * ___nextNode_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Object> Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise::core
	UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  ___core_3;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC, ___nextNode_1)); }
	inline WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC * get_nextNode_1() const { return ___nextNode_1; }
	inline WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_3() { return static_cast<int32_t>(offsetof(WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC, ___core_3)); }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  get_core_3() const { return ___core_3; }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A * get_address_of_core_3() { return &___core_3; }
	inline void set_core_3(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  value)
	{
		___core_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise> Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise::pool
	TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC_StaticFields, ___pool_0)); }
	inline TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTask/WaitUntilPromise
struct WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/WaitUntilPromise Cysharp.Threading.Tasks.UniTask/WaitUntilPromise::nextNode
	WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D * ___nextNode_1;
	// System.Func`1<System.Boolean> Cysharp.Threading.Tasks.UniTask/WaitUntilPromise::predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/WaitUntilPromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Object> Cysharp.Threading.Tasks.UniTask/WaitUntilPromise::core
	UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  ___core_4;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D, ___nextNode_1)); }
	inline WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D * get_nextNode_1() const { return ___nextNode_1; }
	inline WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_2() { return static_cast<int32_t>(offsetof(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D, ___predicate_2)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_predicate_2() const { return ___predicate_2; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_predicate_2() { return &___predicate_2; }
	inline void set_predicate_2(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___predicate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_4() { return static_cast<int32_t>(offsetof(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D, ___core_4)); }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  get_core_4() const { return ___core_4; }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A * get_address_of_core_4() { return &___core_4; }
	inline void set_core_4(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  value)
	{
		___core_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitUntilPromise> Cysharp.Threading.Tasks.UniTask/WaitUntilPromise::pool
	TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D_StaticFields, ___pool_0)); }
	inline TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTask/WaitWhilePromise
struct WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/WaitWhilePromise Cysharp.Threading.Tasks.UniTask/WaitWhilePromise::nextNode
	WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7 * ___nextNode_1;
	// System.Func`1<System.Boolean> Cysharp.Threading.Tasks.UniTask/WaitWhilePromise::predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/WaitWhilePromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Object> Cysharp.Threading.Tasks.UniTask/WaitWhilePromise::core
	UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  ___core_4;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7, ___nextNode_1)); }
	inline WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7 * get_nextNode_1() const { return ___nextNode_1; }
	inline WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7 ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7 * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_2() { return static_cast<int32_t>(offsetof(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7, ___predicate_2)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_predicate_2() const { return ___predicate_2; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_predicate_2() { return &___predicate_2; }
	inline void set_predicate_2(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___predicate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_4() { return static_cast<int32_t>(offsetof(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7, ___core_4)); }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  get_core_4() const { return ___core_4; }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A * get_address_of_core_4() { return &___core_4; }
	inline void set_core_4(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  value)
	{
		___core_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitWhilePromise> Cysharp.Threading.Tasks.UniTask/WaitWhilePromise::pool
	TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7_StaticFields, ___pool_0)); }
	inline TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise
struct WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4  : public RuntimeObject
{
public:
	// System.Int32 Cysharp.Threading.Tasks.UniTask/WhenAnyPromise::completedCount
	int32_t ___completedCount_0;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Int32> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise::core
	UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38  ___core_1;

public:
	inline static int32_t get_offset_of_completedCount_0() { return static_cast<int32_t>(offsetof(WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4, ___completedCount_0)); }
	inline int32_t get_completedCount_0() const { return ___completedCount_0; }
	inline int32_t* get_address_of_completedCount_0() { return &___completedCount_0; }
	inline void set_completedCount_0(int32_t value)
	{
		___completedCount_0 = value;
	}

	inline static int32_t get_offset_of_core_1() { return static_cast<int32_t>(offsetof(WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4, ___core_1)); }
	inline UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38  get_core_1() const { return ___core_1; }
	inline UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38 * get_address_of_core_1() { return &___core_1; }
	inline void set_core_1(UniTaskCompletionSourceCore_1_tBAD1B76C00AFC47F8154DCE29F4A4E1A6B63BA38  value)
	{
		___core_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_1))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_1))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_1))->___continuationState_6), (void*)NULL);
		#endif
	}
};


// Cysharp.Threading.Tasks.UniTask/YieldPromise
struct YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/YieldPromise Cysharp.Threading.Tasks.UniTask/YieldPromise::nextNode
	YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B * ___nextNode_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/YieldPromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Object> Cysharp.Threading.Tasks.UniTask/YieldPromise::core
	UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  ___core_3;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B, ___nextNode_1)); }
	inline YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B * get_nextNode_1() const { return ___nextNode_1; }
	inline YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_3() { return static_cast<int32_t>(offsetof(YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B, ___core_3)); }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  get_core_3() const { return ___core_3; }
	inline UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A * get_address_of_core_3() { return &___core_3; }
	inline void set_core_3(UniTaskCompletionSourceCore_1_t14F6AC2CA30133F4698089E87073F3FEFB4B237A  value)
	{
		___core_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/YieldPromise> Cysharp.Threading.Tasks.UniTask/YieldPromise::pool
	TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B_StaticFields, ___pool_0)); }
	inline TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator
struct ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045  : public RuntimeObject
{
public:
	// System.Boolean Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator::completed
	bool ___completed_0;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator::task
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_1;
	// System.Action`1<System.Exception> Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator::exceptionHandler
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___exceptionHandler_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator::isStarted
	bool ___isStarted_3;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator::exception
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___exception_4;

public:
	inline static int32_t get_offset_of_completed_0() { return static_cast<int32_t>(offsetof(ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045, ___completed_0)); }
	inline bool get_completed_0() const { return ___completed_0; }
	inline bool* get_address_of_completed_0() { return &___completed_0; }
	inline void set_completed_0(bool value)
	{
		___completed_0 = value;
	}

	inline static int32_t get_offset_of_task_1() { return static_cast<int32_t>(offsetof(ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045, ___task_1)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_task_1() const { return ___task_1; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_task_1() { return &___task_1; }
	inline void set_task_1(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___task_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_1))->___source_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_exceptionHandler_2() { return static_cast<int32_t>(offsetof(ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045, ___exceptionHandler_2)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_exceptionHandler_2() const { return ___exceptionHandler_2; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_exceptionHandler_2() { return &___exceptionHandler_2; }
	inline void set_exceptionHandler_2(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___exceptionHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_isStarted_3() { return static_cast<int32_t>(offsetof(ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045, ___isStarted_3)); }
	inline bool get_isStarted_3() const { return ___isStarted_3; }
	inline bool* get_address_of_isStarted_3() { return &___isStarted_3; }
	inline void set_isStarted_3(bool value)
	{
		___isStarted_3 = value;
	}

	inline static int32_t get_offset_of_exception_4() { return static_cast<int32_t>(offsetof(ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045, ___exception_4)); }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * get_exception_4() const { return ___exception_4; }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 ** get_address_of_exception_4() { return &___exception_4; }
	inline void set_exception_4(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * value)
	{
		___exception_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_4), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource
struct AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource::nextNode
	AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471 * ___nextNode_1;
	// UnityEngine.AssetBundleCreateRequest Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource::asyncOperation
	AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * ___asyncOperation_2;
	// System.IProgress`1<System.Single> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource::progress
	RuntimeObject* ___progress_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.AssetBundle> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource::core
	UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A  ___core_5;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471, ___nextNode_1)); }
	inline AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471 * get_nextNode_1() const { return ___nextNode_1; }
	inline AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471 ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471 * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperation_2() { return static_cast<int32_t>(offsetof(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471, ___asyncOperation_2)); }
	inline AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * get_asyncOperation_2() const { return ___asyncOperation_2; }
	inline AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A ** get_address_of_asyncOperation_2() { return &___asyncOperation_2; }
	inline void set_asyncOperation_2(AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * value)
	{
		___asyncOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_5() { return static_cast<int32_t>(offsetof(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471, ___core_5)); }
	inline UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A  get_core_5() const { return ___core_5; }
	inline UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A * get_address_of_core_5() { return &___core_5; }
	inline void set_core_5(UniTaskCompletionSourceCore_1_t66E8F467FD61C2A9ACE62FF194D7A8A7865E303A  value)
	{
		___core_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource::pool
	TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471_StaticFields, ___pool_0)); }
	inline TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource
struct AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource::nextNode
	AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11 * ___nextNode_1;
	// UnityEngine.AssetBundleRequest Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource::asyncOperation
	AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * ___asyncOperation_2;
	// System.IProgress`1<System.Single> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource::progress
	RuntimeObject* ___progress_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Object[]> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource::core
	UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0  ___core_5;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11, ___nextNode_1)); }
	inline AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11 * get_nextNode_1() const { return ___nextNode_1; }
	inline AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11 ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11 * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperation_2() { return static_cast<int32_t>(offsetof(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11, ___asyncOperation_2)); }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * get_asyncOperation_2() const { return ___asyncOperation_2; }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A ** get_address_of_asyncOperation_2() { return &___asyncOperation_2; }
	inline void set_asyncOperation_2(AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * value)
	{
		___asyncOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_5() { return static_cast<int32_t>(offsetof(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11, ___core_5)); }
	inline UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0  get_core_5() const { return ___core_5; }
	inline UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0 * get_address_of_core_5() { return &___core_5; }
	inline void set_core_5(UniTaskCompletionSourceCore_1_t402A53B2F4173A0287A023F6B1957BB516B0E3A0  value)
	{
		___core_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource::pool
	TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11_StaticFields, ___pool_0)); }
	inline TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource
struct AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource::nextNode
	AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4 * ___nextNode_1;
	// UnityEngine.AssetBundleRequest Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource::asyncOperation
	AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * ___asyncOperation_2;
	// System.IProgress`1<System.Single> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource::progress
	RuntimeObject* ___progress_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Object> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource::core
	UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6  ___core_5;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4, ___nextNode_1)); }
	inline AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4 * get_nextNode_1() const { return ___nextNode_1; }
	inline AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4 ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4 * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperation_2() { return static_cast<int32_t>(offsetof(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4, ___asyncOperation_2)); }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * get_asyncOperation_2() const { return ___asyncOperation_2; }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A ** get_address_of_asyncOperation_2() { return &___asyncOperation_2; }
	inline void set_asyncOperation_2(AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * value)
	{
		___asyncOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_5() { return static_cast<int32_t>(offsetof(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4, ___core_5)); }
	inline UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6  get_core_5() const { return ___core_5; }
	inline UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6 * get_address_of_core_5() { return &___core_5; }
	inline void set_core_5(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6  value)
	{
		___core_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource> Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource::pool
	TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4_StaticFields, ___pool_0)); }
	inline TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource
struct ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource::nextNode
	ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C * ___nextNode_1;
	// UnityEngine.ResourceRequest Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource::asyncOperation
	ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * ___asyncOperation_2;
	// System.IProgress`1<System.Single> Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource::progress
	RuntimeObject* ___progress_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Object> Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource::core
	UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6  ___core_5;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C, ___nextNode_1)); }
	inline ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C * get_nextNode_1() const { return ___nextNode_1; }
	inline ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperation_2() { return static_cast<int32_t>(offsetof(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C, ___asyncOperation_2)); }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * get_asyncOperation_2() const { return ___asyncOperation_2; }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD ** get_address_of_asyncOperation_2() { return &___asyncOperation_2; }
	inline void set_asyncOperation_2(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * value)
	{
		___asyncOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_5() { return static_cast<int32_t>(offsetof(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C, ___core_5)); }
	inline UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6  get_core_5() const { return ___core_5; }
	inline UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6 * get_address_of_core_5() { return &___core_5; }
	inline void set_core_5(UniTaskCompletionSourceCore_1_t56D8A94E8E4C76B2D77F23B7737DE9133943F5C6  value)
	{
		___core_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource> Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource::pool
	TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C_StaticFields, ___pool_0)); }
	inline TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource
struct UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource::nextNode
	UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB * ___nextNode_1;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource::asyncOperation
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * ___asyncOperation_2;
	// System.IProgress`1<System.Single> Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource::progress
	RuntimeObject* ___progress_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Networking.UnityWebRequest> Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource::core
	UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342  ___core_5;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB, ___nextNode_1)); }
	inline UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB * get_nextNode_1() const { return ___nextNode_1; }
	inline UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperation_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB, ___asyncOperation_2)); }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * get_asyncOperation_2() const { return ___asyncOperation_2; }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 ** get_address_of_asyncOperation_2() { return &___asyncOperation_2; }
	inline void set_asyncOperation_2(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * value)
	{
		___asyncOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_5() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB, ___core_5)); }
	inline UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342  get_core_5() const { return ___core_5; }
	inline UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342 * get_address_of_core_5() { return &___core_5; }
	inline void set_core_5(UniTaskCompletionSourceCore_1_tB2611BE6A5B506F868219CE060131769ACC15342  value)
	{
		___core_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource> Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource::pool
	TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB_StaticFields, ___pool_0)); }
	inline TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAllPromise,Cysharp.Threading.Tasks.UniTask/Awaiter>
struct StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815  : public RuntimeObject
{
public:
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item1
	WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D * ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item2
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815, ___Item1_0)); }
	inline WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D * get_Item1_0() const { return ___Item1_0; }
	inline WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815, ___Item2_1)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_Item2_1() const { return ___Item2_1; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Item2_1))->___task_0))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.Internal.StateTuple`3<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise,Cysharp.Threading.Tasks.UniTask/Awaiter,System.Int32>
struct StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E  : public RuntimeObject
{
public:
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`3::Item1
	WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4 * ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`3::Item2
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___Item2_1;
	// T3 Cysharp.Threading.Tasks.Internal.StateTuple`3::Item3
	int32_t ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E, ___Item1_0)); }
	inline WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4 * get_Item1_0() const { return ___Item1_0; }
	inline WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E, ___Item2_1)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_Item2_1() const { return ___Item2_1; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Item2_1))->___task_0))->___source_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E, ___Item3_2)); }
	inline int32_t get_Item3_2() const { return ___Item3_2; }
	inline int32_t* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(int32_t value)
	{
		___Item3_2 = value;
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A, ___result_0)); }
	inline AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  get_result_0() const { return ___result_0; }
	inline AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Cysharp.Threading.Tasks.UniTask/DelayFramePromise
struct DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/DelayFramePromise Cysharp.Threading.Tasks.UniTask/DelayFramePromise::nextNode
	DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F * ___nextNode_1;
	// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayFramePromise::initialFrame
	int32_t ___initialFrame_2;
	// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayFramePromise::delayFrameCount
	int32_t ___delayFrameCount_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/DelayFramePromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayFramePromise::currentFrameCount
	int32_t ___currentFrameCount_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.UniTask/DelayFramePromise::core
	UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  ___core_6;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F, ___nextNode_1)); }
	inline DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F * get_nextNode_1() const { return ___nextNode_1; }
	inline DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_initialFrame_2() { return static_cast<int32_t>(offsetof(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F, ___initialFrame_2)); }
	inline int32_t get_initialFrame_2() const { return ___initialFrame_2; }
	inline int32_t* get_address_of_initialFrame_2() { return &___initialFrame_2; }
	inline void set_initialFrame_2(int32_t value)
	{
		___initialFrame_2 = value;
	}

	inline static int32_t get_offset_of_delayFrameCount_3() { return static_cast<int32_t>(offsetof(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F, ___delayFrameCount_3)); }
	inline int32_t get_delayFrameCount_3() const { return ___delayFrameCount_3; }
	inline int32_t* get_address_of_delayFrameCount_3() { return &___delayFrameCount_3; }
	inline void set_delayFrameCount_3(int32_t value)
	{
		___delayFrameCount_3 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_currentFrameCount_5() { return static_cast<int32_t>(offsetof(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F, ___currentFrameCount_5)); }
	inline int32_t get_currentFrameCount_5() const { return ___currentFrameCount_5; }
	inline int32_t* get_address_of_currentFrameCount_5() { return &___currentFrameCount_5; }
	inline void set_currentFrameCount_5(int32_t value)
	{
		___currentFrameCount_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayFramePromise> Cysharp.Threading.Tasks.UniTask/DelayFramePromise::pool
	TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F_StaticFields, ___pool_0)); }
	inline TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise
struct DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise::nextNode
	DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2 * ___nextNode_1;
	// System.Int64 Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise::delayTimeSpanTicks
	int64_t ___delayTimeSpanTicks_2;
	// Cysharp.Threading.Tasks.Internal.ValueStopwatch Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise::stopwatch
	ValueStopwatch_tE425EC628AC9CB8666C82753EDD54BD7DF2FAA4E  ___stopwatch_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise::core
	UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  ___core_5;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2, ___nextNode_1)); }
	inline DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2 * get_nextNode_1() const { return ___nextNode_1; }
	inline DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2 ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2 * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_delayTimeSpanTicks_2() { return static_cast<int32_t>(offsetof(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2, ___delayTimeSpanTicks_2)); }
	inline int64_t get_delayTimeSpanTicks_2() const { return ___delayTimeSpanTicks_2; }
	inline int64_t* get_address_of_delayTimeSpanTicks_2() { return &___delayTimeSpanTicks_2; }
	inline void set_delayTimeSpanTicks_2(int64_t value)
	{
		___delayTimeSpanTicks_2 = value;
	}

	inline static int32_t get_offset_of_stopwatch_3() { return static_cast<int32_t>(offsetof(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2, ___stopwatch_3)); }
	inline ValueStopwatch_tE425EC628AC9CB8666C82753EDD54BD7DF2FAA4E  get_stopwatch_3() const { return ___stopwatch_3; }
	inline ValueStopwatch_tE425EC628AC9CB8666C82753EDD54BD7DF2FAA4E * get_address_of_stopwatch_3() { return &___stopwatch_3; }
	inline void set_stopwatch_3(ValueStopwatch_tE425EC628AC9CB8666C82753EDD54BD7DF2FAA4E  value)
	{
		___stopwatch_3 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_5() { return static_cast<int32_t>(offsetof(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2, ___core_5)); }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  get_core_5() const { return ___core_5; }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * get_address_of_core_5() { return &___core_5; }
	inline void set_core_5(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  value)
	{
		___core_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise> Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise::pool
	TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2_StaticFields, ___pool_0)); }
	inline TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTask/NextFramePromise
struct NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UniTask/NextFramePromise Cysharp.Threading.Tasks.UniTask/NextFramePromise::nextNode
	NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B * ___nextNode_1;
	// System.Int32 Cysharp.Threading.Tasks.UniTask/NextFramePromise::frameCount
	int32_t ___frameCount_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTask/NextFramePromise::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.UniTask/NextFramePromise::core
	UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  ___core_4;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B, ___nextNode_1)); }
	inline NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B * get_nextNode_1() const { return ___nextNode_1; }
	inline NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_frameCount_2() { return static_cast<int32_t>(offsetof(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B, ___frameCount_2)); }
	inline int32_t get_frameCount_2() const { return ___frameCount_2; }
	inline int32_t* get_address_of_frameCount_2() { return &___frameCount_2; }
	inline void set_frameCount_2(int32_t value)
	{
		___frameCount_2 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_4() { return static_cast<int32_t>(offsetof(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B, ___core_4)); }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  get_core_4() const { return ___core_4; }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * get_address_of_core_4() { return &___core_4; }
	inline void set_core_4(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  value)
	{
		___core_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/NextFramePromise> Cysharp.Threading.Tasks.UniTask/NextFramePromise::pool
	TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B_StaticFields, ___pool_0)); }
	inline TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTask/WhenAllPromise
struct WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D  : public RuntimeObject
{
public:
	// System.Int32 Cysharp.Threading.Tasks.UniTask/WhenAllPromise::completeCount
	int32_t ___completeCount_0;
	// System.Int32 Cysharp.Threading.Tasks.UniTask/WhenAllPromise::tasksLength
	int32_t ___tasksLength_1;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.UniTask/WhenAllPromise::core
	UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  ___core_2;

public:
	inline static int32_t get_offset_of_completeCount_0() { return static_cast<int32_t>(offsetof(WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D, ___completeCount_0)); }
	inline int32_t get_completeCount_0() const { return ___completeCount_0; }
	inline int32_t* get_address_of_completeCount_0() { return &___completeCount_0; }
	inline void set_completeCount_0(int32_t value)
	{
		___completeCount_0 = value;
	}

	inline static int32_t get_offset_of_tasksLength_1() { return static_cast<int32_t>(offsetof(WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D, ___tasksLength_1)); }
	inline int32_t get_tasksLength_1() const { return ___tasksLength_1; }
	inline int32_t* get_address_of_tasksLength_1() { return &___tasksLength_1; }
	inline void set_tasksLength_1(int32_t value)
	{
		___tasksLength_1 = value;
	}

	inline static int32_t get_offset_of_core_2() { return static_cast<int32_t>(offsetof(WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D, ___core_2)); }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  get_core_2() const { return ___core_2; }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * get_address_of_core_2() { return &___core_2; }
	inline void set_core_2(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  value)
	{
		___core_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_2))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_2))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_2))->___continuationState_6), (void*)NULL);
		#endif
	}
};


// Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource
struct AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_1;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource::tokenRegistration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___tokenRegistration_2;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource::core
	UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  ___core_3;

public:
	inline static int32_t get_offset_of_cancellationToken_1() { return static_cast<int32_t>(offsetof(AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2, ___cancellationToken_1)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_1() const { return ___cancellationToken_1; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_1() { return &___cancellationToken_1; }
	inline void set_cancellationToken_1(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_1))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tokenRegistration_2() { return static_cast<int32_t>(offsetof(AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2, ___tokenRegistration_2)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_tokenRegistration_2() const { return ___tokenRegistration_2; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_tokenRegistration_2() { return &___tokenRegistration_2; }
	inline void set_tokenRegistration_2(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___tokenRegistration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tokenRegistration_2))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___tokenRegistration_2))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_core_3() { return static_cast<int32_t>(offsetof(AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2, ___core_3)); }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  get_core_3() const { return ___core_3; }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * get_address_of_core_3() { return &___core_3; }
	inline void set_core_3(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  value)
	{
		___core_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_3))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource::cancellationCallbackDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallbackDelegate_0;

public:
	inline static int32_t get_offset_of_cancellationCallbackDelegate_0() { return static_cast<int32_t>(offsetof(AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2_StaticFields, ___cancellationCallbackDelegate_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallbackDelegate_0() const { return ___cancellationCallbackDelegate_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallbackDelegate_0() { return &___cancellationCallbackDelegate_0; }
	inline void set_cancellationCallbackDelegate_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallbackDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallbackDelegate_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource
struct AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource::nextNode
	AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33 * ___nextNode_1;
	// UnityEngine.AsyncOperation Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource::asyncOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation_2;
	// System.IProgress`1<System.Single> Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource::progress
	RuntimeObject* ___progress_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource::core
	UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  ___core_5;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33, ___nextNode_1)); }
	inline AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33 * get_nextNode_1() const { return ___nextNode_1; }
	inline AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33 ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33 * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperation_2() { return static_cast<int32_t>(offsetof(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33, ___asyncOperation_2)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_asyncOperation_2() const { return ___asyncOperation_2; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_asyncOperation_2() { return &___asyncOperation_2; }
	inline void set_asyncOperation_2(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___asyncOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_5() { return static_cast<int32_t>(offsetof(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33, ___core_5)); }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  get_core_5() const { return ___core_5; }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * get_address_of_core_5() { return &___core_5; }
	inline void set_core_5(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  value)
	{
		___core_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_5))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource> Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource::pool
	TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33_StaticFields, ___pool_0)); }
	inline TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781 * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5
struct U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::task
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_2;
	// Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::<>4__this
	AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 * ___U3CU3E4__this_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::<>u__1
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_task_2() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8, ___task_2)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_task_2() const { return ___task_2; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_task_2() { return &___task_2; }
	inline void set_task_2(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_2))->___source_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8, ___U3CU3E4__this_3)); }
	inline AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8, ___U3CU3Eu__1_4)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_4))->___task_0))->___source_2), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6
struct U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::task
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  ___task_2;
	// Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::<>4__this
	ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * ___U3CU3E4__this_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::<>u__1
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_task_2() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23, ___task_2)); }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  get_task_2() const { return ___task_2; }
	inline UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * get_address_of_task_2() { return &___task_2; }
	inline void set_task_2(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  value)
	{
		___task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_2))->___source_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23, ___U3CU3E4__this_3)); }
	inline ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23, ___U3CU3Eu__1_4)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_4))->___task_0))->___source_2), (void*)NULL);
	}
};


// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource
struct AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource::nextNode
	AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF * ___nextNode_1;
	// UnityEngine.Rendering.AsyncGPUReadbackRequest Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource::asyncOperation
	AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  ___asyncOperation_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Rendering.AsyncGPUReadbackRequest> Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource::core
	UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A  ___core_4;

public:
	inline static int32_t get_offset_of_nextNode_1() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF, ___nextNode_1)); }
	inline AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF * get_nextNode_1() const { return ___nextNode_1; }
	inline AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF ** get_address_of_nextNode_1() { return &___nextNode_1; }
	inline void set_nextNode_1(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF * value)
	{
		___nextNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_asyncOperation_2() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF, ___asyncOperation_2)); }
	inline AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  get_asyncOperation_2() const { return ___asyncOperation_2; }
	inline AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA * get_address_of_asyncOperation_2() { return &___asyncOperation_2; }
	inline void set_asyncOperation_2(AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  value)
	{
		___asyncOperation_2 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_core_4() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF, ___core_4)); }
	inline UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A  get_core_4() const { return ___core_4; }
	inline UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A * get_address_of_core_4() { return &___core_4; }
	inline void set_core_4(UniTaskCompletionSourceCore_1_t8EF69338499132134D94EEE48344C24AEC9D489A  value)
	{
		___core_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_4))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF_StaticFields
{
public:
	// Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource> Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource::pool
	TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F  ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF_StaticFields, ___pool_0)); }
	inline TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F  get_pool_0() const { return ___pool_0; }
	inline TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F * get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F  value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pool_0))->___root_2), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<System.Object>::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline (TaskPool_1_tA15F1EE20733E08D91DFCB2C879C7FD513D8224C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8_mED35FD47FBCA89C6E0C3EDD4548E5845348B8509_gshared_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m4DE1B10A7D12410051B7C974121328D40A1FF8C5_gshared (UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * __this, AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  ___result0, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_mE374258A08F85AE4E9A17AEDFBA9CE8AB9B3876B_gshared (UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * __this, Exception_t * ___error0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23_m41013169E2B50CD5D61E9BD4091C978F5E548182_gshared_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5695C0E12BFBE54AD36AC3D4E0DC7D507CC705AE (U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayFramePromise>::get_Size()
inline int32_t TaskPool_1_get_Size_m7B53AE6AD6BE65C7946FBBF44C5531C2BE425E62_inline (TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6856E5126E9A56584EC7358DF07551B8DAD74E8B (U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise>::get_Size()
inline int32_t TaskPool_1_get_Size_m6855EA4990B3EC46E0E3378173D29E0DDD7622A5_inline (TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1887ED2AB50224DE4EF4CF6582FCDE748D5C1630 (U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayPromise>::get_Size()
inline int32_t TaskPool_1_get_Size_mE4C14FD29A3F1193AD746ADF6FB00F78922D7E14_inline (TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7CF4C7BB8863530D2F3CCE7159C4D80C2C125204 (U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise>::get_Size()
inline int32_t TaskPool_1_get_Size_mCE1F33A0D2CE4BDD2E3255D338171734A2BBFDE3_inline (TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m679012BDF999D21E4DCB9A168833F279103B0264 (U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/NextFramePromise>::get_Size()
inline int32_t TaskPool_1_get_Size_m8FC6C0E5E03E682A1F8DE7DCCAB21F1D836C6CB2_inline (TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC76FE59D06CA90AE742C66E3ECF3C0BB9C45FD09 (U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise>::get_Size()
inline int32_t TaskPool_1_get_Size_mE4545A71758A3B1A6981A5442B32FAA1410C64AD_inline (TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB31FAC6BD03C1907C07380B098429541DF128676 (U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitUntilPromise>::get_Size()
inline int32_t TaskPool_1_get_Size_mE58E504580EA1E7D7CAFFB61B5C599703DE60532_inline (TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0E5A112098961213FC86F39CEF12C3B29BDA78D6 (U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/WaitWhilePromise>::get_Size()
inline int32_t TaskPool_1_get_Size_mA518FABFB8639343A780CC6A84DD23A5BA78E197_inline (TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF8A6C798E29EEF181BEDCB2923BAD58BA7D7D1D8 (U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAllPromise::TryInvokeContinuation(Cysharp.Threading.Tasks.UniTask/WhenAllPromise,Cysharp.Threading.Tasks.UniTask/Awaiter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllPromise_TryInvokeContinuation_m457A2DC5D19EDBEDC48F15C85740B408F43FB8BB (WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D * ___self0, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m24648B43F32B83DFDB6118280CA980B3C30D1035 (U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise::TryInvokeContinuation(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise,Cysharp.Threading.Tasks.UniTask/Awaiter&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_TryInvokeContinuation_m8F2AF1C8DC190CD75FB5A7ED25A4DFAA9C956CD6 (WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4 * ___self0, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter1, int32_t ___i2, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m19EA09D0A8CDE3BBF8CBCF64E5D562D27F97AD65 (U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UniTask/YieldPromise>::get_Size()
inline int32_t TaskPool_1_get_Size_m2E4DD7F6844745C57426C0CF56F089BF616C3556_inline (TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8_mED35FD47FBCA89C6E0C3EDD4548E5845348B8509_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *, U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 *, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8_mED35FD47FBCA89C6E0C3EDD4548E5845348B8509_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m4DE1B10A7D12410051B7C974121328D40A1FF8C5 (UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * __this, AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB *, AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 , const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m4DE1B10A7D12410051B7C974121328D40A1FF8C5_gshared)(__this, ___result0, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_mE374258A08F85AE4E9A17AEDFBA9CE8AB9B3876B (UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB *, Exception_t *, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_mE374258A08F85AE4E9A17AEDFBA9CE8AB9B3876B_gshared)(__this, ___error0, method);
}
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F (CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m35DDCA81CC0E4EC89538C0ADC9DF03230036C4F0_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_mC611800EBF9547E943D54F22388BBAF42D4E3300_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__5_MoveNext_m6EEF34ED64282BFF096A7632BCC8BD6BC470C5EE (U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_m7F8BB648739BE265F78AB6527137B2C0006C243E (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__5_SetStateMachine_m0F4B120DC9E1F830B19EF82B82FDEE0E4E2E162C (U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23_m41013169E2B50CD5D61E9BD4091C978F5E548182_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *, U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 *, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23_m41013169E2B50CD5D61E9BD4091C978F5E548182_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Action`1<System.Exception>::Invoke(!0)
inline void Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, Exception_t * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, Exception_t *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__6_MoveNext_m9DC31478E398F40820AAA19F793C69D1273D4A05 (U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__6_SetStateMachine_m9E866A961935839FAEA723B1EE1CB3AD595FC6E6 (U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0475326A161E63F30398F4A4E7986F2CF2776F70 (U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource>::get_Size()
inline int32_t TaskPool_1_get_Size_mA5497BBA83557354373A37538967DF9BB173122C_inline (TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m24D816BBE0869735046299829E0B387559CA1588 (U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource>::get_Size()
inline int32_t TaskPool_1_get_Size_mB5B0581589A45DC8386EB841CA65832F20DAA83D_inline (TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF1878C2300E6C2073A9C8FDC6EB2C01FDEE93D45 (U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource>::get_Size()
inline int32_t TaskPool_1_get_Size_m2A1E103465C85F6F6D48B30ADB3EFF20D95406B3_inline (TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFDBF127153C2E9C0D6A70FD3705A9CD5B6DB5FD8 (U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource>::get_Size()
inline int32_t TaskPool_1_get_Size_mA384FEC937BE12568C3188D02C14C88868D3F49B_inline (TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m64BA07B1A5452E274358E5A896DE2012A93F05BB (U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource>::get_Size()
inline int32_t TaskPool_1_get_Size_m966D674C1BAFF20F94E62D15838061CA843F0089_inline (TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F21DF31172A0F62B7A04973748FABDFCCB94F6B (U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource>::get_Size()
inline int32_t TaskPool_1_get_Size_mD43E0D7F802F560B0D0D40970D3D1045F033D286_inline (TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5BA9AD8898C7840924C003C032AD9DE0A7D54B1A (U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 * __this, const RuntimeMethod* method);
// System.Int32 Cysharp.Threading.Tasks.TaskPool`1<Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource>::get_Size()
inline int32_t TaskPool_1_get_Size_mD69833FB45B5E49D011E2DA4191BFC5FDD6A24F2_inline (TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977 *, const RuntimeMethod*))TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m5C4926AF1F0B75F44AC954B944D307066AA132CF_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * ___task0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_m5CCD7973CFD636CF45F67AF23CC34349ABBAD0AD_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m7A9E3A6930C2EB3ED293F11782F2E0A16FAF8E71_inline (int32_t ___status0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.PlayerLoopHelper::AddContinuation(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m8F5569426F16FE3C4955AA4E10C6059EE9DC011C (int32_t ___timing0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskScheduler::PublishUnobservedTaskException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m4932FC5EE51B367FFF07E9E2FD42D24F8951FC11 (Exception_t * ___ex0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnwrapWaitAsyncOperationU3Ed__22__ctor_m203DCCBDA0BBEF73B88B70C6E5FEB764F6B26356 (U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnwrapWaitAsyncOperationU3Ed__22_System_IDisposable_Dispose_m051BEB5C23EBF1BA75F1203CD893A7C691775599 (U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUnwrapWaitAsyncOperationU3Ed__22_MoveNext_m11D7349CA1178F44BE9B5A140F09EF60E19E2DA5 (U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0030;
	}

IL_0019:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0030:
	{
		// while (!asyncOperation.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_3 = __this->get_asyncOperation_2();
		NullCheck(L_3);
		bool L_4;
		L_4 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUnwrapWaitAsyncOperationU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m80CB1664D7E33CEF2B85977A0F1B627CE9BB9615 (U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnwrapWaitAsyncOperationU3Ed__22_System_Collections_IEnumerator_Reset_m87403686ABEAAF97F1E4AE560EE69DB0C52682E2 (U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUnwrapWaitAsyncOperationU3Ed__22_System_Collections_IEnumerator_Reset_m87403686ABEAAF97F1E4AE560EE69DB0C52682E2_RuntimeMethod_var)));
	}
}
// System.Object Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUnwrapWaitAsyncOperationU3Ed__22_System_Collections_IEnumerator_get_Current_m33204C640C47EB3992ECF96D640700448D3A27D0 (U3CUnwrapWaitAsyncOperationU3Ed__22_tD76A1E27B03FABB65947B21059196CE05AD7B6B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnwrapWaitForSecondsU3Ed__21__ctor_mFA3C232EA2E83137E6BAF931C94FE7305671C40B (U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnwrapWaitForSecondsU3Ed__21_System_IDisposable_Dispose_m04B2EBB0DE685AE37DA4B935B00751B056866A66 (U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUnwrapWaitForSecondsU3Ed__21_MoveNext_m736EF6F28EDA66AA710FC1752E57FDB054855663 (U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var second = (float)waitForSeconds_Seconds.GetValue(waitForSeconds);
		IL2CPP_RUNTIME_CLASS_INIT(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB_il2cpp_TypeInfo_var);
		FieldInfo_t * L_3 = ((EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB_StaticFields*)il2cpp_codegen_static_fields_for(EnumeratorPromise_t18925366DD547E6642A8F3E521BFB5757FD7C2AB_il2cpp_TypeInfo_var))->get_waitForSeconds_Seconds_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = __this->get_waitForSeconds_2();
		NullCheck(L_3);
		RuntimeObject * L_5;
		L_5 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_3, L_4);
		__this->set_U3CsecondU3E5__2_3(((*(float*)((float*)UnBox(L_5, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		// var elapsed = 0.0f;
		__this->set_U3CelapsedU3E5__3_4((0.0f));
	}

IL_003d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// elapsed += Time.deltaTime;
		float L_6 = __this->get_U3CelapsedU3E5__3_4();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__3_4(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		// if (elapsed >= second)
		float L_8 = __this->get_U3CelapsedU3E5__3_4();
		float L_9 = __this->get_U3CsecondU3E5__2_3();
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUnwrapWaitForSecondsU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m52E4D26E44232FA06737EF12DF593328270B5F21 (U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUnwrapWaitForSecondsU3Ed__21_System_Collections_IEnumerator_Reset_mF7E17E480624D82549D9F56EE999CB57DD6BB6BD (U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUnwrapWaitForSecondsU3Ed__21_System_Collections_IEnumerator_Reset_mF7E17E480624D82549D9F56EE999CB57DD6BB6BD_RuntimeMethod_var)));
	}
}
// System.Object Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUnwrapWaitForSecondsU3Ed__21_System_Collections_IEnumerator_get_Current_mCAF3CC6A3261E2C50C7820C515D5EF315CF9FD16 (U3CUnwrapWaitForSecondsU3Ed__21_t01A6130CC5F6207DB364BAD70A178F938D423484 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7CD929DB331383FB99866D19E6C233D285812B57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE * L_0 = (U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE *)il2cpp_codegen_object_new(U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5695C0E12BFBE54AD36AC3D4E0DC7D507CC705AE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5695C0E12BFBE54AD36AC3D4E0DC7D507CC705AE (U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_mEA3ACEF3EDD5023BF37D9BB69AE16EF87D0E612D (U3CU3Ec_tDA500DA1DE52B8F7A45762AFB40C893009596AAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_m7B53AE6AD6BE65C7946FBBF44C5531C2BE425E62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(DelayFramePromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_m7B53AE6AD6BE65C7946FBBF44C5531C2BE425E62_inline((TaskPool_1_t845C3692274EF3571928AD3008760BB09A30CF68 *)(((DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F_StaticFields*)il2cpp_codegen_static_fields_for(DelayFramePromise_tD620B64D97FBEFDD63DE2C07FD89699EA79BA46F_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_m7B53AE6AD6BE65C7946FBBF44C5531C2BE425E62_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m69B7EE04A226E23022C08C8D389A93149C74AC15 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A * L_0 = (U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A *)il2cpp_codegen_object_new(U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6856E5126E9A56584EC7358DF07551B8DAD74E8B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6856E5126E9A56584EC7358DF07551B8DAD74E8B (U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_mC13B74D8452862A7FB4F614EA3075CA3E6AD8017 (U3CU3Ec_t04702A7020C37FD6F70355AD819D62382C18A84A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_m6855EA4990B3EC46E0E3378173D29E0DDD7622A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(DelayIgnoreTimeScalePromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_m6855EA4990B3EC46E0E3378173D29E0DDD7622A5_inline((TaskPool_1_t6C2AECE67F2AA2E03A5018FE9E112C3AF13F0548 *)(((DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880_StaticFields*)il2cpp_codegen_static_fields_for(DelayIgnoreTimeScalePromise_t1B08D5988030765A5A28A28BB6A7BB1CAA916880_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_m6855EA4990B3EC46E0E3378173D29E0DDD7622A5_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD32219EC581E38D75539FC5A42B7116FD2FEF6E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 * L_0 = (U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 *)il2cpp_codegen_object_new(U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1887ED2AB50224DE4EF4CF6582FCDE748D5C1630(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1887ED2AB50224DE4EF4CF6582FCDE748D5C1630 (U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m2D6234D973A4CF0FECA02D5B7EE3B5F1A768C926 (U3CU3Ec_tEEF64677CE027B474C3CA85D151F485A4A866C80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mE4C14FD29A3F1193AD746ADF6FB00F78922D7E14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(DelayPromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mE4C14FD29A3F1193AD746ADF6FB00F78922D7E14_inline((TaskPool_1_t2E91240EDB68112B24F26E7F0E07168EF59002D9 *)(((DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902_StaticFields*)il2cpp_codegen_static_fields_for(DelayPromise_t4CC7BB6157E76F64D31BBC9F103578D1C807E902_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mE4C14FD29A3F1193AD746ADF6FB00F78922D7E14_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE68B8CDFBA08013BF0E1BC1DDDD3E07537F51291 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 * L_0 = (U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 *)il2cpp_codegen_object_new(U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7CF4C7BB8863530D2F3CCE7159C4D80C2C125204(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7CF4C7BB8863530D2F3CCE7159C4D80C2C125204 (U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m5CFB794D524A8FB0763DB4DC44D07AA4C723B6AD (U3CU3Ec_t75F86F0F15D272EC7307209A06ED742A6636FB49 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mCE1F33A0D2CE4BDD2E3255D338171734A2BBFDE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(DelayRealtimePromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mCE1F33A0D2CE4BDD2E3255D338171734A2BBFDE3_inline((TaskPool_1_t87B67C700CB9AB46E3DB498EAD33CD8429291BD8 *)(((DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2_StaticFields*)il2cpp_codegen_static_fields_for(DelayRealtimePromise_t07B8221882FFF88A7F5E28B2612A7F388C64EAC2_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mCE1F33A0D2CE4BDD2E3255D338171734A2BBFDE3_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9622D3C3B09A83399A5AB8C0E046B7DDFB0FBA48 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 * L_0 = (U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 *)il2cpp_codegen_object_new(U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m679012BDF999D21E4DCB9A168833F279103B0264(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m679012BDF999D21E4DCB9A168833F279103B0264 (U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m25BB51AB054C221430473F21177A813B479181D1 (U3CU3Ec_t5BBC287CBDA278A4DD87F54E88F227525146E2F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_m8FC6C0E5E03E682A1F8DE7DCCAB21F1D836C6CB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(NextFramePromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_m8FC6C0E5E03E682A1F8DE7DCCAB21F1D836C6CB2_inline((TaskPool_1_t7068B5BE4543F4B98F63710028FBEB20F72F220B *)(((NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B_StaticFields*)il2cpp_codegen_static_fields_for(NextFramePromise_t9126833A64DD37AF62DCABE96B16E3DB87F93A3B_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_m8FC6C0E5E03E682A1F8DE7DCCAB21F1D836C6CB2_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2368F345D9282342438C164A0FCE43D6A1524E55 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 * L_0 = (U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 *)il2cpp_codegen_object_new(U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC76FE59D06CA90AE742C66E3ECF3C0BB9C45FD09(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC76FE59D06CA90AE742C66E3ECF3C0BB9C45FD09 (U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_mACA88A98B671CE675753AEF0007AEC6658AB55B4 (U3CU3Ec_tE7247913908A04F4876E50F3767DE7C01C27D270 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mE4545A71758A3B1A6981A5442B32FAA1410C64AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(WaitUntilCanceledPromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mE4545A71758A3B1A6981A5442B32FAA1410C64AD_inline((TaskPool_1_tE2D529C6E1ED17FFF56058C97A5946B2B3716BE1 *)(((WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC_StaticFields*)il2cpp_codegen_static_fields_for(WaitUntilCanceledPromise_tFB29D35C4CEB3CBDAF209D20779833B564BBF2DC_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mE4545A71758A3B1A6981A5442B32FAA1410C64AD_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDEDCC47EFE2A81B14EACD134B424AC0F641B4333 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 * L_0 = (U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 *)il2cpp_codegen_object_new(U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB31FAC6BD03C1907C07380B098429541DF128676(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB31FAC6BD03C1907C07380B098429541DF128676 (U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m0BBC8246B92CB0E10684C97FC0C9199A7055A397 (U3CU3Ec_t8427BF933A51343345678C0EC7869C5C4E9149E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mE58E504580EA1E7D7CAFFB61B5C599703DE60532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(WaitUntilPromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mE58E504580EA1E7D7CAFFB61B5C599703DE60532_inline((TaskPool_1_t8790EB122A4C8B4825893CD8BFDAF9B838636F68 *)(((WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D_StaticFields*)il2cpp_codegen_static_fields_for(WaitUntilPromise_t517FF0DDB82436D28F72B5675A85C0B0F58ED53D_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mE58E504580EA1E7D7CAFFB61B5C599703DE60532_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2E64070C3CDC1D429AAD7BC6B7D752F9BB437D74 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 * L_0 = (U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 *)il2cpp_codegen_object_new(U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0E5A112098961213FC86F39CEF12C3B29BDA78D6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0E5A112098961213FC86F39CEF12C3B29BDA78D6 (U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m90CEACECD7995F338ABC5141651420B8147F4172 (U3CU3Ec_tA7E32DFA96387490FBEFC62DE3EF8802A73FDBC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mA518FABFB8639343A780CC6A84DD23A5BA78E197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(WaitWhilePromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mA518FABFB8639343A780CC6A84DD23A5BA78E197_inline((TaskPool_1_tF8690B1FCF8E2557198853BD5FB53FCFE6B29505 *)(((WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7_StaticFields*)il2cpp_codegen_static_fields_for(WaitWhilePromise_t2B4DD765001074DDBE310C037AA49FCBD8FFFBF7_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mA518FABFB8639343A780CC6A84DD23A5BA78E197_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3941202D45EF5640744E45504357C4A147411FD3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 * L_0 = (U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 *)il2cpp_codegen_object_new(U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF8A6C798E29EEF181BEDCB2923BAD58BA7D7D1D8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF8A6C798E29EEF181BEDCB2923BAD58BA7D7D1D8 (U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c::<.ctor>b__3_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_0_mBA91021837B4ED21A956C6957D976125ED974066 (U3CU3Ec_t1798B92FDCF8B6A6FDC73CB9891FD52B93B58019 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var t = (StateTuple<WhenAllPromise, UniTask.Awaiter>)state)
		RuntimeObject * L_0 = ___state0;
		V_0 = ((StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815 *)CastclassClass((RuntimeObject*)L_0, StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815_il2cpp_TypeInfo_var));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// TryInvokeContinuation(t.Item1, t.Item2);
		StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815 * L_1 = V_0;
		NullCheck(L_1);
		WhenAllPromise_t65C064146FF2A18D33B88ECD5EB406B080EEDC8D * L_2 = L_1->get_Item1_0();
		StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815 * L_3 = V_0;
		NullCheck(L_3);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_4 = L_3->get_address_of_Item2_1();
		WhenAllPromise_TryInvokeContinuation_m457A2DC5D19EDBEDC48F15C85740B408F43FB8BB(L_2, (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)L_4, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815 * L_5 = V_0;
			if (!L_5)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			StateTuple_2_t2D8239D76B0FCF9E4403E93F022A7F9E47617815 * L_6 = V_0;
			NullCheck(L_6);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_6);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// }, StateTuple.Create(this, awaiter));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD6F574AA9BA1E172A477CFF3E3CF135FFD5F03D4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E * L_0 = (U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E *)il2cpp_codegen_object_new(U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m24648B43F32B83DFDB6118280CA980B3C30D1035(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m24648B43F32B83DFDB6118280CA980B3C30D1035 (U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c::<.ctor>b__2_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__2_0_m8CE3741C1847958B59D8A21200A8C86C624B4014 (U3CU3Ec_tAADB9E8F4C6190EA23E943F13DD690C15ADC698E * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var t = (StateTuple<WhenAnyPromise, UniTask.Awaiter, int>)state)
		RuntimeObject * L_0 = ___state0;
		V_0 = ((StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E *)CastclassClass((RuntimeObject*)L_0, StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E_il2cpp_TypeInfo_var));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// TryInvokeContinuation(t.Item1, t.Item2, t.Item3);
		StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E * L_1 = V_0;
		NullCheck(L_1);
		WhenAnyPromise_t2B4A6E874AB469DE9CC505BBB90652A675E9C0C4 * L_2 = L_1->get_Item1_0();
		StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E * L_3 = V_0;
		NullCheck(L_3);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_4 = L_3->get_address_of_Item2_1();
		StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Item3_2();
		WhenAnyPromise_TryInvokeContinuation_m8F2AF1C8DC190CD75FB5A7ED25A4DFAA9C956CD6(L_2, (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)L_4, L_6, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x2A, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0029;
			}
		}

IL_0023:
		{
			StateTuple_3_tDC656D1B41F53081419C08BD07ED248D537D6D6E * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0029:
		{
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }, StateTuple.Create(this, awaiter, i));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8D8335F0E3C7C1E66DA96C993DDB9CD20775BB5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF * L_0 = (U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF *)il2cpp_codegen_object_new(U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m19EA09D0A8CDE3BBF8CBCF64E5D562D27F97AD65(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m19EA09D0A8CDE3BBF8CBCF64E5D562D27F97AD65 (U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m686C5E6AE4E01D4CD960E1FDC19437E8E54E57FF (U3CU3Ec_t2335F4FD2F824E330E62CCE2383D8B556877ECFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_m2E4DD7F6844745C57426C0CF56F089BF616C3556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(YieldPromise), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_m2E4DD7F6844745C57426C0CF56F089BF616C3556_inline((TaskPool_1_t94DAD6D2AB2CE8BCDF5BFC12A3DBFC586B111687 *)(((YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B_StaticFields*)il2cpp_codegen_static_fields_for(YieldPromise_t5E1ABD6C3EAED341246EBBEF52C11D2AD67A612B_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_m2E4DD7F6844745C57426C0CF56F089BF616C3556_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__5_MoveNext_m6EEF34ED64282BFF096A7632BCC8BD6BC470C5EE (U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8_mED35FD47FBCA89C6E0C3EDD4548E5845348B8509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4DE1B10A7D12410051B7C974121328D40A1FF8C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 * V_1 = NULL;
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					int32_t L_3 = V_0;
					if (!L_3)
					{
						goto IL_004c;
					}
				}

IL_0014:
				{
					// await task;
					UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_4 = __this->get_address_of_task_2();
					Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_5;
					L_5 = UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline((UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)L_4, /*hidden argument*/NULL);
					V_2 = L_5;
					bool L_6;
					L_6 = Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_2), /*hidden argument*/NULL);
					if (L_6)
					{
						goto IL_0068;
					}
				}

IL_0029:
				{
					int32_t L_7 = 0;
					V_0 = L_7;
					__this->set_U3CU3E1__state_0(L_7);
					Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_8 = V_2;
					__this->set_U3CU3Eu__1_4(L_8);
					AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_9 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8_mED35FD47FBCA89C6E0C3EDD4548E5845348B8509_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_9, (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_2), (U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 *)__this, /*hidden argument*/AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8_mED35FD47FBCA89C6E0C3EDD4548E5845348B8509_RuntimeMethod_var);
					IL2CPP_LEAVE(0xD2, FINALLY_0094);
				}

IL_004c:
				{
					Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_10 = __this->get_U3CU3Eu__1_4();
					V_2 = L_10;
					Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_11 = __this->get_address_of_U3CU3Eu__1_4();
					il2cpp_codegen_initobj(L_11, sizeof(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 ));
					int32_t L_12 = (-1);
					V_0 = L_12;
					__this->set_U3CU3E1__state_0(L_12);
				}

IL_0068:
				{
					Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_2), /*hidden argument*/NULL);
					// core.TrySetResult(AsyncUnit.Default);
					AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 * L_13 = V_1;
					NullCheck(L_13);
					UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * L_14 = L_13->get_address_of_core_3();
					IL2CPP_RUNTIME_CLASS_INIT(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_il2cpp_TypeInfo_var);
					AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  L_15 = ((AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_StaticFields*)il2cpp_codegen_static_fields_for(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_il2cpp_TypeInfo_var))->get_Default_0();
					bool L_16;
					L_16 = UniTaskCompletionSourceCore_1_TrySetResult_m4DE1B10A7D12410051B7C974121328D40A1FF8C5((UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB *)L_14, L_15, /*hidden argument*/UniTaskCompletionSourceCore_1_TrySetResult_m4DE1B10A7D12410051B7C974121328D40A1FF8C5_RuntimeMethod_var);
					// }
					goto IL_0092;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0082;
				}
				throw e;
			}

CATCH_0082:
			{ // begin catch(System.Exception)
				// catch (Exception ex)
				V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// core.TrySetException(ex);
				AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 * L_17 = V_1;
				NullCheck(L_17);
				UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * L_18 = L_17->get_address_of_core_3();
				Exception_t * L_19 = V_3;
				bool L_20;
				L_20 = UniTaskCompletionSourceCore_1_TrySetException_mE374258A08F85AE4E9A17AEDFBA9CE8AB9B3876B((UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB *)L_18, L_19, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_mE374258A08F85AE4E9A17AEDFBA9CE8AB9B3876B_RuntimeMethod_var)));
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0092;
			} // end catch (depth: 3)

IL_0092:
			{
				IL2CPP_LEAVE(0xA4, FINALLY_0094);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0094;
		}

FINALLY_0094:
		{ // begin finally (depth: 2)
			{
				int32_t L_21 = V_0;
				if ((((int32_t)L_21) >= ((int32_t)0)))
				{
					goto IL_00a3;
				}
			}

IL_0098:
			{
				// tokenRegistration.Dispose();
				AttachExternalCancellationSource_t7EFA318507E0C0EB7703A2F8B86F43FF493834F2 * L_22 = V_1;
				NullCheck(L_22);
				CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * L_23 = L_22->get_address_of_tokenRegistration_2();
				CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F((CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)L_23, /*hidden argument*/NULL);
			}

IL_00a3:
			{
				IL2CPP_END_FINALLY(148)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(148)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xD2, IL_00d2)
			IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		}

IL_00a4:
		{
			goto IL_00bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a6;
		}
		throw e;
	}

CATCH_00a6:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m35DDCA81CC0E4EC89538C0ADC9DF03230036C4F0_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	} // end catch (depth: 1)

IL_00bf:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskVoidMethodBuilder_SetResult_mC611800EBF9547E943D54F22388BBAF42D4E3300_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_26, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRunTaskU3Ed__5_MoveNext_m6EEF34ED64282BFF096A7632BCC8BD6BC470C5EE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * _thisAdjusted = reinterpret_cast<U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 *>(__this + _offset);
	U3CRunTaskU3Ed__5_MoveNext_m6EEF34ED64282BFF096A7632BCC8BD6BC470C5EE(_thisAdjusted, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource/<RunTask>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__5_SetStateMachine_m0F4B120DC9E1F830B19EF82B82FDEE0E4E2E162C (U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskVoidMethodBuilder_SetStateMachine_m7F8BB648739BE265F78AB6527137B2C0006C243E((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRunTaskU3Ed__5_SetStateMachine_m0F4B120DC9E1F830B19EF82B82FDEE0E4E2E162C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * _thisAdjusted = reinterpret_cast<U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 *>(__this + _offset);
	U3CRunTaskU3Ed__5_SetStateMachine_m0F4B120DC9E1F830B19EF82B82FDEE0E4E2E162C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__6_MoveNext_m9DC31478E398F40820AAA19F793C69D1273D4A05 (U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23_m41013169E2B50CD5D61E9BD4091C978F5E548182_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * V_1 = NULL;
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					int32_t L_3 = V_0;
					if (!L_3)
					{
						goto IL_004c;
					}
				}

IL_0014:
				{
					// await task;
					UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_4 = __this->get_address_of_task_2();
					Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_5;
					L_5 = UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline((UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)L_4, /*hidden argument*/NULL);
					V_2 = L_5;
					bool L_6;
					L_6 = Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_2), /*hidden argument*/NULL);
					if (L_6)
					{
						goto IL_0068;
					}
				}

IL_0029:
				{
					int32_t L_7 = 0;
					V_0 = L_7;
					__this->set_U3CU3E1__state_0(L_7);
					Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_8 = V_2;
					__this->set_U3CU3Eu__1_4(L_8);
					AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_9 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23_m41013169E2B50CD5D61E9BD4091C978F5E548182_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_9, (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_2), (U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 *)__this, /*hidden argument*/AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23_m41013169E2B50CD5D61E9BD4091C978F5E548182_RuntimeMethod_var);
					IL2CPP_LEAVE(0xD2, FINALLY_0098);
				}

IL_004c:
				{
					Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_10 = __this->get_U3CU3Eu__1_4();
					V_2 = L_10;
					Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_11 = __this->get_address_of_U3CU3Eu__1_4();
					il2cpp_codegen_initobj(L_11, sizeof(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 ));
					int32_t L_12 = (-1);
					V_0 = L_12;
					__this->set_U3CU3E1__state_0(L_12);
				}

IL_0068:
				{
					Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_2), /*hidden argument*/NULL);
					// }
					goto IL_0096;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0071;
				}
				throw e;
			}

CATCH_0071:
			{ // begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
					// if (exceptionHandler != null)
					ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * L_13 = V_1;
					NullCheck(L_13);
					Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_14 = L_13->get_exceptionHandler_2();
					if (!L_14)
					{
						goto IL_0088;
					}
				}

IL_007a:
				{
					// exceptionHandler(ex);
					ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * L_15 = V_1;
					NullCheck(L_15);
					Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_16 = L_15->get_exceptionHandler_2();
					Exception_t * L_17 = V_3;
					NullCheck(L_16);
					Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C(L_16, L_17, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var)));
					// }
					goto IL_0094;
				}

IL_0088:
				{
					// this.exception = ExceptionDispatchInfo.Capture(ex);
					ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * L_18 = V_1;
					Exception_t * L_19 = V_3;
					ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_20;
					L_20 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(L_19, /*hidden argument*/NULL);
					NullCheck(L_18);
					L_18->set_exception_4(L_20);
				}

IL_0094:
				{
					// }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0096;
				}
			} // end catch (depth: 3)

IL_0096:
			{
				IL2CPP_LEAVE(0xA4, FINALLY_0098);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0098;
		}

FINALLY_0098:
		{ // begin finally (depth: 2)
			{
				int32_t L_21 = V_0;
				if ((((int32_t)L_21) >= ((int32_t)0)))
				{
					goto IL_00a3;
				}
			}

IL_009c:
			{
				// completed = true;
				ToCoroutineEnumerator_t4F61B2BA709ADE4657B72BF0BD8565C2CBC7D045 * L_22 = V_1;
				NullCheck(L_22);
				L_22->set_completed_0((bool)1);
			}

IL_00a3:
			{
				IL2CPP_END_FINALLY(152)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(152)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xD2, IL_00d2)
			IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		}

IL_00a4:
		{
			goto IL_00bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a6;
		}
		throw e;
	}

CATCH_00a6:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_24 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m35DDCA81CC0E4EC89538C0ADC9DF03230036C4F0_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	} // end catch (depth: 1)

IL_00bf:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskVoidMethodBuilder_SetResult_mC611800EBF9547E943D54F22388BBAF42D4E3300_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_25, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRunTaskU3Ed__6_MoveNext_m9DC31478E398F40820AAA19F793C69D1273D4A05_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * _thisAdjusted = reinterpret_cast<U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 *>(__this + _offset);
	U3CRunTaskU3Ed__6_MoveNext_m9DC31478E398F40820AAA19F793C69D1273D4A05(_thisAdjusted, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__6_SetStateMachine_m9E866A961935839FAEA723B1EE1CB3AD595FC6E6 (U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskVoidMethodBuilder_SetStateMachine_m7F8BB648739BE265F78AB6527137B2C0006C243E((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRunTaskU3Ed__6_SetStateMachine_m9E866A961935839FAEA723B1EE1CB3AD595FC6E6_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * _thisAdjusted = reinterpret_cast<U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 *>(__this + _offset);
	U3CRunTaskU3Ed__6_SetStateMachine_m9E866A961935839FAEA723B1EE1CB3AD595FC6E6(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD1F91D9F177229D9856EBF407A10C8F0E768D48C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 * L_0 = (U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 *)il2cpp_codegen_object_new(U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0475326A161E63F30398F4A4E7986F2CF2776F70(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0475326A161E63F30398F4A4E7986F2CF2776F70 (U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_mF3D550ADDEF9983885A073140DA21A260AB53414 (U3CU3Ec_t92047BDBDD92C22221448CE58576C181FBE6B202 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mA5497BBA83557354373A37538967DF9BB173122C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(AssetBundleCreateRequestConfiguredSource), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mA5497BBA83557354373A37538967DF9BB173122C_inline((TaskPool_1_t24594638649FACC0B618A2F7015C86A090F7314C *)(((AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471_StaticFields*)il2cpp_codegen_static_fields_for(AssetBundleCreateRequestConfiguredSource_t1C4BC56613CC0CF1CD799F7C0304DF387D033471_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mA5497BBA83557354373A37538967DF9BB173122C_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA20AC8B0B80DE52A9D221DD6E29DDA110EAEF545 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B * L_0 = (U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B *)il2cpp_codegen_object_new(U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m24D816BBE0869735046299829E0B387559CA1588(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m24D816BBE0869735046299829E0B387559CA1588 (U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_mEC4931DD0EF7D21781D46BB244C312C45166A2B8 (U3CU3Ec_tFC8D7A8AD8AEDF707DF79DE93AB10A50D292E37B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mB5B0581589A45DC8386EB841CA65832F20DAA83D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(AssetBundleRequestAllAssetsConfiguredSource), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mB5B0581589A45DC8386EB841CA65832F20DAA83D_inline((TaskPool_1_t83A198B7F3E261C04A27C4F6E4EE4BF09A8B73D1 *)(((AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11_StaticFields*)il2cpp_codegen_static_fields_for(AssetBundleRequestAllAssetsConfiguredSource_t3CF76362287E0A0C64E7E66976CEE0DA0ECFDE11_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mB5B0581589A45DC8386EB841CA65832F20DAA83D_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m37FD41FFFAA6F39CF905F9C51974FE82DF37BD91 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 * L_0 = (U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 *)il2cpp_codegen_object_new(U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF1878C2300E6C2073A9C8FDC6EB2C01FDEE93D45(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF1878C2300E6C2073A9C8FDC6EB2C01FDEE93D45 (U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m0D6AFEDB7F05120F24E2452FC1C55632CF8B1881 (U3CU3Ec_tB2D55BFB5C9437C05641E7451DDAE6F91889D884 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_m2A1E103465C85F6F6D48B30ADB3EFF20D95406B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(AssetBundleRequestConfiguredSource), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_m2A1E103465C85F6F6D48B30ADB3EFF20D95406B3_inline((TaskPool_1_t8165E3A671C069D3C7696AF11F5B8E660200BB05 *)(((AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4_StaticFields*)il2cpp_codegen_static_fields_for(AssetBundleRequestConfiguredSource_tCE8E4837D70A256F4802A357CE19B46C299E41E4_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_m2A1E103465C85F6F6D48B30ADB3EFF20D95406B3_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEAC24D631778B4E69E4F673BF0E2615728466B00 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B * L_0 = (U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B *)il2cpp_codegen_object_new(U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFDBF127153C2E9C0D6A70FD3705A9CD5B6DB5FD8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFDBF127153C2E9C0D6A70FD3705A9CD5B6DB5FD8 (U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m8B92A6BB5C2747C02B7855D24B14F186B6683E1D (U3CU3Ec_tC8BEC8BAF79B10A58C68D3B2AFAB0BD87783148B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mA384FEC937BE12568C3188D02C14C88868D3F49B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(AsyncGPUReadbackRequestAwaiterConfiguredSource), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mA384FEC937BE12568C3188D02C14C88868D3F49B_inline((TaskPool_1_t04EE932462D6B013288818BCFFAB48A70E151A9F *)(((AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF_StaticFields*)il2cpp_codegen_static_fields_for(AsyncGPUReadbackRequestAwaiterConfiguredSource_t881B0575A9978858A3E507E2BBB7EF16D70767EF_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mA384FEC937BE12568C3188D02C14C88868D3F49B_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7BB3875A93E3A6AA92052ED18737A67115E8EB9B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 * L_0 = (U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 *)il2cpp_codegen_object_new(U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m64BA07B1A5452E274358E5A896DE2012A93F05BB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m64BA07B1A5452E274358E5A896DE2012A93F05BB (U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_mBD8FAF9DD11AF2B66D1A5BE787B37D3ADC7DD2FC (U3CU3Ec_t2166072928F37855BF8F81FE1B392CF9513CA194 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_m966D674C1BAFF20F94E62D15838061CA843F0089_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(AsyncOperationConfiguredSource), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_m966D674C1BAFF20F94E62D15838061CA843F0089_inline((TaskPool_1_t84C523976CCF2951FBC850FE38DF64BE4B7D1781 *)(((AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperationConfiguredSource_tF2EA8E0C8CB0A899592D534581A718594627BE33_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_m966D674C1BAFF20F94E62D15838061CA843F0089_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m11503C25CF673671D976F1F15B6EB2AD48EA72B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 * L_0 = (U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 *)il2cpp_codegen_object_new(U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3F21DF31172A0F62B7A04973748FABDFCCB94F6B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F21DF31172A0F62B7A04973748FABDFCCB94F6B (U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_m224149D9F16152537868F6A4A0F2BE5DEE58F162 (U3CU3Ec_t896E07EC35D1F24B53F5BDD2A581D33720BCEAA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mD43E0D7F802F560B0D0D40970D3D1045F033D286_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(ResourceRequestConfiguredSource), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mD43E0D7F802F560B0D0D40970D3D1045F033D286_inline((TaskPool_1_tD7F388B5D15138A3B1E0E1FE59040220BD3E4F44 *)(((ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C_StaticFields*)il2cpp_codegen_static_fields_for(ResourceRequestConfiguredSource_t592CC0BC1EA42A7982128CDC3B9FC9AEDBB8375C_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mD43E0D7F802F560B0D0D40970D3D1045F033D286_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8A3B08EA1CE37E837E3404BB2CDF354FA96809AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 * L_0 = (U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 *)il2cpp_codegen_object_new(U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5BA9AD8898C7840924C003C032AD9DE0A7D54B1A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5BA9AD8898C7840924C003C032AD9DE0A7D54B1A (U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c::<.cctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__4_0_mB51230D778AF3F0A21EA85FED6A152FC5E875969 (U3CU3Ec_t73CAA02D865F52B8DD611AF22263799FBA9B5046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskPool_1_get_Size_mD69833FB45B5E49D011E2DA4191BFC5FDD6A24F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TaskPool.RegisterSizeGetter(typeof(UnityWebRequestAsyncOperationConfiguredSource), () => pool.Size);
		IL2CPP_RUNTIME_CLASS_INIT(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TaskPool_1_get_Size_mD69833FB45B5E49D011E2DA4191BFC5FDD6A24F2_inline((TaskPool_1_tEE845389506AE2AA99BD10FA51D7562487922977 *)(((UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAsyncOperationConfiguredSource_tCBDA23834B95D7D79332B2596C7B4BA0129992CB_il2cpp_TypeInfo_var))->get_address_of_pool_0()), /*hidden argument*/TaskPool_1_get_Size_mD69833FB45B5E49D011E2DA4191BFC5FDD6A24F2_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  UniTask_GetAwaiter_m1FE35EBA18DB40141C1025CECD4FC300E3A8C59C_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method)
{
	{
		// return new Awaiter(this);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m5C4926AF1F0B75F44AC954B944D307066AA132CF_inline((&L_0), (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDCC71AAE7FA5EA2B303D3EC512177FD122C8DA49_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method)
{
	{
		// return task.Status.IsCompleted();
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_0 = __this->get_address_of_task_0();
		int32_t L_1;
		L_1 = UniTask_get_Status_m5CCD7973CFD636CF45F67AF23CC34349ABBAD0AD_inline((UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m7A9E3A6930C2EB3ED293F11782F2E0A16FAF8E71_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_0 = __this->get_address_of_task_0();
		RuntimeObject* L_1 = L_0->get_source_2();
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_2 = __this->get_address_of_task_0();
		RuntimeObject* L_3 = L_2->get_source_2();
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_4 = __this->get_address_of_task_0();
		int16_t L_5 = L_4->get_token_3();
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m35DDCA81CC0E4EC89538C0ADC9DF03230036C4F0_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t9DBF8570AC748696C52D015E46344646DFA4B230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->get_runner_0();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_1 = __this->get_runner_0();
		NullCheck(L_1);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2;
		L_2 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m8F5569426F16FE3C4955AA4E10C6059EE9DC011C(((int32_t)13), L_2, /*hidden argument*/NULL);
		// runner = null;
		__this->set_runner_0((RuntimeObject*)NULL);
	}

IL_0021:
	{
		// UniTaskScheduler.PublishUnobservedTaskException(exception);
		Exception_t * L_3 = ___exception0;
		IL2CPP_RUNTIME_CLASS_INIT(UniTaskScheduler_t9DBF8570AC748696C52D015E46344646DFA4B230_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m4932FC5EE51B367FFF07E9E2FD42D24F8951FC11(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_mC611800EBF9547E943D54F22388BBAF42D4E3300_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->get_runner_0();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_1 = __this->get_runner_0();
		NullCheck(L_1);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2;
		L_2 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m8F5569426F16FE3C4955AA4E10C6059EE9DC011C(((int32_t)13), L_2, /*hidden argument*/NULL);
		// runner = null;
		__this->set_runner_0((RuntimeObject*)NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TaskPool_1_get_Size_m9279635EC86979780FB97A02D1C4153353B77848_gshared_inline (TaskPool_1_tA15F1EE20733E08D91DFCB2C879C7FD513D8224C * __this, const RuntimeMethod* method)
{
	{
		// public int Size => size;
		int32_t L_0 = (int32_t)__this->get_size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8_mED35FD47FBCA89C6E0C3EDD4548E5845348B8509_gshared_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runner_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 * L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)__this->get_address_of_runner_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 *, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 *)(U3CRunTaskU3Ed__5_tBC68ADAB090E2BFB1579501CC3871C100C00BFF8 *)L_1, (RuntimeObject**)(RuntimeObject**)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_runner_0();
		NullCheck((RuntimeObject*)L_4);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)L_3, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23_m41013169E2B50CD5D61E9BD4091C978F5E548182_gshared_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runner_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 * L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)__this->get_address_of_runner_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 *, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 *)(U3CRunTaskU3Ed__6_t2DDFC1659995CA42C5E3B86A2ACAFC3E44917F23 *)L_1, (RuntimeObject**)(RuntimeObject**)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_runner_0();
		NullCheck((RuntimeObject*)L_4);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)L_3, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m5C4926AF1F0B75F44AC954B944D307066AA132CF_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * ___task0, const RuntimeMethod* method)
{
	{
		// this.task = task;
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_0 = ___task0;
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  L_1 = (*(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F *)L_0);
		__this->set_task_0(L_1);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_m5CCD7973CFD636CF45F67AF23CC34349ABBAD0AD_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->get_source_2();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->get_source_2();
		int16_t L_2 = __this->get_token_3();
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m7A9E3A6930C2EB3ED293F11782F2E0A16FAF8E71_inline (int32_t ___status0, const RuntimeMethod* method)
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null)
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_0 = __this->get_address_of_task_0();
		RuntimeObject* L_1 = L_0->get_source_2();
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// continuation();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___continuation0;
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0014:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_3 = __this->get_address_of_task_0();
		RuntimeObject* L_4 = L_3->get_source_2();
		IL2CPP_RUNTIME_CLASS_INIT(AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_5 = ((AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var))->get_InvokeContinuationDelegate_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ___continuation0;
		UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * L_7 = __this->get_address_of_task_0();
		int16_t L_8 = L_7->get_token_3();
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_8);
		// }
		return;
	}
}
