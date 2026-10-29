#include "compare.h"
#include "function.h"
#include "Speaker.hpp"
#include "SpeechCompetition.hpp"

int main()
{
	speech s;
	while (true)
	{
		s.menu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			s.Start();
			system("cls");
			break;
		case 2:
			s.View();
			system("cls");
			break;
		case 3:
			s.Clear();
			system("cls");
			break;
		case 4:
			s.Exit();
			return 0;
		default:
			cout << "Invalid choice. Please try again." << endl;
			break;
		}
	}
	return 0;
}