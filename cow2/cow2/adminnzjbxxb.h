// adminnzjbxxb.h : Cadminnzjbxxb 的声明

#pragma once

// 代码生成在 2015年3月16日, 19:55

class Cadminnzjbxxb : public CRecordset
{
public:
	Cadminnzjbxxb(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(Cadminnzjbxxb)

// 字段/参数数据

// 以下字符串类型(如果存在)反映数据库字段(ANSI 数据类型的 CStringA 和 Unicode
// 数据类型的 CStringW)的实际数据类型。
//  这是为防止 ODBC 驱动程序执行可能
// 不必要的转换。如果希望，可以将这些成员更改为
// CString 类型，ODBC 驱动程序将执行所有必要的转换。
// (注意: 必须使用 3.5 版或更高版本的 ODBC 驱动程序
// 以同时支持 Unicode 和这些转换)。

	CStringA	m_nzbh;
	// unsupported	m_birth;
	long	m_zb;
	CStringA	m_jbqbh;
	CStringA	m_mnbh;
	CStringA	m_fnbh;
	double	m_cszl;
	double	m_rczl;
	// unsupported	m_rcrq;
	CStringA	m_pz;
	CStringA	m_tzms;
	CLongBinary	m_pic1;
	CLongBinary	m_pic2;
	CLongBinary	m_pic3;
	CLongBinary	m_pic4;
	CLongBinary	m_pic5;
	CStringA	m_bz;

// 重写
	// 向导生成的虚函数重写
	public:
	virtual CString GetDefaultConnect();	// 默认连接字符串

	virtual CString GetDefaultSQL(); 	// 记录集的默认 SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX 支持

// 实现
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};


