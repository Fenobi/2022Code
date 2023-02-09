#define _CRT_SECURE_NO_WARNINGS 

#include "SeqList.h"

void test1()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);

	SeqListPushFront(&s, 5);

	SeqListPopBack(&s);
	SeqListPopFront(&s);

	SeqListPrint(&s);
	SeqListDestroy(&s);
}

int main()
{
	test1();
	return 0;
}