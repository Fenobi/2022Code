#define _CRT_SECURE_NO_WARNINGS 

//#include <stdio.h>
//#include <stdlib.h>
//
////避免命名冲突
//namespace fu
//{
//	int rand = 10;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//	namespace qing
//	{
//		int a = 1;
//	}
//}
//
//int main()
//{
//	printf("%d\n", rand);//地址
//	printf("%d\n", fu::rand);//10
//	struct fu::Node node;
//	
//	fu :: rand = 1;
//	fu::qing::a = 2;
//
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	cout << "kenobi" << endl;
//	return 0;
//}

//#include <iostream>
////指定展开
//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "kenobi" << endl;
//	return 0;
//}

#include <iostream>

using namespace std;

void* swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	return 0;
}

void swap(double* x, double* y)
{
	double tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 1, b = 2;
	double ad = 1.1, bd = 2.2;
	swap(&a, &b);
	swap(&ad, &bd);
	cout << a << endl;
	cout << b << endl;
	cout << ad << endl;
	cout << bd << endl;
	return 0;
}