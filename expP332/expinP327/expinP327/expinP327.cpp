// expinP327.cpp : CexpinP327App �� DLL ע���ʵ�֡�

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



// CexpinP327App::InitInstance - DLL ��ʼ��

BOOL CexpinP327App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CexpinP327App::ExitInstance - DLL ��ֹ

int CexpinP327App::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
