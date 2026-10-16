#pragma once
#include "worker.h"
#include "boss.h"
#include "manager.h"
#include "staff.h"
#define FILENAME "worker.txt"
using namespace std;

class WorkerManager
{
public:
	WorkerManager();//构造函数

	void ShowMenu();//菜单

	void ExitSystem();//退出

	int WorkerNum;//职工人数
	worker** pwm;//职工数组指针
	//这样就提供了一种找职工的方式，用指针数组来访问
	//另一种是通过文件来访问，文件中存储了职工的基本信息
	bool IsExistID(int id);//判断职工是否存在
	void AddWorker();//增加职工
	void SaveFile();//保存修改文件

	void LoadFile();//加载文件--读文件和初始化职工数组
	int GetWorkerNum();//获取职工人数
	void init();//初始化职工数组

	void show();//展示职工信息

	bool IsExist(int id);//判断职工是否存在
	void Delete(int id);//删除职工

	void Modify(int id);//修改职工信息

	void FindWorker();//查找指定编号的职工信息

	void sort();//排序职工信息

	void ClearFile();//清空文件

	~WorkerManager();
};