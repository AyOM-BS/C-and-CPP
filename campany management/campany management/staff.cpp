#include "staff.h"

void staff::showInfo()
{
	cout << "职工编号：" << Id
		<< "\t职工姓名：" << Name
		<< "\t岗位：" << getDeptName()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}
string staff::getDeptName()
{
	return string("员工");
}
staff::staff(string n, int id, int depid)
{
	Name = n;
	Id = id;
	DptId = depid;
}