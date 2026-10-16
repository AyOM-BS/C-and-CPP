#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

class campany
{
public:
	int id;
	char name[20];
	char position[20];
	char responsibility[50];
};
class staff : public campany
{
public:
	staff(int i, const char* n, const char* p)
	{
		if (i > 1)
		{
			id = i;
			strcpy(name, n);
			strcpy(position, p);
			strcpy(responsibility, "finish manager's tasks");
		}
		else
		{
			cout << "Staff id must be greater than 1!" << endl;
		}
	}
};
class manager : public campany
{
public:
	manager(int i, const char* n, const char* p)
	{
		if (i > 1)
		{
			id = i;
			strcpy(name, n);
			strcpy(position, p);
			strcpy(responsibility, "finish boss's tasks,assign tasks to staff");
		}
		else
		{
			cout << "Manager id must be greater than 1!" << endl;
		}
	}
};
class boss : public campany
{
public:
	boss(const char* n, const char* p)
	{
		id = 1;
		strcpy(name, n);
		strcpy(position, p);
		strcpy(responsibility, "manage the company");
	}
};
void close()
{
	exit(0);
}
void AddStaff(ostream& ofs)
{
	int n = 0;
	cout << "Enter the number of staff to add: " << endl;
	cin >> n;
	system("cls");
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		staff* s = new staff(100," ","staff");
		cin >> s->id >> s->name;
		ofs	<< s->id << " " << s->name << "	" << s->position << "	" << s->responsibility << endl;
		delete s;
		count++;
	}
	if(count == n)
	{
		cout << "Staff added successfully!" << endl;
		system("cls");
	}
	else
	{
		cout << "Error adding staff!" << endl;
		system("cls");
	}
}
void AddManager(ostream& ofs)
{
	int n = 0;
	cout << "Enter the number of managers to add: " << endl;
	cin >> n;
	system("cls");
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		manager* s = new manager(100, " ", "manager");
		cin >> s->id >> s->name;
		ofs << s->id << " " << s->name << "	" << s->position << "	" << s->responsibility << endl;
		delete s;
		count++;
	}
	if (count == n)
	{
		cout << "Manager added successfully!" << endl;
		system("cls");
	}
	else
	{
		cout << "Error adding manager!" << endl;
		system("cls");
	}
}
void AddBoss(ostream& ofs)
{
	cout << "Enter the boss's name: " << endl;
	boss* s = new boss(" ", "boss");
	cin >> s->name;
	system("cls");
	ofs << s->name << "	" << s->position << "	" << s->responsibility << endl;
	delete s;
}
void AddMenu()
{
	cout << "1. Add staff" << endl;
	cout << "2. Add manager" << endl;
	cout << "3. Add boss" << endl;
	cout << "Enter your choice: " << endl;
}
void Add()
{
	AddMenu();
	ofstream ofs("company.txt", ios::app);
	if (ofs.is_open())
	{
		int choice;
		cin >> choice;
		system("cls");
		if (choice == 1)
		{
			AddStaff(ofs);
		}
		else if(choice == 2)
		{
			AddManager(ofs);
		}
		else if (choice == 3)
		{
			AddBoss(ofs);
		}
		else
		{
			cout << "Invalid choice!" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
	else
	{
		cout << "Error opening file!" << endl;
		system("pause");
		system("cls");
		return;
	}
}
void DisplayStaff(ifstream& ifs)
{
	int option;
	cout << "1. Enter the staff id to display: " << endl;
	cout << "2. Enter the staff name to display" << endl;
	cin >> option;
	system("cls");
	if (option == 1)
	{
		int id;
		cin >> id;
		int n;
		while (!ifs.eof())
		{
			ifs >> n;
			if (n == id)
			{
				char information[100];
				ifs.getline(information, 100);
				printf("%d %s\n", n, information);
				system("pause");
				system("cls");
				return;
			}
			while (ifs.get() != '\n' && !ifs.eof())
			{
				;
			}
		}
	}
}
void DisplayManager(ifstream& ifs)
{
	int option;
	cout << "1. Enter the manager id to display: " << endl;
	cout << "2. Enter the manager name to display" << endl;
	cin >> option;
	if (option == 1)
	{
		int id;
		cin >> id;
		int n;
		while (!ifs.eof())
		{
			ifs >> n;
			if (n == id)
			{
				char information[100];
				ifs.getline(information, 100);
				printf("%d %s\n", n, information);
				system("pause");
				system("cls");
				return;
			}
			while (ifs.get() != '\n' && !ifs.eof())
			{
				;
			}
		}
	}
}
void DisplayBoss(ifstream& ifs)
{
	while (!ifs.eof())
	{
		int id = 1;
		int n;
		while (!ifs.eof())
		{
			ifs >> n;
			if (n == id)
			{
				char information[100];
				ifs.getline(information, 100);
				printf("%d %s\n", n, information);
				system("pause");
				system("cls");
				return;
			}
			while (ifs.get() != '\n' && !ifs.eof())
			{
				;
			}
		}
	}
}
void DisplayMenu()
{
	cout << "1. Display staff" << endl;
	cout << "2. Display manager" << endl;
	cout << "3. Display boss" << endl;
	cout << "Enter your choice: " << endl;
}
void Display()
{
	DisplayMenu();
	ifstream ifs("company.txt", ios::in);
	if (ifs.is_open())
	{
		int choice;
		cin >> choice;
		system("cls");
		if (choice == 1)
		{
			DisplayStaff(ifs);
		}
		else if (choice == 2)
		{
			DisplayManager(ifs);
		}
		else if (choice == 3)
		{
			DisplayBoss(ifs);
		}
		else
		{
			cout << "Invalid choice!" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
	else
	{
		cout << "Error opening file!" << endl;
		system("pause");
		system("cls");
		return;
	}
}
//void Delete()
//{
//	fstream fs("company.txt", ios::in | ios::out);
//	if (fs.is_open())
//	{
//		int id;
//		cout << "Enter the id of the staff to delete: " << endl;
//		cin >> id;
//		system("cls");
//		int n;
//		while (!fs.eof())
//		{
//			
//			if (n == id)
//			{
//				
//			}
//			while (fs.get() != '\n' && !fs.eof())
//			{
//				;
//			}
//		}
//	}
//	else
//	{
//		cout << "Error opening file!" << endl;
//		system("pause");
//		system("cls");
//		return;
//	}
//}
int main()
{
	
	//close();
	Add();
	//Display();
	//Delete();
	return 0;
}