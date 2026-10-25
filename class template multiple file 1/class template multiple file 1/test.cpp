#include "person.cpp"

int main()
{
	person<string, int> p("Alice", 30);
	p.show();
	return 0;
}