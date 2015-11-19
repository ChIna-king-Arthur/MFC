#pragma once


// CBeginDlg 对话框

class CBeginDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CBeginDlg)

public:
	CBeginDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CBeginDlg();

// 对话框数据
	enum { IDD = IDD_DLG_Begin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	static void ShowSplashScreen(CWnd* pParentWnd);
	static CBeginDlg*c_BeginDlg;
	afx_msg void OnBnClickedButQuit();
	afx_msg void OnCancel();
	CWnd* m_F;
	afx_msg void OnBnClickedButLogin();
};
