#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// CDlgSetServer 对话框

class CDlgSetServer : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSetServer)

public:
	CDlgSetServer(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgSetServer();

// 对话框数据
	enum { IDD = IDD_DLG2_SetSevers };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButLanset();
	CIPAddressCtrl m_ipAddr;
	CComboBox m_combo_Com;
	CComboBox m_combo_PTL;
	afx_msg void OnBnClickedButRs485();
	BOOL GetCom();
	afx_msg void OnCbnSelchangeComboCom();
	afx_msg void OnCbnSelchangeComboPtl();
};
