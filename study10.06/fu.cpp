#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>

using namespace std;

//class A2
//{
//public:
//	void f2()
//	{
//
//	}
//
//private:
//	char a;
//	int i;
//};
//
//int main()
//{
//	A2 aa2;
//	cout << sizeof(aa2) << endl;
//	return 0;
//}

//class A
//{
//public:
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}


//class Data
//{
//public:
//	
//	Data(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	/*void Init(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	void Print()
//	{
//		cout << _year << " - " << _month << " - " << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Data d1;
//	d1.Print();
//	Data d2;
//	d2.Print();
//	return 0;
//}

class Stack
{
public:
	Stack(int capacity = 4)
	{
		_a = (int*)malloc(sizeof(int) * capacity);
		if (_a == NULL)
		{
			perror("malloc fail");
			exit(-1);
		}
		_size = 0;
		_capacity = capacity;
	}
	void Push(int x)
	{
		_a[_size] = x;
		_size++;
	}
	~Stack()
	{
		free(_a);
		_a = nullptr;
		_size = _capacity = 0;
	}
private:
	int* _a;
	int _capacity;
	int _size;
};

int main()
{
	Stack s;
	s.Push(1);
	return 0;
}