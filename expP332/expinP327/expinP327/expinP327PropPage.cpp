// expinP327PropPage.cpp : CexpinP327PropPage 属性页类的实现。

#include "stdafx.h"
#include "expinP327.h"
#include "expinP327PropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CexpinP327PropPage, COlePropertyPage)



// 消息映射

BEGIN_MESSAGE_MAP(CexpinP327PropPage, COlePropertyPage)
END_MESSAGE_MAP()



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CexpinP327PropPage, "EXPINP327.expinP327PropPage.1",
	0xb62c94aa, 0xd43d, 0x49f3, 0x86, 0x1, 0xf5, 0x42, 0x54, 0x72, 0x5b, 0x8c)



// CexpinP327PropPage::CexpinP327PropPageFactory::UpdateRegistry -
// 添加或移除 CexpinP327PropPage 的系统注册表项

BOOL CexpinP327PropPage::CexpinP327PropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_EXPINP327_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CexpinP327PropPage::CexpinP327PropPage - 构造函数

CexpinP327PropPage::CexpinP327PropPage() :
	COlePropertyPage(IDD, IDS_EXPINP327_PPG_CAPTION)
{
}



// CexpinP327PropPage::DoDataExchange - 在页和属性间移动数据

void CexpinP327PropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CexpinP327PropPage 消息处理程序
