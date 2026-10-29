#include "staff.hpp"

void CreateStaff(vector<staff>& s)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		staff newStaff("staff", (i + 1) * 1000);
		newStaff.name += nameseed[i];
		s.push_back(newStaff);
	}
}
void partition(vector<staff>& s, multimap<int, staff>& mp)
{
	for (vector<staff>::iterator it = s.begin(); it != s.end(); it++)
	{
		mp.insert(pair<int, staff>(it->wage % 3 + 1, *it));
	}
}
void ShowGroup1(multimap<int, staff>& mp)
{
	cout << "Group 1: " << endl;
	//for (multimap<int, staff>::iterator it = mp.begin(); it != mp.end(); it++)
	//{
	//	if (it->first == 1)
	//	{
	//		cout << "Name: " << it->second.name << ", Wage: " << it->second.wage << endl;
	//	}
	//}
	//Лђеп
	multimap<int, staff>::iterator it = mp.find(1);
	int count = mp.count(1);
	for (int i = 0; i < count; i++)
	{
		cout << "Name: " << it->second.name << ", Wage: " << it->second.wage << endl;
		it++;
	}
}
void ShowGroup2(multimap<int, staff>& mp)
{
	cout << "Group 2: " << endl;
	for (multimap<int, staff>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		if (it->first == 2)
		{
			cout << "Name: " << it->second.name << ", Wage: " << it->second.wage << endl;
		}
	}
}
void ShowGroup3(multimap<int, staff>& mp)
{
	cout << "Group 3: " << endl;
	for (multimap<int, staff>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		if (it->first == 3)
		{
			cout << "Name: " << it->second.name << ", Wage: " << it->second.wage << endl;
		}
	}
}