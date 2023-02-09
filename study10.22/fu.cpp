#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <assert.h>
#define N   10

using namespace std;

//class A
//{
//public:
//	A(int a = 1)
//		:_a(a)
//	{
//		_a = a;
//	}
//private:
//	int _a;
//};

//template<typename T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//template<typename T>
//T ADD(const T& a,const T& b)
//{
//	return a + b;
//}
//
//int main()
//{
//
//	int a1 = 1, a2 = 2;
//	double d1 = 1.1, d2 = 2.2;
//	cout << ADD(a1, a2) << endl;
//	cout << ADD(d1, d2) << endl;
//	//ÏÔÊ¾ÊµÀý»¯
//	cout << ADD<double>(1.1, 2.2) << endl;
//	cout << ADD<int>(d1, d2) << endl;
//	return 0;
//}

template<class T>
class Stack
{
public:
	Stack(T& capacity = 4)
		:_capacity(capacity)
	{
		_a = new T[capacity];
		_size = 0;
	}


	~Stack()
	{
		free(_a);
		_capacity = _size = 0;
	}
private:
	int* _a;
	int _capacity;
	int _size;

};


template<class T>
class Array
{
public:
	inline T& operator[](size_t i)
	{
		assert(i < N);
		return _a[N];
	}
private:
	T _a[N];
};

int main()
{
	int a[N];
	for (int i = 0; i < N; ++i)
	{
		a[i] = i;
	}
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] <<" ";
	}
	cout << endl;
	for (int i = 0; i < N; ++i)
	{
		a[i]++;
	}
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}