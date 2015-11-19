#pragma once


// CDlgAddNewPort 对话框

class CDlgAddNewPort : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgAddNewPort)

public:
	CDlgAddNewPort(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgAddNewPort();

// 对话框数据
	enum { IDD = IDD_DLG2NewPort };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButaddport();
};
