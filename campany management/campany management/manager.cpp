#include "manager.h"

void manager::showInfo()
{
	cout << "职工编号：" << Id
		<< "\t职工姓名：" << Name
		<< "\t岗位：" << getDeptName()
		<< "\t岗位职责：完成老板交给的任务，分配任务给员工" << endl;
}
string manager::getDeptName()
{
	return string("经理");
}
manager::manager(string n, int id, int depid)
{
	Name = n;
	Id = id;
	DptId = depid;
}