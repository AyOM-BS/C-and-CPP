#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T1,class T2>
class person
{
public:
	T1 name;
	T2 age;
	person(T1 n, T2 a);
	void show();
};