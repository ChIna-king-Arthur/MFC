#include "stdafx.h"
#include "stdafx.h"

extern bool refFlagTime;
extern bool sedFlag;//发送数据标志位
extern int  reftime;  //接受数据时间间隔

extern int  setNode;//节点参数发送节点号
extern bool nodeFlag;//节点工作参数发送标志位
extern bool nodeFlagSuccess;//节点工作参数发送成功标志位

//参数设置
extern CString  nodeUp;   //dlg1的节点上限 
extern CString  nodeUpDelayed;//dlg1的节点上限延时
extern CString  nodeDown;//dlg1的节点下限
extern CString  nodeDownDelayed;//dlg1的节点下限延时
extern CString  str_dbname;//数据库表名  cow+当前时间时分秒
extern CString  str_TableName;
//控件动态显示利用 控件的显示和隐藏的语句
extern CString fileName;//保存数据文件名
extern CString node[999];//添加节点的数组
extern CString cowName[999];//节点1对应的奶牛编号
extern CString str_getTime;
extern CString str_UserName[999];
extern CString str_Pwd[999];
extern bool UserFlag;
extern CString str_Ip;//Ip地址
extern CString	str_Port;//端口号
extern CString str_id;
extern int PortNum;//
extern CString Com;//com口号
extern CString PTY;//波特率
extern CStringList  ListCowData;//
extern CStringList ListCowDataTime;//