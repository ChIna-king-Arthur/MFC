#pragma once
#include "afxwin.h"


// CDlgOutData 对话框

class CDlgOutData : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgOutData)

public:
	CDlgOutData(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgOutData();

// 对话框数据
	enum { IDD = IDD_DLG3OutData };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	CString strTable;//选择的数据表名
public:
	afx_msg void OnBnClickedButOutdata2();
	afx_msg void OnBnClickedButShowtable();
	CListBox m_mylist;
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnBnClickedButout();
};
