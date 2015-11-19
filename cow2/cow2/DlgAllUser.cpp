// DlgAllUser.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgAllUser.h"
#include "afxdialogex.h"
#include "AdoSql.h"
#include "Global.h"


// CDlgAllUser 对话框

IMPLEMENT_DYNAMIC(CDlgAllUser, CDialogEx)

CDlgAllUser::CDlgAllUser(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgAllUser::IDD, pParent)
{

}

CDlgAllUser::~CDlgAllUser()
{
}

void CDlgAllUser::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_User, m_UserList);
	CRect rect;   
	// 获取编程语言列表视图控件的位置和大小   
	m_UserList.GetClientRect(&rect);  
	// 为列表视图控件添加全行选中和栅格风格   
	m_UserList.SetExtendedStyle(m_UserList.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES); 
	
	m_UserList.InsertColumn(0, _T("用户名"), LVCFMT_CENTER, rect.Width()/2, 0);   
	m_UserList.InsertColumn(1, _T("密码"), LVCFMT_CENTER, rect.Width()/2, 1);
	for (int i=0;i<50;i++)
	{  
		if (str_UserName[i].IsEmpty())
		{
		}
		else
		{
		m_UserList.InsertItem(i, (str_UserName[i]));   
		m_UserList.SetItemText(i, 1, (str_Pwd[i])); 
		}
	}
}


BEGIN_MESSAGE_MAP(CDlgAllUser, CDialogEx)
END_MESSAGE_MAP()


// CDlgAllUser 消息处理程序
