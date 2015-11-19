#pragma once
#include "afxcmn.h"


// CDlgAllUser 对话框

class CDlgAllUser : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgAllUser)

public:
	CDlgAllUser(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgAllUser();

// 对话框数据
	enum { IDD = IDD_DLG_AllUser };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_UserList;
};
