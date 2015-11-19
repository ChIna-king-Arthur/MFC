// DlgData.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgData.h"
#include "afxdialogex.h"
#include "Global.h"
#include "AdoSql.h"


// CDlgData 对话框

IMPLEMENT_DYNAMIC(CDlgData, CDialogEx)

CDlgData::CDlgData(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgData::IDD, pParent)
{

}

CDlgData::~CDlgData()
{
}

void CDlgData::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
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
	nSel=-1;
	DDX_Control(pDX, IDC_LIST_User, m_CowDataList);
	CRect rect;   
	// 获取编程语言列表视图控件的位置和大小   
	m_CowDataList.GetClientRect(&rect);  
	// 为列表视图控件添加全行选中和栅格风格   
	m_CowDataList.SetExtendedStyle(m_CowDataList.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES); 

	m_CowDataList.InsertColumn(0, _T("数据时间"), LVCFMT_CENTER, rect.Width()/2, 0);   
	m_CowDataList.InsertColumn(1, _T("活动量"), LVCFMT_CENTER, rect.Width()/2, 1);
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_dateCtrl);
}


BEGIN_MESSAGE_MAP(CDlgData, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDlgData::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUT_search, &CDlgData::OnBnClickedButsearch)
	ON_BN_CLICKED(IDC_BUT_del, &CDlgData::OnBnClickedButdel)
	ON_BN_CLICKED(IDC_BUTTON1, &CDlgData::OnBnClickedButton1)
END_MESSAGE_MAP()


// CDlgData 消息处理程序


void CDlgData::OnCbnSelchangeCombo1()
{
	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_combo.GetCurSel();   
	// 根据选中项索引获取该项字符串   
	m_combo.GetLBText(nSel, strNode);
	// 将组合框中选中的字符串显示到IDC_SEL_WEB_EDIT编辑框中   
	SetDlgItemText(IDC_EDIT_Cow,cowName[nSel]);// TODO: 在此添加控件通知处理程序代码
}


void CDlgData::OnBnClickedButsearch()
{
	CAdoSql sql;
	CButton* pBtn = (CButton*)GetDlgItem(IDC_CHECK_day);
	int state = pBtn->GetCheck();
	if (state==1)
	{
		CTime m_date;
		m_dateCtrl.GetTime(m_date); 
		CString strdata=m_date.Format("%Y/%m/%d");
		sql.DIYGetCowDataByDay(strNode,strdata.Right(8));
	} 
	else
	{
		sql.DIYGetCowData(strNode);
	}
	
	POSITION rPos1,rPos2;
	rPos1 = ListCowData.GetHeadPosition();
	rPos2 = ListCowDataTime.GetHeadPosition();
	if (nSel==-1)
	{
		AfxMessageBox("请选择节点");
	} 
	else
	{
		m_CowDataList.DeleteAllItems();
		int i=0;
		while (rPos1 != NULL)
		{
			m_CowDataList.InsertItem(i, (ListCowDataTime.GetNext(rPos2)));   
			m_CowDataList.SetItemText(i, 1, (ListCowData.GetNext(rPos1))); 
			i++;
		}
	}
	// TODO: 在此添加控件通知处理程序代码
}


void CDlgData::OnBnClickedButdel()
{
	CAdoSql sql;
	sql.DIYDelTable(strNode);// TODO: 在此添加控件通知处理程序代码
}


void CDlgData::OnBnClickedButton1()
{
	if ( m_CowDataList.GetItemCount()<= 0 )
	{
		AfxMessageBox("列表中没有记录需要保存！");
		return;
	}
	//打开另存为对话框 ，需要包含 #include <Afxdlgs.h>
	CFileDialog dlg( FALSE, 
		"xls", 
		"节点", 
		OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,
		"Excel 文件(*.xls)|*.xls||");
	dlg.m_ofn.lpstrTitle = "文件列表另存为";

	if (dlg.DoModal() != IDOK)
		return;
	CString strFilePath;
	//获得文件路径名
	strFilePath = dlg.GetPathName();
	//判断文件是否已经存在，存在则删除重建
	DWORD dwRe = GetFileAttributes(strFilePath);
	if ( dwRe != (DWORD)-1 )
	{
		DeleteFile(strFilePath);
	}

	CDatabase database;//数据库库需要包含头文件 #include <afxdb.h>
	CString sDriver = "MICROSOFT EXCEL DRIVER (*.XLS)"; // Excel驱动
	CString sSql,strInsert;

	TRY
	{
		// 创建进行存取的字符串
		sSql.Format("DRIVER={%s};DSN='';FIRSTROWHASNAMES=1;READONLY=FALSE;CREATE_DB=\"%s\";DBQ=%s",sDriver, strFilePath, strFilePath);

		// 创建数据库 (既Excel表格文件)
		if( database.OpenEx(sSql,CDatabase::noOdbcDialog) )
		{
			//获得列别框总列数
			int iColumnNum,iRowCount;
			LVCOLUMN lvCol;
			CString strColName; //用于保存列标题名称
			int i,j; //列、行循环参数

			iColumnNum = m_CowDataList.GetHeaderCtrl()->GetItemCount();
			iRowCount = m_CowDataList.GetItemCount();

			sSql = " CREATE TABLE DSO_DX ( ";
			strInsert = " INSERT INTO DSO_DX ( " ;
			//获得列标题名称
			lvCol.mask = LVCF_TEXT; //必需设置，说明LVCOLUMN变量中pszText参数有效
			lvCol.cchTextMax = 32; //必设，pszText参数所指向的字符串的大小
			lvCol.pszText = strColName.GetBuffer(32); //必设，pszText 所指向的字符串的实际存储位置。
			//以上三个参数设置后才能通过 GetColumn()函数获得列标题的名称
			for( i=0 ; i< iColumnNum ; i++ )
			{
				if ( !(m_CowDataList.GetColumn(i,&lvCol)) )
					return;
				if ( i<iColumnNum-1 )
				{
					sSql = sSql + lvCol.pszText + " TEXT , ";
					strInsert = strInsert + lvCol.pszText + " , ";
				}
				else
				{
					sSql = sSql + lvCol.pszText + " TEXT ) ";
					strInsert = strInsert + lvCol.pszText + " )  VALUES ( ";
				}
			}
			//创建Excel表格文件
			database.ExecuteSQL(sSql);

			//循环提取记录并插入到EXCEL中
			sSql = strInsert;
			char chTemp[33];
			for ( j=0 ; j<iRowCount ; j++ )
			{
				memset(chTemp,0,33);
				for ( i=0 ; i<iColumnNum ; i++ )
				{
					m_CowDataList.GetItemText(j,i,chTemp,33);
					if ( i < (iColumnNum-1) )
					{
						sSql = sSql + "'" + chTemp + "' , ";
					}
					else
					{
						sSql = sSql + "'" + chTemp + "' ) ";
					}
				}
				//将记录插入到表格中
				database.ExecuteSQL(sSql);
				sSql = strInsert; 
			}
		}     

		// 关闭Excel表格文件
		database.Close();

		AfxMessageBox("保存查询结果为Excel文件成功！");
	}
	CATCH_ALL(e)
	{
		//错误类型很多，根据需要进行报错。
		AfxMessageBox("Excel文件保存失败。");
	}
	END_CATCH_ALL;// TODO: 在此添加控件通知处理程序代码
}
