
// cow2.h : cow2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号
#include "AdoSql.h"



typedef struct MYPARMS
{
	SOCKET sock;
	char* pChar;
	CString strPar;
	int	nPar;
} MyParams;
// Ccow2App:
// 有关此类的实现，请参阅 cow2.cpp
//

class Ccow2App : public CWinAppEx
{
public:
	Ccow2App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
public:
    MyParams* m_Params;
	CAdoSql* m_sql;
};

extern Ccow2App theApp;
