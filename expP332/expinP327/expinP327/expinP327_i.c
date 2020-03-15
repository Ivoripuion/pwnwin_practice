

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_expinP327Lib,0x7F47B1D4,0x47C7,0x42A8,0x84,0x62,0x13,0x07,0xE1,0x2C,0x55,0xF0);


MIDL_DEFINE_GUID(IID, DIID__DexpinP327,0x96C4BB71,0x6A08,0x4EC3,0x86,0xB5,0xC8,0xA5,0xE2,0x01,0x03,0xF0);


MIDL_DEFINE_GUID(IID, DIID__DexpinP327Events,0xE464BBCD,0xD60E,0x414D,0xA9,0x7B,0x76,0xF7,0x24,0x16,0x1C,0xBD);


MIDL_DEFINE_GUID(CLSID, CLSID_expinP327,0x38F509D3,0x0BD5,0x4C8A,0xAC,0x09,0x61,0xD3,0x69,0xDD,0xDA,0xA1);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



