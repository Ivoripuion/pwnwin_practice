

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Sat Feb 08 21:56:50 2020
 */
/* Compiler settings for .\expinP327.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __expinP327idl_h__
#define __expinP327idl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DexpinP327_FWD_DEFINED__
#define ___DexpinP327_FWD_DEFINED__
typedef interface _DexpinP327 _DexpinP327;
#endif 	/* ___DexpinP327_FWD_DEFINED__ */


#ifndef ___DexpinP327Events_FWD_DEFINED__
#define ___DexpinP327Events_FWD_DEFINED__
typedef interface _DexpinP327Events _DexpinP327Events;
#endif 	/* ___DexpinP327Events_FWD_DEFINED__ */


#ifndef __expinP327_FWD_DEFINED__
#define __expinP327_FWD_DEFINED__

#ifdef __cplusplus
typedef class expinP327 expinP327;
#else
typedef struct expinP327 expinP327;
#endif /* __cplusplus */

#endif 	/* __expinP327_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __expinP327Lib_LIBRARY_DEFINED__
#define __expinP327Lib_LIBRARY_DEFINED__

/* library expinP327Lib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_expinP327Lib;

#ifndef ___DexpinP327_DISPINTERFACE_DEFINED__
#define ___DexpinP327_DISPINTERFACE_DEFINED__

/* dispinterface _DexpinP327 */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DexpinP327;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("96C4BB71-6A08-4EC3-86B5-C8A5E20103F0")
    _DexpinP327 : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DexpinP327Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DexpinP327 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DexpinP327 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DexpinP327 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DexpinP327 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DexpinP327 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DexpinP327 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DexpinP327 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DexpinP327Vtbl;

    interface _DexpinP327
    {
        CONST_VTBL struct _DexpinP327Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DexpinP327_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DexpinP327_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DexpinP327_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DexpinP327_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DexpinP327_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DexpinP327_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DexpinP327_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DexpinP327_DISPINTERFACE_DEFINED__ */


#ifndef ___DexpinP327Events_DISPINTERFACE_DEFINED__
#define ___DexpinP327Events_DISPINTERFACE_DEFINED__

/* dispinterface _DexpinP327Events */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DexpinP327Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E464BBCD-D60E-414D-A97B-76F724161CBD")
    _DexpinP327Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DexpinP327EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DexpinP327Events * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DexpinP327Events * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DexpinP327Events * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DexpinP327Events * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DexpinP327Events * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DexpinP327Events * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DexpinP327Events * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DexpinP327EventsVtbl;

    interface _DexpinP327Events
    {
        CONST_VTBL struct _DexpinP327EventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DexpinP327Events_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DexpinP327Events_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DexpinP327Events_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DexpinP327Events_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DexpinP327Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DexpinP327Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DexpinP327Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DexpinP327Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_expinP327;

#ifdef __cplusplus

class DECLSPEC_UUID("38F509D3-0BD5-4C8A-AC09-61D369DDDAA1")
expinP327;
#endif
#endif /* __expinP327Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


