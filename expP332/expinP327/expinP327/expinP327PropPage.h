#pragma once

// expinP327PropPage.h : CexpinP327PropPage ����ҳ���������


// CexpinP327PropPage : �й�ʵ�ֵ���Ϣ������� expinP327PropPage.cpp��

class CexpinP327PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CexpinP327PropPage)
	DECLARE_OLECREATE_EX(CexpinP327PropPage)

// ���캯��
public:
	CexpinP327PropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_EXPINP327 };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

