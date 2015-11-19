// DlgSetGate.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgSetGate.h"
#include "afxdialogex.h"


// CDlgSetGate 对话框

IMPLEMENT_DYNAMIC(CDlgSetGate, CDialogEx)

CDlgSetGate::CDlgSetGate(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgSetGate::IDD, pParent)
{

}

CDlgSetGate::~CDlgSetGate()
{
}

void CDlgSetGate::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_Show, m_ShowError);
}


BEGIN_MESSAGE_MAP(CDlgSetGate, CDialogEx)
	ON_BN_CLICKED(IDC_BUT_StartGprs, &CDlgSetGate::OnBnClickedButStartgprs)
	ON_BN_CLICKED(IDC_BUT_inGprs, &CDlgSetGate::OnBnClickedButingprs)
END_MESSAGE_MAP()


// CDlgSetGate 消息处理程序


void CDlgSetGate::editAppend(CString strData)
{
		CString str,str_time;
		CTime tm=CTime::GetCurrentTime();//获取系统时间
		str_time=tm.Format("%H:%M:%S %m/%d");
		m_ShowError.SetSel(-1);
		m_ShowError.ReplaceSel(strData+" "+str_time+"\r\n");
		/*GetDlgItemText(IDC_EDIT_State,str); //IDC_EDIT是控件的ID
		str+=strData;
		str+=str_TableName+"\r\n";
		SetDlgItemText(IDC_EDIT_State,str);*/

}

void CDlgSetGate::OnBnClickedButStartgprs()
{
	editAppend("开始GPRS配置模式传输中断");// TODO: 在此添加控件通知处理程序代码
}


void CDlgSetGate::OnBnClickedButingprs()
{
	editAppend("进入Gprs配置");// TODO: 在此添加控件通知处理程序代码
}
