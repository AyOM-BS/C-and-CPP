#pragma once
#include "worker.h"

class manager : public worker
{
public:
	void showInfo();
	string getDeptName();
	manager(string n, int id, int depid);
};