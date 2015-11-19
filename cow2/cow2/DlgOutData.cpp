// DlgOutData.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgOutData.h"
#include "afxdialogex.h"
#include "DlgOutData2.h"
#include "AdoSql.h"


// CDlgOutData 对话框

IMPLEMENT_DYNAMIC(CDlgOutData, CDialogEx)

CDlgOutData::CDlgOutData(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgOutData::IDD, pParent)
{

}

CDlgOutData::~CDlgOutData()
{
}

void CDlgOutData::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_mylist);
}


BEGIN_MESSAGE_MAP(CDlgOutData, CDialogEx)
	ON_BN_CLICKED(IDC_BUT_OutData2, &CDlgOutData::OnBnClickedButOutdata2)
	ON_BN_CLICKED(IDC_BUT_ShowTable, &CDlgOutData::OnBnClickedButShowtable)
	ON_LBN_SELCHANGE(IDC_LIST1, &CDlgOutData::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUT_out, &CDlgOutData::OnBnClickedButout)
END_MESSAGE_MAP()


// CDlgOutData 消息处理程序


void CDlgOutData::OnBnClickedButOutdata2()
{
	CDlgOutData2 dlg;// TODO: 在此添加控件通知处理程序代码
	if(dlg.DoModal()==IDOK)
		Invalidate();
}


void CDlgOutData::OnBnClickedButShowtable()
{
// 	int a = m_mylist.GetCount();//总列数
// 
// 	for(int i=0;i<a;i++)
// 	{
// 		m_mylist.DeleteString(i);//删除ListBox 当前列
// 
// 	}
// 	try
// 	{
// 		CoInitialize(NULL);//com组件初始化  
// 		_ConnectionPtr pConn;//(__uuidof(Connection));
// 		_CommandPtr pComm;//(__uuidof(Command));;
// 		_RecordsetPtr pRst;//(__uuidof(Recordset));   
// 		pConn.CreateInstance(__uuidof(Connection));
// 		pComm.CreateInstance(__uuidof(Command));
// 		pRst.CreateInstance(__uuidof(Recordset));
// 		pConn->ConnectionString="Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=master;Data Source=WJ-20140605XBQL";
// 		pConn->Open("","","",-1);
// 		pRst=pConn->Execute("SELECT Name FROM db_Node..SysObjects Where XType='U' ORDER BY Name",NULL,adCmdText);
// 		_variant_t   vNum;  
// 		_bstr_t      bstr;  
// 
// 		while(!pRst->EndOfFile)
// 		{
// 			CString str="";
// 			vNum =pRst->GetCollect("Node");
// 			bstr = vNum;          
// 			str = (LPCSTR)bstr;
// 			m_mylist.AddString(_T(str));// 此处获得名称
// 			pRst->MoveNext();
// 		}
// 	}
// 	catch (_com_error& e)
// 	{
// 		CString strMsg;
// 		strMsg.Format(_T("错误描述：%s\n错误消息%s"), 
// 			(LPCTSTR)e.Description(),
// 			(LPCTSTR)e.ErrorMessage());
// 		AfxMessageBox("数据库操作错误"+strMsg);
// 	}// TODO: 在此添加控件通知处理程序代码// TODO: 在此添加控件通知处理程序代码
// 	//strTable="1";
}


void CDlgOutData::OnLbnSelchangeList1()
{
	int nCurSel;
	nCurSel = m_mylist.GetCurSel();           // 获取当前选中列表项   
	m_mylist.GetText(nCurSel, strTable);
	// TODO: 在此添加控件通知处理程序代码
}


void CDlgOutData::OnBnClickedButout()
{
	CString fileName,str_time,str;
	CTime tm=CTime::GetCurrentTime();//获取系统时间
	str_time=tm.Format("时间%H时%M分%m月%d日");
	GetDlgItemText(IDC_EDIT_Node,str);
	int i=str.GetLength();
	if (i==1)
	{
		str="节点000"+str;
	} 
	else
	{
		if (i==2)
		{
			str="节点00"+str;
		} 
		else
		{
			if (i==3)
			{
				str="节点0"+str;
			} 
		}
	}
	if (str.IsEmpty())
	{
		AfxMessageBox("请选择生成的数据表");
	}
	else
	{
		CString str_order;
		CFileDialog  Dlg(FALSE,NULL,(str+str_time),OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,"excel文件(*.xls)");
		if(Dlg.DoModal() == IDOK)
		{
			fileName = Dlg.GetPathName();
			fileName=fileName+".xls";
			str_order="exec sp_configure 'show advanced options', 1   RECONFIGURE   exec sp_configure 'Web Assistant Procedures', 1   RECONFIGURE  EXEC sp_makewebtask   @outputfile = '";
			str_order=str_order+fileName+"',   @query = 'Select  * from db_cows..";
			str_order=str_order+str+"',   @colheaders =1,   @FixedFont=0,@lastupdated=0,@resultstitle='节点数据'";
			CAdoSql sql;
			sql.DIYUseSQL(str_order);
			AfxMessageBox("导出成功");
		}
	}// TODO: 在此添加控件通知处理程序代码
}
