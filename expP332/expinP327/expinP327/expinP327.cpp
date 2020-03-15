// expinP327.cpp : CexpinP327App 和 DLL 注册的实现。

#include "stdafx.h"
#include "expinP327.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CexpinP327App theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x7F47B1D4, 0x47C7, 0x42A8, { 0x84, 0x62, 0x13, 0x7, 0xE1, 0x2C, 0x55, 0xF0 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CexpinP327App::InitInstance - DLL 初始化

BOOL CexpinP327App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: 在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CexpinP327App::ExitInstance - DLL 终止

int CexpinP327App::ExitInstance()
{
	// TODO: 在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
