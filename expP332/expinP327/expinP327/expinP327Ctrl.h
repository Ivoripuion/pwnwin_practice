#pragma once

// expinP327Ctrl.h : CexpinP327Ctrl ActiveX 控件类的声明。


// CexpinP327Ctrl : 有关实现的信息，请参阅 expinP327Ctrl.cpp。

class CexpinP327Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CexpinP327Ctrl)

// 构造函数
public:
	CexpinP327Ctrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CexpinP327Ctrl();

	DECLARE_OLECREATE_EX(CexpinP327Ctrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CexpinP327Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CexpinP327Ctrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CexpinP327Ctrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
		dispidtest = 1L
	};
protected:
	void test(LPCTSTR str);
};

