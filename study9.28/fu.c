#define _CRT_SECURE_NO_WARNINGS 

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	float x, y, a;
//	for (y = 1.5; y > -1.5; y -= 0.1)
//	{
//		for (x = -1.5; x < 1.5; x += 0.05)
//		{
//			a = x * x + y * y - 1;
//			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
//		}
//		system("color 0c");
//		putchar('\n');
//	}
//	return 0;
//}
#include "Sort.h"

int main()
{
	int a[] = { 2,5,6,7,1,3,4,0,9,8 };
	int n = sizeof(a) / sizeof(a[0]);
	//BuobleSort(a, n);
	//SelectSort(a, n);
	//InsertSort(a, n);
	HeapSort(a, n);
	Print(a, n);
	return 0;
}