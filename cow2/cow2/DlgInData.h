#pragma once


// CDlgInData 对话框

class CDlgInData : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgInData)

public:
	CDlgInData(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgInData();

// 对话框数据
	enum { IDD = IDD_DLG3InData };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
