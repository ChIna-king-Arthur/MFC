#pragma once
#define WM_USERMESSAGE WM_USER+101
class CAdoSql
{
public:
	CAdoSql(void);
	~CAdoSql(void);
public:
	bool DIYUseSQL(CString strOrder);//使用数据库
	void DIYInsertName(CString name,CString pwd);//插入用户密码
	void DIYCreatDateBase();//创建数据库
	void DIYCreatTable();//创建用户数据表
	void DIYGetInfoOfUser();
	void DIYCreatCowTable(CString CowNode);//节点表
	void DIYCrestCowInfoTable();//奶牛信息表
	void DIYGetCowInfo();
	void DIYInsertCowInfo(CString node,CString cow);//插入奶牛信息
	bool DIYInsertCowData(CString node,CString data,CString strtime,CString time);//插入活动量数据
	void DIYGetCowData(CString node);//获取节点数据
	void DIYDeleteCowData(CString node);//删除奶牛节点号
	bool DIYUpdateCowInfo(CString node,CString cowName);//跟新奶牛信息
	void DIYTnsertASA(CString id,CString date,CString time,CString data);
	void DIYGetASA(CString strOrder);
	CString DIYTransfrom(char buf);//网口数据处理
	void DIYDelTable(CString num);
	void DIYTnsertCowMysql(CString id,CString cowID);
	void DIYUpdateCowMysql(CString id,CString cowID);
	void DIYTnsertMysql(CString id,CString date,CString time,CString data);
	void DIYADOMysql(CString id,CString date,CString time,CString data);
	void DIYGetCowDataByDay(CString node,CString time);
	void DIYADOMysqlorder(CString id,CString date,CString time,CString data);
	void SaveLog(CString strText);
};

