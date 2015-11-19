// DlgInData.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgInData.h"
#include "afxdialogex.h"


// CDlgInData 对话框

IMPLEMENT_DYNAMIC(CDlgInData, CDialogEx)

CDlgInData::CDlgInData(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgInData::IDD, pParent)
{

}

CDlgInData::~CDlgInData()
{
}

void CDlgInData::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgInData, CDialogEx)
END_MESSAGE_MAP()


// CDlgInData 消息处理程序
