#include "person.hpp"

int main()
{
	Person<string, int> p1("Alice", 30);
	p1.display();
	return 0;
}