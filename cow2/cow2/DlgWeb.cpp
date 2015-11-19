// DlgWeb.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgWeb.h"
#include "afxdialogex.h"
#include <afxinet.h>


// CDlgWeb 对话框

IMPLEMENT_DYNAMIC(CDlgWeb, CDialogEx)

CDlgWeb::CDlgWeb(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgWeb::IDD, pParent)
{

}

CDlgWeb::~CDlgWeb()
{
}

void CDlgWeb::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EXPLORER1, m_web);
	m_web.Navigate("http://map.qq.com/", NULL, NULL, NULL, NULL);
}


BEGIN_MESSAGE_MAP(CDlgWeb, CDialogEx)
END_MESSAGE_MAP()


// CDlgWeb 消息处理程序
