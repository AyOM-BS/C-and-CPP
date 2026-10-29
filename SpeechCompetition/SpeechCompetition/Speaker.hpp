#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <fstream>
#include <algorithm>
using namespace std;

class Speaker
{
public:
	Speaker() {}
	string name;
	int number;
	float score;
	Speaker(string name, int number) : name(name), number(number) {}
};
