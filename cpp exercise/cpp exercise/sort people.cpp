//#include <iostream>
//#include <list>
//#include <string>
//using namespace std;
//
//class people
//{
//public:
//	string name;
//	int age;
//	float height;
//	people(string n, int a, float h) : name(n), age(a), height(h) {}
//};
//void CreatePeople(list<people> &p)
//{
//	p.push_back(people("Alice", 30, 5.5));
//	p.push_back(people("Bob", 25, 6.0));
//	p.push_back(people("Charlie", 35, 5.8));
//	p.push_back(people("David", 35, 5.9));
//}
//bool compare(const people& p1, const people& p2)
//{
//	if (p1.age != p2.age)
//		return p1.age < p2.age;
//	else
//		return p1.height > p2.height;
//}
//void print(const list<people>& p)
//{
//	for (list<people>::const_iterator it = p.begin(); it != p.end(); ++it)
//	{
//		cout << it->name << " " << it->age << " " << it->height << endl;
//	}
//}
//int main()
//{
//	list<people> p;
//	CreatePeople(p);
//	p.sort(compare);
//	print(p);
//	return 0;
//}