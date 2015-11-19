#pragma once


// CDLGpwd 对话框

class CDLGpwd : public CDialogEx
{
	DECLARE_DYNAMIC(CDLGpwd)

public:
	CDLGpwd(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDLGpwd();
	_ConnectionPtr pConn;
	_CommandPtr pComm;
	_RecordsetPtr pRst;

// 对话框数据
	enum { IDD = IDD_DLG_pwd };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButChangepwd();
};
