
// cow2View.h : Ccow2View 类的接口
//

#pragma once

#include "resource.h"
#include "afxwin.h"
#include "mscomm1.h"
#include "tchart1.h"
#include "afxcmn.h"
#include <fstream>
#define ACCEPT_EVENT WM_USER+104
#define WM_USERMESSAGE WM_USER+101

typedef struct TIME
{
	CString id;
	CString data1;
	CString data2;
	CString data3;
	CString data4;
	CString year;
	CString mouth;
	CString day;
	CString hour;
	CString mint;
	CString scu;
}struct_time;



class Ccow2View : public CFormView
{
protected: // 仅从序列化创建
	Ccow2View();
	DECLARE_DYNCREATE(Ccow2View)

public:
	enum{ IDD = IDD_COW2_FORM };

// 特性
public:
	Ccow2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~Ccow2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	afx_msg LRESULT OnEvent(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT ReceiveMessage(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void Onpwd();
	afx_msg void OnNewuser();
	afx_msg void OnDeluser();
	afx_msg void OnAlluser();
	afx_msg void OnSetserver();
	afx_msg void OnSetgste();
	afx_msg void OnSetport();
	afx_msg void OnData();
	afx_msg void OnDataview();
	afx_msg void OnOutdata();
	afx_msg void OnIndata();
	afx_msg void On32775();
	void DIYConntSocket();
	SOCKET sersock;
	SOCKET clisock;
	SOCKET m_Client[100];
	int closeclisock;
	afx_msg void OnBnClickedButSocketclose();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CEdit m_ShowError;
	void editAppend(CString strData);
	afx_msg void OnBnClickedButOpencom();
	afx_msg void OnBnClickedButClosecom();
	CMscomm1 m_mscomm;
	DECLARE_EVENTSINK_MAP()
	void OnCommMscomm1();
	CString DIYTransfrom(char buf);
	CStatic m_StateLed;
	HICON m_hIconLedGreen;
	HICON m_hIconLedGray;
	int Str2Hex(CString str,CByteArray &data);
	char HexChar(char c);
	//afx_msg void On32801();

	afx_msg void OnBnClickedBtnReadhistory();
	afx_msg void OnBnClickedButStartgprs();
	afx_msg void OnBnClickedButStopgprs();
	afx_msg void OnBnClickedButingprs();
	afx_msg void OnBnClickedButoutgprs();
	afx_msg void OnBnClickedButSetgprs();
	afx_msg void OnBnClickedButreadgprsip();
	afx_msg void OnBnClickedButreadgprsport();
	void GprsOrder(CString input,int len);
	CString m_edit;
	afx_msg void OnBnClickedButsetgprsip();
	CString m_GprsIp;
	CString m_GprsPort;
	afx_msg void OnBnClickedButsetgprsport();
	afx_msg void OnBnClickedButSavegprs();
	afx_msg LRESULT OnSocketIOMsg(WPARAM wP, LPARAM lP);
	void GprsPressIP(CString a);
	void GprsPressPort(CString a);
	BOOL GetFreeClient(void);
	int iIndex;
	void SaveLog(CString strText);
};

#ifndef _DEBUG  // cow2View.cpp 中的调试版本
inline Ccow2Doc* Ccow2View::GetDocument() const
   { return reinterpret_cast<Ccow2Doc*>(m_pDocument); }
#endif

