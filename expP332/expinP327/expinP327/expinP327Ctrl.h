#pragma once

// expinP327Ctrl.h : CexpinP327Ctrl ActiveX �ؼ����������


// CexpinP327Ctrl : �й�ʵ�ֵ���Ϣ������� expinP327Ctrl.cpp��

class CexpinP327Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CexpinP327Ctrl)

// ���캯��
public:
	CexpinP327Ctrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CexpinP327Ctrl();

	DECLARE_OLECREATE_EX(CexpinP327Ctrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CexpinP327Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CexpinP327Ctrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CexpinP327Ctrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
		dispidtest = 1L
	};
protected:
	void test(LPCTSTR str);
};

