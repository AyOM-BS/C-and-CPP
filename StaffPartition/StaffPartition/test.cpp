#include "staff.hpp"

int main()
{
	vector<staff> s;
	CreateStaff(s);
	multimap<int, staff> mp;//key:department number, value:staff
	partition(s,mp);
	ShowGroup1(mp);
	ShowGroup2(mp);
	ShowGroup3(mp);
	for (vector<staff>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "Name: " << it->name << ", Wage: " << it->wage << endl;
	}
	return 0;
}