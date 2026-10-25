#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyArray
{
private:
	int capacity = 0;
	T* arr = new T[capacity];
	int size = 0;
public:
	MyArray() {}
	MyArray(int capacity) : capacity(capacity) {}
	MyArray(const MyArray& p);//…ÓøΩ±¥
	~MyArray()
	{
		if (arr)
		{
			delete[]arr;
			arr = nullptr;
		}
	}
	MyArray& operator= (const MyArray& p);//‘ÀÀ„∑˚÷ÿ‘ÿ
	MyArray& PushBack(const T& val);
	MyArray& PopBack();
	T operator[](int index);
	int GetSize();
	int GetCapacity();
};
template <class T>
MyArray<T>::MyArray(const MyArray<T>& p)
{
	if(arr)
	{
		delete[]arr;
	}
	arr = new T[p.capacity];
	for (int i = 0; i < p.size; i++)
	{
		arr[i] = p.arr[i];
	}
	size = p.size;
	capacity = p.capacity;
}
template <class T>
MyArray<T>& MyArray<T>::operator= (const MyArray<T>& p)
{
	if (arr)
	{
		delete[]arr;
	}
	arr = new T[p.capacity];
	for (int i = 0; i < p.size; i++)
	{
		arr[i] = p.arr[i];
	}
	size = p.size;
	capacity = p.capacity;
	return *this;
}
template <class T>
MyArray<T>& MyArray<T>::PushBack(const T& val)
{
	if (size == capacity)
	{
		cout << "Array is full" << endl;
		return *this;
	}
	else
	{
		arr[size] = val;
		size++;
		return *this;
	}
}
template <class T>
MyArray<T>& MyArray<T>::PopBack()
{ 
	if (size == 0)
	{
		cout << "Array is empty" << endl;
		return *this;
	}
	else
	{
		size--;
		return *this;
	}
}
template <class T>
T MyArray<T>::operator[](int index)
{ 
	for (int i = 0; i < size; i++)
	{
		if (i == index)
		{
			return arr[i];
		}
	}
}
template <class T>
int MyArray<T>::GetSize()
{
	return size;
}
template <class T>
int MyArray<T>::GetCapacity()
{
	return capacity;
}