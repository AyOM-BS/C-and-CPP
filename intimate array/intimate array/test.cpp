#include "MyArray.hpp"

class person
{
public:
	int age;
	string name;
	person() {}
	person(int age, string name) :age(age), name(name) {}
};
void print(MyArray<person> & p)
{
	for (int i = 0; i < p.GetSize(); i++)
	{
		cout << p[i].age << " " << p[i].name << endl;
	}
}

//void test1()
//{
//	MyArray<int> arr(5);
//	arr.PushBack(1);
//	arr.PushBack(2);
//	arr.PushBack(3);
//	arr.PushBack(4);
//	arr.PushBack(5);
//	cout << "Size: " << arr.GetSize() << endl;
//	cout << "Capacity: " << arr.GetCapacity() << endl;
//	arr.PopBack();
//	cout << "Size: " << arr.GetSize() << endl;
//	cout << "Capacity: " << arr.GetCapacity() << endl;
//	MyArray<int> arr2;
//	arr2 = arr;
//	cout << "Size: " << arr2.GetSize() << endl;
//	cout << "Capacity: " << arr2.GetCapacity() << endl;
//	MyArray<int> arr3(arr);
//	cout << "Size: " << arr3.GetSize() << endl;
//	cout << "Capacity: " << arr3.GetCapacity() << endl;
//	cout << arr[1] << endl;
//}
void test2()
{
	person p1(18, "Tom");
	person p2(20, "Jerry");
	person p3(22, "Spike");
	person p4(24, "Tyke");
	person p5(26, "Butch");
	MyArray<person> arr(5);
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);
	arr.PushBack(p4);
	arr.PushBack(p5);
	print(arr);
}
int main()
{
	//test1();
	test2();
	return 0;
}