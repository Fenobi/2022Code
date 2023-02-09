#define _CRT_SECURE_NO_WARNINGS

#include "List.h"

void Test1()
{
	LTNode* plist = NULL;
	plist = ListInit(plist);
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);

	//ListPopBack(plist);
	//ListPopBack(plist);
	//ListPopBack(plist);
	ListPopBack(plist);

	ListPushFront(plist, 10);
	//ListPopFront(plist);
	//ListPopFront(plist);
	ListPopFront(plist);



	ListPrint(plist);
	ListDestroy(plist);
	plist = NULL;

}

void Test2()
{
	LTNode* plist = NULL;
	plist = ListInit(plist);
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);

	//ListInsertBack(ListFind(plist,2), 10);
	//ListInsertFront(ListFind(plist, 2), 10);
	//ListErast(ListFind(plist, 2));
	//ListErast(ListFind(plist, 4));	


	ListPrint(plist);

	ListDestroy(plist);
	plist = NULL;
}


int main()
{
	Test1();
	//Test2();

	return 0;
}