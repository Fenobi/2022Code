#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
//#define swap(x,y) ((int tmp=(*x));(*x)=(*y);(*y)=tmp)
//#define add(x,y) ((x)+(y))
using namespace std;
//
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//	
//	return 0;
//}

inline int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 1;
	cout << Add(1, 2) << endl;
	return 0;
}