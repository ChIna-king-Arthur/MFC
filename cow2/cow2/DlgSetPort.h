#pragma once
#include "afxwin.h"


// CDlgSetPort 对话框

class CDlgSetPort : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSetPort)

public:
	CDlgSetPort(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgSetPort();

// 对话框数据
	enum { IDD = IDD_DLG2_SetPort };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButaddport();
	afx_msg void OnBnClickedButDelprot();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CComboBox m_combo;
	afx_msg void OnCbnSelchangeCombo1();
	int nSel;
	afx_msg void OnBnClickedButchange();
};
