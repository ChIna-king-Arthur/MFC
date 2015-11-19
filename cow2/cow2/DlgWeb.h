#pragma once
#include "explorer1.h"


// CDlgWeb 对话框

class CDlgWeb : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgWeb)

public:
	CDlgWeb(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgWeb();

// 对话框数据
	enum { IDD = IDD_DLG_Web };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CExplorer1 m_web;
};
