#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "afxdtctl.h"


// CDlgData 对话框

class CDlgData : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgData)

public:
	CDlgData(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgData();

// 对话框数据
	enum { IDD = IDD_DLG3Date };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	int nSel;
public:
	CComboBox m_combo;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButsearch();
	CListCtrl m_CowDataList;
	CString strNode;
	afx_msg void OnBnClickedButdel();
	CDateTimeCtrl m_dateCtrl;
	afx_msg void OnBnClickedButton1();
};
