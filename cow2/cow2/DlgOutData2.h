#pragma once


// CDlgOutData2 对话框

class CDlgOutData2 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgOutData2)

public:
	CDlgOutData2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgOutData2();

// 对话框数据
	enum { IDD = IDD_DLG3OutData2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
