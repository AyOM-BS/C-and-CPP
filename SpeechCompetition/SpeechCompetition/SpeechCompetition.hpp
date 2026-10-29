#pragma	once
#include "Speaker.hpp"
#include "function.h"
class speech
{
public:
	void menu();
	void Start();
	void View();
	void Clear();
	void Exit();
};
void speech::menu()
{
	cout << "Welcome to the Speech Competition!" << endl;
	cout << "Please select an option:" << endl;
	cout << "1. Start Competition" << endl;
	cout << "2. View Results" << endl;
	cout << "3. Clear Results" << endl;
	cout << "4. Exit" << endl;
}
void speech::Start()
{
	vector<Speaker> speakers;
	cout << "Starting the Speech Competition..." << endl;
	CreateSpeaker(speakers);
	Partition(speakers);
	system("pause");
	GetScore1(speakers);
	system("pause");
	Prompt1(speakers);
	system("pause");
	GetScore2(speakers);
	system("pause");
	Prompt2(speakers);
	system("pause");
	load(speakers);
}
void speech::View()
{
	ifstream ifs;
	ifs.open("winner.csv", ios::in);
	if(!ifs.is_open())
	{
		cout << "Failed to open the file." << endl;
		return;
	}
	else
	{
		string line;
		int i = 1;
		int flag = 1;
		while (getline(ifs, line))
		{
			printf("the %dth competition result is:\n", i);
			cout << line << endl;
			i++;
			flag = 0;
		}
		if (flag)
		{
			cout << "No results found." << endl;
		}
	}
	system("pause");
}
void speech::Clear()
{
	ofstream ofs;
	ofs.open("winner.csv", ios::trunc);
	if (!ofs.is_open())
	{
		cout << "Failed to open the file." << endl;
		return;
	}
	else
	{
		cout << "Results cleared successfully!" << endl;
	}
	system("pause");
}
void speech::Exit()
{
	cout << "Exiting the Speech Competition..." << endl;
	exit(0);
}
