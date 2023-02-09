#define _CRT_SECURE_NO_WARNINGS 

#include "SeqList.h"

//初始化
void SeqListInit(SL* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

//销毁
void SeqListDestroy(SL* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}

//扩容
void SeqListCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = realloc(ps->a, sizeof(SLDataType) * newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;//将新申请的空间赋给动态指针
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->size++;
	for (int i = 0; i < ps->size + 1; i++)
	{
		ps->a[ps->size - i] = ps->a[ps->size - i - 1];
	}
	ps->a[0] = x;
}

void SeqListPopBack(SL* ps)
{
	assert(ps);
	if (ps->size > 0)
	{
		ps->size--;
	}
}

void SeqListPopFront(SL* ps)
{
	assert(ps);
	if (ps->size > 0)
	{
		for (int i = 0; i < ps->size - 1; i++)
		{
			ps->a[i] = ps->a[i + 1];
		}
		ps->size--;
	}

}