// NewUser.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "NewUser.h"
#include "afxdialogex.h"
#include "AdoSql.h"
#include "Global.h"

// CNewUser 对话框

IMPLEMENT_DYNAMIC(CNewUser, CDialogEx)

CNewUser::CNewUser(CWnd* pParent /*=NULL*/)
	: CDialogEx(CNewUser::IDD, pParent)
{

}

CNewUser::~CNewUser()
{
}

void CNewUser::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CNewUser, CDialogEx)
	ON_BN_CLICKED(IDC_BUT_AddUser, &CNewUser::OnBnClickedButAdduser)
END_MESSAGE_MAP()


// CNewUser 消息处理程序


void CNewUser::OnBnClickedButAdduser()
{
	CString str_id,str_password,str_password2;
	GetDlgItemText(IDC_EDIT_User,str_id);
	GetDlgItemText(IDC_EDIT_pwd,str_password);
	GetDlgItemText(IDC_EDIT_pwd2,str_password2);
	if (str_password==str_password2)
	{
		CAdoSql sql;
		sql.DIYInsertName(str_id,str_password);
		sql.DIYGetInfoOfUser();
		AfxMessageBox("添加成功");
	}
	else
	{
		AfxMessageBox("两次密码输入不一样");
	}
}
