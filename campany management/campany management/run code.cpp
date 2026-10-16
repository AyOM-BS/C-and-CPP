#include "worker manager.h"
#include "worker.h"
#include "staff.h"
#include "manager.h"
#include "boss.h"

int main()
{
	WorkerManager wm;
	int choice;
	while (1)
	{
		wm.ShowMenu();
		cin >> choice;
		switch (choice)
		{
		case 0:
			cout << "退出管理程序" << endl;
			wm.ExitSystem();
			break;
		case 1:
			cout << "增加职工信息" << endl;
			wm.AddWorker();
			break;
		case 2:
			cout << "显示职工信息" << endl;
			wm.show();
			break;
		case 3:
			cout << "删除离职职工" << endl;
			int id3;
			cout << "请输入要删除的职工编号: ";
			cin >> id3;
			wm.Delete(id3);
			break;
		case 4:
			cout << "修改职工信息" << endl;
			int id4;
			cout << "请输入要修改的职工编号: ";
			cin >> id4;
			wm.Modify(id4);
			break;
		case 5:
			cout << "查找职工信息" << endl;
			wm.FindWorker();
			break;
		case 6:
			cout << "按照编号排序" << endl;
			wm.sort();
			break;
		case 7:
			cout << "清空所有文档" << endl;
			wm.ClearFile();
			break;
		default:
			cout << "输入有误，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	return 0;
}