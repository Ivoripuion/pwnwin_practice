// expinP327Ctrl.cpp : CexpinP327Ctrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "expinP327.h"
#include "expinP327Ctrl.h"
#include "expinP327PropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CexpinP327Ctrl, COleControl)



// 消息映射

BEGIN_MESSAGE_MAP(CexpinP327Ctrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// 调度映射

BEGIN_DISPATCH_MAP(CexpinP327Ctrl, COleControl)
	DISP_FUNCTION_ID(CexpinP327Ctrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CexpinP327Ctrl, "test", dispidtest, test, VT_EMPTY, VTS_BSTR)
END_DISPATCH_MAP()



// 事件映射

BEGIN_EVENT_MAP(CexpinP327Ctrl, COleControl)
END_EVENT_MAP()



// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CexpinP327Ctrl, 1)
	PROPPAGEID(CexpinP327PropPage::guid)
END_PROPPAGEIDS(CexpinP327Ctrl)



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CexpinP327Ctrl, "EXPINP327.expinP327Ctrl.1",
	0x38f509d3, 0xbd5, 0x4c8a, 0xac, 0x9, 0x61, 0xd3, 0x69, 0xdd, 0xda, 0xa1)



// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CexpinP327Ctrl, _tlid, _wVerMajor, _wVerMinor)



// 接口 ID

const IID BASED_CODE IID_DexpinP327 =
		{ 0x96C4BB71, 0x6A08, 0x4EC3, { 0x86, 0xB5, 0xC8, 0xA5, 0xE2, 0x1, 0x3, 0xF0 } };
const IID BASED_CODE IID_DexpinP327Events =
		{ 0xE464BBCD, 0xD60E, 0x414D, { 0xA9, 0x7B, 0x76, 0xF7, 0x24, 0x16, 0x1C, 0xBD } };



// 控件类型信息

static const DWORD BASED_CODE _dwexpinP327OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CexpinP327Ctrl, IDS_EXPINP327, _dwexpinP327OleMisc)



// CexpinP327Ctrl::CexpinP327CtrlFactory::UpdateRegistry -
// 添加或移除 CexpinP327Ctrl 的系统注册表项

BOOL CexpinP327Ctrl::CexpinP327CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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



// CexpinP327Ctrl::CexpinP327Ctrl - 构造函数

CexpinP327Ctrl::CexpinP327Ctrl()
{
	InitializeIIDs(&IID_DexpinP327, &IID_DexpinP327Events);
	// TODO: 在此初始化控件的实例数据。
}



// CexpinP327Ctrl::~CexpinP327Ctrl - 析构函数

CexpinP327Ctrl::~CexpinP327Ctrl()
{
	// TODO: 在此清理控件的实例数据。
}



// CexpinP327Ctrl::OnDraw - 绘图函数

void CexpinP327Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 用您自己的绘图代码替换下面的代码。
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CexpinP327Ctrl::DoPropExchange - 持久性支持

void CexpinP327Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}



// CexpinP327Ctrl::OnResetState - 将控件重置为默认状态

void CexpinP327Ctrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}



// CexpinP327Ctrl::AboutBox - 向用户显示“关于”框

void CexpinP327Ctrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_EXPINP327);
	dlgAbout.DoModal();
}



// CexpinP327Ctrl 消息处理程序

DWORD MyException(void)
{
	printf("There is an exception");
	getchar();
	return 1;
}

void CexpinP327Ctrl::test(LPCTSTR str)
{
 
	// TODO: Add your dispatch handler code here
	printf("aaaa");  //定位该函数标记
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
