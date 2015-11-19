// BeginDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "BeginDlg.h"
#include "afxdialogex.h"
#include "AdoSql.h"
#include "Global.h"


// CBeginDlg 对话框

IMPLEMENT_DYNAMIC(CBeginDlg, CDialogEx)

CBeginDlg::CBeginDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CBeginDlg::IDD, pParent)
{
	m_F =pParent;///保存父窗口指针
}

CBeginDlg::~CBeginDlg()
{
}

void CBeginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	SetDlgItemText(IDC_EDIT_id,"admin");
	SetDlgItemText(IDC_EDIT_password,"141516");
// 	CAdoSql sql;
// 	sql.DIYCreatDateBase();
// 	sql.DIYCreatTable();
// 	sql.DIYInsertName("admin","141516");
// 	sql.DIYGetInfoOfUser();
// 	sql.DIYCrestCowInfoTable();
// 	sql.DIYGetCowInfo();
}


BEGIN_MESSAGE_MAP(CBeginDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUT_Quit, &CBeginDlg::OnBnClickedButQuit)
	ON_WM_SYSCOMMAND(WM_CLOSE,&&CBeginDlg::OnCancel())
	ON_BN_CLICKED(IDC_BUT_Login, &CBeginDlg::OnBnClickedButLogin)
END_MESSAGE_MAP()


// CBeginDlg 消息处理程序
void CBeginDlg::ShowSplashScreen(CWnd* pParentWnd)
{
	//CBeginDlg c_BeginDlg;
	//c_BeginDlg.DoModal();
}


void CBeginDlg::OnBnClickedButQuit()
{
	OnCancel();// TODO: 在此添加控件通知处理程序代码
}
void CBeginDlg::OnCancel(void)////处理函数
{
	//m_F->DestroyWindow();
	exit(0);
}

void CBeginDlg::OnBnClickedButLogin()
{

	CString str_password;
	GetDlgItemText(IDC_EDIT_id,str_id);
	GetDlgItemText(IDC_EDIT_password,str_password);
	int num=0;
	for (int i=0;i<50;i++)
	{
		if (str_id==str_UserName[i]&&str_password==str_Pwd[i])
		{
			if(str_id=="admin")
			{
				UserFlag=true;
			}
			//AfxMessageBox("登陆成功");
			SetDlgItemText(IDC_EDIT_id,"");
			SetDlgItemText(IDC_EDIT_password,"");
			OnOK();
			num--;
		}
		num++;
	}
	if (num==50)
	{
		//AfxMessageBox("用户名或密码错误请重新输入");
	}

}
