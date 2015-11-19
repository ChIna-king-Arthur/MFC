#pragma once
#include "afxwin.h"


// CDlgSetGate 对话框

class CDlgSetGate : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSetGate)

public:
	CDlgSetGate(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgSetGate();

// 对话框数据
	enum { IDD = IDD_DLG2_SetGate };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButStartgprs();
	void editAppend(CString strData);
	CEdit m_ShowError;
	afx_msg void OnBnClickedButingprs();
};
