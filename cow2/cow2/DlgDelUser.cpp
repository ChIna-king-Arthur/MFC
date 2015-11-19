// DlgDelUser.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgDelUser.h"
#include "afxdialogex.h"
#include "AdoSql.h"
#include "Global.h"


// CDlgDelUser 对话框

IMPLEMENT_DYNAMIC(CDlgDelUser, CDialogEx)

CDlgDelUser::CDlgDelUser(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgDelUser::IDD, pParent)
{
}

CDlgDelUser::~CDlgDelUser()
{
}

void CDlgDelUser::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO_User, m_combo);
	for (int i=0;i<50;i++)
	{
		if (str_UserName[i].IsEmpty())
		{
			//continue;
		}
		else
		{
			m_combo.AddString(str_UserName[i]);
		}

	}
}


BEGIN_MESSAGE_MAP(CDlgDelUser, CDialogEx)
	ON_BN_CLICKED(IDC_BUT_DelUser, &CDlgDelUser::OnBnClickedButDeluser)
	ON_CBN_SELCHANGE(IDC_COMBO_User, &CDlgDelUser::OnCbnSelchangeComboUser)
END_MESSAGE_MAP()


// CDlgDelUser 消息处理程序


void CDlgDelUser::OnBnClickedButDeluser()
{
	CString str;
	GetDlgItemText(IDC_SEL_EDIT,str);
	if(str.IsEmpty())
	{
		AfxMessageBox("请选择要删除的用户");
	}
	else
	{
		CString str_DelSql;
	str_DelSql="DELETE FROM Users WHERE 用户名 = '";
	str_DelSql=str_DelSql+str+"'";
	if(IDYES==AfxMessageBox("确认修改",MB_YESNO|MB_ICONQUESTION))    //弹出对话框判断是否删除节点
	{
		for (int i=0;i<50;i++)
		{
			if (str_UserName[i]=str)
			{
				str_UserName[i]="";
				CAdoSql sql;
				sql.DIYUseSQL(str_DelSql);
				sql.DIYGetInfoOfUser();
				m_combo.DeleteString(nSel);
				SetDlgItemText(IDC_SEL_EDIT,"");
				break;
			}
		}
	}
	}
	
}


void CDlgDelUser::OnCbnSelchangeComboUser()
{
	CString strWeb;
	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_combo.GetCurSel();   
	// 根据选中项索引获取该项字符串   
	m_combo.GetLBText(nSel, strWeb);   
	// 将组合框中选中的字符串显示到IDC_SEL_WEB_EDIT编辑框中   
	SetDlgItemText(IDC_SEL_EDIT, strWeb);// TODO: 在此添加控件通知处理程序代码
}
