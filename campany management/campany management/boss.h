#pragma once
#include "worker.h"

class boss : public worker
{
public:
	void showInfo();
	string getDeptName();
	boss(string n, int id, int depid);
};