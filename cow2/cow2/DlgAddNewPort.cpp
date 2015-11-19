// DlgAddNewPort.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgAddNewPort.h"
#include "afxdialogex.h"
#include "Global.h"
#include "AdoSql.h"

// CDlgAddNewPort 对话框

IMPLEMENT_DYNAMIC(CDlgAddNewPort, CDialogEx)

CDlgAddNewPort::CDlgAddNewPort(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgAddNewPort::IDD, pParent)
{

}

CDlgAddNewPort::~CDlgAddNewPort()
{
}

void CDlgAddNewPort::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgAddNewPort, CDialogEx)
	ON_BN_CLICKED(IDC_BUT_addPort, &CDlgAddNewPort::OnBnClickedButaddport)

END_MESSAGE_MAP()


// CDlgAddNewPort 消息处理程序


void CDlgAddNewPort::OnBnClickedButaddport()
{
	CString str,str_id;
	GetDlgItemText(IDC_EDIT_Port,str);
	GetDlgItemText(IDC_EDIT_Cow,str_id);

	if (str.IsEmpty() || str_id.IsEmpty() )
	{
		AfxMessageBox("请输入节点号和奶牛耳标号");
	} 
	else
	{
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
		for (int i=0;i<20;i++)
		{
			//if (str==node[i] || str_id==cowName[i])
			if (str==node[i])
			{
				AfxMessageBox("节点号已经存在");
				str="";
				str_id="";
				break;
			} 
		}
		if (str.IsEmpty() || str_id.IsEmpty() )
		{

		} 
		else
		{
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
		
		node[PortNum]=str;
		cowName[PortNum]=str_id;
		PortNum++;
		CAdoSql sql;
		sql.DIYCreatCowTable(str);
		sql.DIYInsertCowInfo(str,str_id);
		sql.DIYTnsertCowMysql(str,str_id);
		AfxMessageBox("添加成功");
		}
	}
	// TODO: 在此添加控件通知处理程序代码
}


