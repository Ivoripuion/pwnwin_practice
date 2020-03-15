// expinP327Ctrl.cpp : CexpinP327Ctrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "expinP327.h"
#include "expinP327Ctrl.h"
#include "expinP327PropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CexpinP327Ctrl, COleControl)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CexpinP327Ctrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// ����ӳ��

BEGIN_DISPATCH_MAP(CexpinP327Ctrl, COleControl)
	DISP_FUNCTION_ID(CexpinP327Ctrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CexpinP327Ctrl, "test", dispidtest, test, VT_EMPTY, VTS_BSTR)
END_DISPATCH_MAP()



// �¼�ӳ��

BEGIN_EVENT_MAP(CexpinP327Ctrl, COleControl)
END_EVENT_MAP()



// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CexpinP327Ctrl, 1)
	PROPPAGEID(CexpinP327PropPage::guid)
END_PROPPAGEIDS(CexpinP327Ctrl)



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CexpinP327Ctrl, "EXPINP327.expinP327Ctrl.1",
	0x38f509d3, 0xbd5, 0x4c8a, 0xac, 0x9, 0x61, 0xd3, 0x69, 0xdd, 0xda, 0xa1)



// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CexpinP327Ctrl, _tlid, _wVerMajor, _wVerMinor)



// �ӿ� ID

const IID BASED_CODE IID_DexpinP327 =
		{ 0x96C4BB71, 0x6A08, 0x4EC3, { 0x86, 0xB5, 0xC8, 0xA5, 0xE2, 0x1, 0x3, 0xF0 } };
const IID BASED_CODE IID_DexpinP327Events =
		{ 0xE464BBCD, 0xD60E, 0x414D, { 0xA9, 0x7B, 0x76, 0xF7, 0x24, 0x16, 0x1C, 0xBD } };



// �ؼ�������Ϣ

static const DWORD BASED_CODE _dwexpinP327OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CexpinP327Ctrl, IDS_EXPINP327, _dwexpinP327OleMisc)



// CexpinP327Ctrl::CexpinP327CtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CexpinP327Ctrl ��ϵͳע�����

BOOL CexpinP327Ctrl::CexpinP327CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_EXPINP327,
			IDB_EXPINP327,
			afxRegApartmentThreading,
			_dwexpinP327OleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CexpinP327Ctrl::CexpinP327Ctrl - ���캯��

CexpinP327Ctrl::CexpinP327Ctrl()
{
	InitializeIIDs(&IID_DexpinP327, &IID_DexpinP327Events);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}



// CexpinP327Ctrl::~CexpinP327Ctrl - ��������

CexpinP327Ctrl::~CexpinP327Ctrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}



// CexpinP327Ctrl::OnDraw - ��ͼ����

void CexpinP327Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CexpinP327Ctrl::DoPropExchange - �־���֧��

void CexpinP327Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}



// CexpinP327Ctrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CexpinP327Ctrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}



// CexpinP327Ctrl::AboutBox - ���û���ʾ�����ڡ���

void CexpinP327Ctrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_EXPINP327);
	dlgAbout.DoModal();
}



// CexpinP327Ctrl ��Ϣ�������

DWORD MyException(void)
{
	printf("There is an exception");
	getchar();
	return 1;
}

void CexpinP327Ctrl::test(LPCTSTR str)
{
 
	// TODO: Add your dispatch handler code here
	printf("aaaa");  //��λ�ú������
	char dest[100];
	sprintf(dest, "%s", str);
	int zero=0;
	__try
	{
		zero=1/zero;
	}
	__except(MyException())
	{
	}
}
