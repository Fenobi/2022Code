#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;//数组大小
	int capacity;//数组能储存的空间
}SL;

//初始化
void SeqListInit(SL* ps);

//销毁
void SeqListDestroy(SL* ps);

//打印
void SeqListPrint(SL* ps);

//扩容
void SeqListCheckCapacity(SL* ps);

//尾插
void SeqListPushBack(SL* ps, SLDataType x);

//头插
void SeqListPushFront(SL* ps, SLDataType x);

//尾删
void SeqListPopBack(SL* ps);

//头删
void SeqListPopFront(SL* ps);