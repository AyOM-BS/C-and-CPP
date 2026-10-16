#include "worker manager.h"
#include <fstream>
using namespace std;

WorkerManager::WorkerManager()
{
	WorkerNum = 0;
	pwm = NULL;
	LoadFile();
}

WorkerManager::~WorkerManager()
{
	for (int i = 0; i < WorkerNum; i++)
	{
		if (pwm[i] != NULL)
		{
			delete pwm[i];
			pwm[i] = NULL;
		}
	}
	WorkerNum = 0;
	delete [] pwm;
}

void WorkerManager::ShowMenu()
{
	cout << "**********************************" << endl;
	cout << "******* inuput your choice *******" << endl;
	cout << "********* 0. exit ****************" << endl;
	cout << "********* 1. add *****************" << endl;
	cout << "********* 2. show ****************" << endl;
	cout << "********* 3. delete **************" << endl;
	cout << "********* 4. modify **************" << endl;
	cout << "********* 5. find ****************" << endl;
	cout << "********* 6. sort ****************" << endl;
	cout << "********* 7. clear ***************" << endl;
	cout << "**********************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "exit system" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::SaveFile()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out | ios::trunc);
	for (int i = 0; i < WorkerNum; i++)
	{
		ofs << pwm[i]->Id << " "
			<< pwm[i]->Name << " "
			<< pwm[i]->DptId << " "
			<< endl;
	}
	ofs.close();
}

bool WorkerManager::IsExistID(int id)
{
	for (int i = 0; i < WorkerNum; i++)
	{
		if (pwm[i]->Id == id)
		{
			return true;
		}
	}
	return false;
}

void WorkerManager::AddWorker()
{
	cout << "input the number of workers to add:" << endl;
	int AddNum = 0;
	cin >> AddNum;
	if (AddNum > 0)
	{
		int NewNum = WorkerNum + AddNum;
		worker** newSpace = new worker * [NewNum];
		for (int i = 0; i < WorkerNum; i++)
		{
			newSpace[i] = pwm[i];
		}
		int id;
		string name;
		int dSelect;
		for (int i = 0; i < AddNum; i++)
		{
			previd:cout << "input " << i + 1 << " id" << endl;
			cin >> id;
			if (IsExistID(id))
			{
				cout << "error: id already exists, please input again" << endl;
				goto previd;
			}
			cout << "input " << i + 1 << " name" << endl;
			cin >> name;
		prev:
			cout << "choose" << endl;
			cout << "1. staff" << endl;
			cout << "2. manager" << endl;
			cout << "3. boss" << endl;
			cin >> dSelect;
			worker* pw = NULL;
			switch (dSelect)
			{
			case 1:
			{
				pw = new staff(name, id, 1);
				newSpace[WorkerNum + i] = pw;
				break;
			}
			case 2:
			{
				pw = new manager(name, id, 2);
				newSpace[WorkerNum + i] = pw;
				break;
			}
			case 3:
			{
				pw = new boss(name, id, 3);
				newSpace[WorkerNum + i] = pw;
				break;
			}
			default:
			{
				cout << "error: please choose again" << endl;
				system("pause");
				system("cls");
				goto prev;
			}
			}
		}
		WorkerNum = NewNum;
		pwm = newSpace;
		cout << "successed add " << AddNum << " workers" << endl;
		SaveFile();
		system("pause");
		system("cls");
	}
	else
	{
		cout << "error: invalid number of workers to add" << endl;
	}
}

int WorkerManager::GetWorkerNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	ifs.close();
	return num;
}

void WorkerManager::init()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (ifs.is_open())
	{
		int id, did, num = 0;
		string name;
		while (ifs >> id && ifs >> name && ifs >> did)
		{
			if (did == 1)
			{
				worker* pw = new staff(name, id, did);
				pwm[num] = pw;
			}
			else if (did == 2)
			{
				worker* pw = new manager(name, id, did);
				pwm[num] = pw;
			}
			else if (did == 3)
			{
				worker* pw = new boss(name, id, did);
				pwm[num] = pw;
			}
			num++;
		}
		ifs.close();
	}
}

void WorkerManager::LoadFile()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		//cout << "error: file not found" << endl;
	}
	else
	{
		if (ifs.get() == EOF)
		{
			//cout << "file is empty" << endl;
			ifs.close();
			pwm = NULL;
			WorkerNum = 0;
		}
		else
		{
			WorkerNum = GetWorkerNum();
			pwm = new worker * [WorkerNum];
			init();
		}
	}
}

void WorkerManager::show()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (ifs.is_open())
	{
		if (WorkerNum > 0)
		{
			int id, did;
			string name;
			int i = 0;
			while (ifs >> id && ifs >> name && ifs >> did)
			{
				pwm[i]->showInfo();
				i++;
			}
			cout << "successed show all workers" << endl;
		}
		else
		{
			cout << "error: file is empty" << endl;
		}
		system("pause");
		system("cls");
	}
	else
	{
		cout << "not found" << endl;
		system("pause");
		system("cls");
	}
}

bool WorkerManager::IsExist(int id)
{
	for (int i = 0; i < WorkerNum; i++)
	{
		if (pwm[i]->Id == id)
		{
			return true;
		}
	}
	return false;
}

void WorkerManager::Delete(int id)
{
	if (IsExist(id))
	{
		int subscript = 0;
		for (int i = 0; i < WorkerNum; i++)
		{
			if (pwm[i]->Id == id)
			{
				delete pwm[i];
				subscript = i;
				break;
			}
		}
		for(int i = subscript; i < WorkerNum - 1; i++)
		{
			pwm[i] = pwm[i + 1];
		}
		WorkerNum--;
		SaveFile();
		cout << "successed delete worker with id " << id << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "not found" << endl;
		system("pause");
		system("cls");
	}
}

void WorkerManager::Modify(int id)
{
	if (IsExist(id))
	{
		string name;
		int dSelect;
		int subscript = 0;
		for (int i = 0; i < WorkerNum; i++)
		{
			if (pwm[i]->Id == id)
			{
				name = pwm[i]->Name;
				delete pwm[i];
				subscript = i;
				break;
			}
		}
		cout << "input the new department for the worker" << endl;
	prev:
		cout << "choose" << endl;
		cout << "1. staff" << endl;
		cout << "2. manager" << endl;
		cout << "3. boss" << endl;
		cin >> dSelect;
		worker* pw = NULL;
		switch (dSelect)
		{
		case 1:
		{
			pw = new staff(name, id, 1);
			pwm[subscript] = pw;
			break;
		}
		case 2:
		{
			pw = new manager(name, id, 2);
			pwm[subscript] = pw;
			break;
		}
		case 3:
		{
			pw = new boss(name, id, 3);
			pwm[subscript] = pw;
			break;
		}
		default:
		{
			cout << "error: please choose again" << endl;
			system("pause");
			system("cls");
			goto prev;
		}
		}
		cout << "successed modify worker with id " << id << endl;
		SaveFile();
		system("pause");
		system("cls");
	}
	else
	{
		cout << "not found" << endl;
		system("pause");
		system("cls");
	}
}

void WorkerManager::FindWorker()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id, did, i = 0;
	string name;
	int mode;
	int flag = 0;
	cout << "choose find mode" << endl;
	cout << "1. find by id" << endl;
	cout << "2. find by name" << endl;
	cin >> mode;
	if (mode == 1)
	{
		//id≤È’“
		int ID;
		cout << "input the id to find" << endl;
		cin >> ID;
		while (ifs >> id && ifs >> name && ifs >> did)
		{
			if (id == ID)
			{
				pwm[i]->showInfo();
				flag = 1;
			}
			i++;
		}
		cout << "find by id" << endl;
		system("pause");
		system("cls");
	}
	else if (mode == 2)
	{
		string Name;
		cout << "input the name to find" << endl;
		cin >> Name;
		while(ifs >> id && ifs >> name && ifs >> did)
		{
			if (name == Name)
			{
				pwm[i]->showInfo();
				flag = 1;
			}
			i++;
		}
		cout << "find by name" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "error: invalid mode" << endl;
		system("pause");
		system("cls");
	}
	if(!flag)
	{
		cout << "not found" << endl;
		system("pause");
		system("cls");
	}
}

void WorkerManager::sort()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (ifs.is_open())
	{
		if (WorkerNum > 0)
		{
			cout << "select sort mode" << endl;
			cout << "1. up sort" << endl;
			cout << "2. down sort" << endl;
			int choice;
			cin >> choice;
			if (choice == 1)
			{
				int minIndex = 0;
				for (int j = 0; j < WorkerNum - 1; j++)
				{
					minIndex = j;
					for (int i = j; i < WorkerNum; i++)
					{
						if (pwm[i]->Id < pwm[minIndex]->Id)
						{
							minIndex = i;
						}
					}
					worker* temp = pwm[j];
					pwm[j] = pwm[minIndex];
					pwm[minIndex] = temp;
				}
				cout << "successed sort in ascending order" << endl;
				SaveFile();
				system("pause");
				system("cls");
			}
			else if (choice == 2)
			{
				int maxIndex = 0;
				for (int j = 0; j < WorkerNum - 1; j++)
				{
					maxIndex = j;
					for (int i = j; i < WorkerNum; i++)
					{
						if (pwm[i]->Id > pwm[maxIndex]->Id)
						{
							maxIndex = i;
						}
					}
					worker* temp = pwm[j];
					pwm[j] = pwm[maxIndex];
					pwm[maxIndex] = temp;
				}
				cout << "successed sort in descending order" << endl;
				SaveFile();
				system("pause");
				system("cls");
			}
			else
			{
				cout << "error: invalid sort mode" << endl;
				system("pause");
				system("cls");
			}
		}
		else
		{
			cout << "error: file is empty" << endl;
			system("pause");
			system("cls");
		}
	}
	else
	{
		cout << "error: file not found" << endl;
		system("pause");
		system("cls");
	}
}

void WorkerManager::ClearFile()
{
	cout << "clear all files" << endl;
	cout << "are you sure? 1. yes 2. no" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);
		ofs.close();
		for (int i = 0; i < WorkerNum; i++)
		{
			if (pwm[i] != NULL)
			{
				delete pwm[i];
				pwm[i] = NULL;
			}
		}
		WorkerNum = 0;
		cout << "successed clear all files" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "cancel clear files" << endl;
		system("pause");
		system("cls");
	}
}