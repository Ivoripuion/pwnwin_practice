#pragma once

// expinP327PropPage.h : CexpinP327PropPage 属性页类的声明。


// CexpinP327PropPage : 有关实现的信息，请参阅 expinP327PropPage.cpp。

class CexpinP327PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CexpinP327PropPage)
	DECLARE_OLECREATE_EX(CexpinP327PropPage)

// 构造函数
public:
	CexpinP327PropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_EXPINP327 };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

