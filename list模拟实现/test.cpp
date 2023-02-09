#define _CRT_SECURE_NO_WARNINGS

#include "list.h"
#include <list>

int main()
{
	//fu::test1();
	//fu::test2();
	//fu::test3();
	//fu::test4();
	fu::test5();
	list<int> lt;
	list<int> lt1(2, 10);
	lt.swap(lt1);
	return 0;
}