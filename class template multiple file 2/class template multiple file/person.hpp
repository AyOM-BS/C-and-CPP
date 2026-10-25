#pragma once
#include <string>
#include <iostream>
using namespace std;

template <class T1, class T2>
class Person
{
public:
	    T1 name;
		T2 age;
		Person(T1 n, T2 a);
		void display();
};
template <class T1, class T2>
Person<T1, T2>::Person(T1 n, T2 a) : name(n), age(a) {}
template <class T1, class T2>
void Person<T1, T2>::display()
{
	cout << "Name: " << name << ", Age: " << age << endl;
}