// DlgDataView.cpp : 实现文件
//

#include "stdafx.h"
#include "cow2.h"
#include "DlgDataView.h"
#include "afxdialogex.h"
#include "Global.h"
#include "CSeries.h" 
#include "CAxis.h"
#include "CAxes.h"
#include "CLegend.h"
#include "AdoSql.h"


// CDlgDataView 对话框

IMPLEMENT_DYNAMIC(CDlgDataView, CDialogEx)

CDlgDataView::CDlgDataView(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgDataView::IDD, pParent)
	, m_Radio0(0)
{

}

CDlgDataView::~CDlgDataView()
{
}

void CDlgDataView::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_combo);

	for (int i=0;i<999;i++)
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
	m_Radio0=0;
	DDX_Control(pDX, IDC_TCHART1, m_TeeChart);
	((CButton *)GetDlgItem(IDC_RADIO1))->SetCheck(TRUE);
}


BEGIN_MESSAGE_MAP(CDlgDataView, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDlgDataView::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUT_search, &CDlgDataView::OnBnClickedButsearch)
	ON_BN_CLICKED(IDC_RADIO1, &CDlgDataView::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CDlgDataView::OnBnClickedRadio2)
END_MESSAGE_MAP()


// CDlgDataView 消息处理程序


void CDlgDataView::OnCbnSelchangeCombo1()
{
	int nSel;
	// 获取组合框控件的列表框中选中项的索引   
	nSel = m_combo.GetCurSel();   
	// 根据选中项索引获取该项字符串   
	m_combo.GetLBText(nSel, strNode);   
	// 将组合框中选中的字符串显示到IDC_SEL_WEB_EDIT编辑框中   
	SetDlgItemText(IDC_EDIT_Cow,cowName[nSel]);
}


void CDlgDataView::OnBnClickedButsearch()
{
	
	CAdoSql sql;
	sql.DIYGetCowData(strNode);
	POSITION rPos1,rPos2;
	rPos1 = ListCowData.GetHeadPosition();
	rPos2 = ListCowDataTime.GetHeadPosition();
	if(m_Radio0==0)
	{
	CSeries barSeries = (CSeries)m_TeeChart.Series(1);
	barSeries.Clear();
    CSeries lineSeries = (CSeries)m_TeeChart.Series(0);
	lineSeries.Clear();
	int i=0;
	while (rPos1 != NULL)
		{
			lineSeries.AddXY(i,_ttoi(ListCowData.GetNext(rPos1)),ListCowDataTime.GetNext(rPos2),0);
			i++;
		}
	}
	if(m_Radio0==1)
	{
		CSeries barSeries = (CSeries)m_TeeChart.Series(1);
		barSeries.Clear();
		CSeries lineSeries = (CSeries)m_TeeChart.Series(0);
		lineSeries.Clear();
		int i=0;
		while (rPos1 != NULL)
		{
			barSeries.AddXY(i,_ttoi(ListCowData.GetNext(rPos1)),ListCowDataTime.GetNext(rPos2),0);
			i++;
		}
	}
}




void CDlgDataView::OnBnClickedRadio1()
{
	m_Radio0=0;// TODO: 在此添加控件通知处理程序代码
}


void CDlgDataView::OnBnClickedRadio2()
{
	m_Radio0=1;// TODO: 在此添加控件通知处理程序代码
}
