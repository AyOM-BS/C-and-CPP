#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class staff
{
public:
	string name;
	int wage;
	staff(string name, int wage)
	{
		this->name = name;
		this->wage = wage;
	}
};
void CreateStaff(vector<staff>& s);
void partition(vector<staff>& s, multimap<int, staff>& mp);
void ShowGroup1(multimap<int, staff>& mp);
void ShowGroup2(multimap<int, staff>& mp);
void ShowGroup3(multimap<int, staff>& mp);