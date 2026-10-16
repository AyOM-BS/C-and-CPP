#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class worker
{
public:
	virtual void showInfo() = 0;
	virtual string getDeptName() = 0;
	string Name;
	int Id;
	int DptId;
};