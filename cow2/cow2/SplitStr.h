#pragma once


// CSplitStr

class CSplitStr : public CWnd
{
	DECLARE_DYNAMIC(CSplitStr)
private:
	//切分的标志符号
	CString m_sSplitFlag;
	//连续的切分的标志符号当成一个标志处理
	BOOL m_bSequenceAsOne;
	//被切分的文本
	CString m_sData;
public:
	CSplitStr();
	virtual ~CSplitStr();
	//得到切分好的文本串
	void GetSplitStrArray(CStringArray &array);
	//得到被切分的文本
	CString GetData();
	//设置被切分的文本
	void SetData(CString sData);
	//得到切分参数
	BOOL GetSequenceAsOne() {return m_bSequenceAsOne;};
	//设置切分参数
	void SetSequenceAsOne(BOOL bSequenceAsOne) {m_bSequenceAsOne = bSequenceAsOne;};
	//得到切分标志
	CString GetSplitFlag() {return m_sSplitFlag;};
	//设置切分标志
	void SetSplitFlag(CString sSplitFlag) {m_sSplitFlag = sSplitFlag;};

protected:
	DECLARE_MESSAGE_MAP()
};


