#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int& ra = a;
	int* pa = &a;
	
	cout << ra << endl;

	return 0;
}