// adminnzjbxxb.h : Cadminnzjbxxb 类的实现



// Cadminnzjbxxb 实现

// 代码生成在 2015年3月16日, 19:55

#include "stdafx.h"
#include "adminnzjbxxb.h"
IMPLEMENT_DYNAMIC(Cadminnzjbxxb, CRecordset)

Cadminnzjbxxb::Cadminnzjbxxb(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_nzbh = "";
	m_zb = 0;
	m_jbqbh = "";
	m_mnbh = "";
	m_fnbh = "";
	m_cszl = 0.0;
	m_rczl = 0.0;
	m_pz = "";
	m_tzms = "";
	m_pic1;
	m_pic2;
	m_pic3;
	m_pic4;
	m_pic5;
	m_bz = "";
	m_nFields = 17;
	m_nDefaultType = dynaset;
}
//#error 安全问题：连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
// CString Cadminnzjbxxb::GetDefaultConnect()
// {
// //	return _T("DSN=mngl;UID=admin;PWD=123098789521;Start=D:\\mfc\x5de5\x4f5c\\asa\\\x65b0\x5efa\x6587\x4ef6\x5939\\dbeng\\dbeng8.exe -d -c8m;DatabaseFile=D:\\mfc\x5de5\x4f5c\\asa\\mngl.db;DatabaseName=mngl;EngineName=mngl;AutoStop=YES;Integrated=No;Debug=NO;DisableMultiRowFetch=NO;Compress=NO");
// }

CString Cadminnzjbxxb::GetDefaultSQL()
{
	return _T("[admin].[nzjbxxb]");
}

void Cadminnzjbxxb::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Text(pFX, _T("[nzbh]"), m_nzbh);
	RFX_Long(pFX, _T("[zb]"), m_zb);
	RFX_Text(pFX, _T("[jbqbh]"), m_jbqbh);
	RFX_Text(pFX, _T("[mnbh]"), m_mnbh);
	RFX_Text(pFX, _T("[fnbh]"), m_fnbh);
	RFX_Double(pFX, _T("[cszl]"), m_cszl);
	RFX_Double(pFX, _T("[rczl]"), m_rczl);
	RFX_Text(pFX, _T("[pz]"), m_pz);
	RFX_Text(pFX, _T("[tzms]"), m_tzms);
	RFX_LongBinary(pFX, _T("[pic1]"), m_pic1);
	RFX_LongBinary(pFX, _T("[pic2]"), m_pic2);
	RFX_LongBinary(pFX, _T("[pic3]"), m_pic3);
	RFX_LongBinary(pFX, _T("[pic4]"), m_pic4);
	RFX_LongBinary(pFX, _T("[pic5]"), m_pic5);
	RFX_Text(pFX, _T("[bz]"), m_bz);

}
/////////////////////////////////////////////////////////////////////////////
// Cadminnzjbxxb 诊断

#ifdef _DEBUG
void Cadminnzjbxxb::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cadminnzjbxxb::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


