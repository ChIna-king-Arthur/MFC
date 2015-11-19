#pragma once
#include "afxwin.h"
#include "tchart1.h"


// CDlgDataView 对话框

class CDlgDataView : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgDataView)

public:
	CDlgDataView(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgDataView();

// 对话框数据
	enum { IDD = IDD_DLG3DataView };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_combo;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButsearch();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	CTchart1 m_TeeChart;
	int m_Radio0;
	CString strNode;
};
