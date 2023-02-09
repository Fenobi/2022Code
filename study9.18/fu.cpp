#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int* pa = &a;
	int& ra = a;
	*pa = 1;
	cout << a << endl;
	ra = 2;
	cout << a << endl;
	return 0;
}