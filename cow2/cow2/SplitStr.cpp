// SplitStr.cpp : 实现文件
//

#include "stdafx.h"
#include "SplitStr.h"


// CSplitStr

IMPLEMENT_DYNAMIC(CSplitStr, CWnd)

CSplitStr::CSplitStr()
{
	SetData("");
	SetSequenceAsOne(TRUE);
	SetSplitFlag(",");
}

CSplitStr::~CSplitStr()
{
}


BEGIN_MESSAGE_MAP(CSplitStr, CWnd)
END_MESSAGE_MAP()

void CSplitStr::SetData( CString sData )
{
	m_sData = sData;
	m_sData.TrimLeft();
	m_sData.TrimRight();
}

CString CSplitStr::GetData()
{
	return m_sData;
}

void CSplitStr::GetSplitStrArray( CStringArray &array )
{
	CString sData = GetData();
	CString sSplitFlag = GetSplitFlag();
	if (sData.Right(1) != sSplitFlag) sData +=sSplitFlag;
	CString sTemp;
	int pos =-1;
	while ((pos=sData.Find(sSplitFlag,0)) != -1)
	{
		sTemp = sData.Left(pos);
		if (!GetSequenceAsOne())
		{
			array.Add(sTemp);
		}
		else
		{
			if (!sTemp.IsEmpty() && sTemp !="") ////连续的分隔符视为单个处理
			{
				array.Add(sTemp);
			}
		}
		sData = sData.Right(sData.GetLength() - pos - 1);
	}
}



// CSplitStr 消息处理程序


