// DlgSetPort.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgSetPort.h"
#include "afxdialogex.h"
#include "DlgAddNewPort.h"
#include "Global.h"
#include "AdoSql.h"

// CDlgSetPort 对话框

IMPLEMENT_DYNAMIC(CDlgSetPort, CDialogEx)

CDlgSetPort::CDlgSetPort(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgSetPort::IDD, pParent)
{

}

CDlgSetPort::~CDlgSetPort()
{
}

void CDlgSetPort::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	SetTimer(1,1000,NULL);
	DDX_Control(pDX, IDC_COMBO1, m_combo);
	for (int i=0;i<20;i++)
	{
		if (node[i].IsEmpty())
		{
			//continue;
		}
		else
		{
			m_combo.AddString(node[i]);
		}

	}
	
	
}


BEGIN_MESSAGE_MAP(CDlgSetPort, CDialogEx)
	ON_BN_CLICKED(IDC_BUT_addPort, &CDlgSetPort::OnBnClickedButaddport)
	ON_BN_CLICKED(IDC_BUT_DelProt, &CDlgSetPort::OnBnClickedButDelprot)
	ON_WM_TIMER()
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDlgSetPort::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUT_change, &CDlgSetPort::OnBnClickedButchange)
END_MESSAGE_MAP()


// CDlgSetPort 消息处理程序


void CDlgSetPort::OnBnClickedButaddport()
{
	CDlgAddNewPort dlg;
	if(dlg.DoModal()==IDCANCEL)
	{
		m_combo.ResetContent();
		for (int i=0;i<20;i++)
		{
			if (node[i].IsEmpty())
			{
				//continue;
			}
			else
			{
				m_combo.AddString(node[i]);
			}

		}
	}
		//Invalidate();// TODO: 在此添加控件通知处理程序代码
}


void CDlgSetPort::OnBnClickedButDelprot()
{
	CString str;
	GetDlgItemText(IDC_EDIT_Node,str);
	int i=str.GetLength();
	if (i==1)
	{
		str="000"+str;
	} 
	else
	{
		if (i==2)
		{
			str="00"+str;
		} 
		else
		{
			if (i==3)
			{
				str="0"+str;
			} 
		}
	}
	if (str.IsEmpty())
	{
		AfxMessageBox("请选择要删除的节点");
	} 
	else
	{
		if(IDYES==AfxMessageBox("确认修改",MB_YESNO|MB_ICONQUESTION))    //弹出对话框判断是否删除节点
		{
			CAdoSql sql;
			sql.DIYDeleteCowData(str);
// 		for(int num=nSel;num<20;num++)
// 		{
			if (node[nSel].IsEmpty() || cowName[nSel].IsEmpty())
			{
			} 
			else
			{
// 			CString str_temp1,str_temp2; 
// 			node[num]="";
// 			str_temp1=node[num];
// 			node[num]=node[num+1];
// 			node[num+1]=str_temp1;
// 			cowName[num]="";
// 			str_temp2=cowName[num];
// 			cowName[num]=cowName[num+1];
// 			cowName[num+1]=str_temp2;
			CAdoSql sql;
			sql.DIYGetCowInfo();
			}
		m_combo.ResetContent();
		for (int i=0;i<20;i++)
		{
			if (node[i].IsEmpty())
			{
				//continue;
			}
			else
			{
				m_combo.AddString(node[i]);
			}
		}
	}// TODO: 在此添加控件通知处理程序代码
	}
	
}


void CDlgSetPort::OnTimer(UINT_PTR nIDEvent)
{
	CString str;
	str.Format("%d",PortNum);
	switch(nIDEvent)
	{
	case 1:
		{ 
			GetDlgItem(IDC_EDIT_PortNum)->SetWindowText(str);
			
				//m_combo.ResetContent();
			
			break;
		}
	case 2:
		{ 
			break;
		}
	default:
		break;
	}
	CDialogEx::OnTimer(nIDEvent);
}


void CDlgSetPort::OnCbnSelchangeCombo1()
{

	CString strWeb;
	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_combo.GetCurSel();   
	// 根据选中项索引获取该项字符串   
	m_combo.GetLBText(nSel, strWeb);   
	// 将组合框中选中的字符串显示到IDC_SEL_WEB_EDIT编辑框中   
	SetDlgItemText(IDC_EDIT_Node, strWeb);
	SetDlgItemText(IDC_EDIT_Cow,cowName[nSel]);
}


void CDlgSetPort::OnBnClickedButchange()
{
	CString strNode,strCowName;
	GetDlgItemText(IDC_EDIT_Node,strNode);// TODO: 在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT_ChangeCowName,strCowName);
	CAdoSql sql;
	sql.DIYUpdateCowInfo(strNode,strCowName);
	sql.DIYUpdateCowMysql(strNode,strCowName);
}
