#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>

using namespace std;

//inline int fun1(int a)
//{
//	return a + 1;
//}
//
//int fun2(int a)
//{
//	return a + 1;
//}
//
//int main()
//{
//	int a = 0;
//	cout << fun1(a) << endl;
//	cout << fun2(a) << endl;
//	return 0;
//}


//int main()
//{
//	/*auto a = 1.1;
//	auto b = a;
//	cout << a << " " << b << endl;*/
//	int array[] = { 1,2,3,4,5,6,7,8,9 };
//	for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

void f(int*)
{
	cout << "a" << endl;
}

int main()
{
	f(nullptr);
	return 0;
}

