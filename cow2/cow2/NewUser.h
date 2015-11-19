#pragma once


// CNewUser 对话框

class CNewUser : public CDialogEx
{
	DECLARE_DYNAMIC(CNewUser)

public:
	CNewUser(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CNewUser();

// 对话框数据
	enum { IDD = IDD_DLG_NewUser };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButAdduser();
};
