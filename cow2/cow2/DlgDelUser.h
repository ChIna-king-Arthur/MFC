#pragma once
#include "afxwin.h"


// CDlgDelUser 对话框

class CDlgDelUser : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgDelUser)

public:
	CDlgDelUser(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgDelUser();

// 对话框数据
	enum { IDD = IDD_DLG_DelUser };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButDeluser();
	CComboBox m_combo;
	afx_msg void OnCbnSelchangeComboUser();
	int nSel; 
};
