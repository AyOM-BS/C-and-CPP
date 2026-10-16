#pragma once
#include "worker.h"

class staff : public worker
{
public:
	void showInfo();
	string getDeptName();
	staff(string n, int id, int depid);
};