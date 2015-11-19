#include "StdAfx.h"
#include "StdAfx.h"
bool sedFlag=false;
bool refFlagTime=false;//节点获取数据的间隔设置
bool nodeFlag=false;
bool nodeFlagSuccess=false;

int reftime;
CString  nodeUp="";   //dlg1的节点上限 
CString  nodeUpDelayed="";//dlg1的节点上限延时
CString  nodeDown="";//dlg1的节点下限
CString  nodeDownDelayed="";//dlg1的节点下限延时
CString  str_dbname;
CString str_TableName=(CTime::GetCurrentTime()).Format("cow%Y%m%d");
CString fileName;
CString node[999];
CString cowName[999];
CString str_getTime;

CString str_UserName[999];
CString str_Pwd[999];
bool UserFlag=false;
CString str_Ip;
CString str_Port;
CString str_id;//当前登录的用户
int PortNum=0;
CString Com;//COM口号
CString PTY;//波特率
CStringList  ListCowData;
CStringList ListCowDataTime;
