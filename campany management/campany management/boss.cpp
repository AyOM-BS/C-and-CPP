#include "boss.h"

void boss::showInfo()
{
	cout << "职工编号：" << Id
		<< "\t职工姓名：" << Name
		<< "\t岗位：" << getDeptName()
		<< "\t岗位职责：管理公司" << endl;
}
string boss::getDeptName()
{
	return string("老板");
}
boss::boss(string n, int id, int depid)
{
	Name = n;
	Id = id;
	DptId = depid;
}