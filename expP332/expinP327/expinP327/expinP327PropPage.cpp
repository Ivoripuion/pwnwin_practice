// expinP327PropPage.cpp : CexpinP327PropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "expinP327.h"
#include "expinP327PropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CexpinP327PropPage, COlePropertyPage)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CexpinP327PropPage, COlePropertyPage)
END_MESSAGE_MAP()



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CexpinP327PropPage, "EXPINP327.expinP327PropPage.1",
	0xb62c94aa, 0xd43d, 0x49f3, 0x86, 0x1, 0xf5, 0x42, 0x54, 0x72, 0x5b, 0x8c)



// CexpinP327PropPage::CexpinP327PropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CexpinP327PropPage ��ϵͳע�����

BOOL CexpinP327PropPage::CexpinP327PropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_EXPINP327_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CexpinP327PropPage::CexpinP327PropPage - ���캯��

CexpinP327PropPage::CexpinP327PropPage() :
	COlePropertyPage(IDD, IDS_EXPINP327_PPG_CAPTION)
{
}



// CexpinP327PropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CexpinP327PropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CexpinP327PropPage ��Ϣ�������
