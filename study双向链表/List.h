#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDateType;

typedef struct ListNode 
{
	LTDateType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

//初始化
LTNode* ListInit(LTNode* phead);
//创建新节点
LTNode* BuyListNode(LTDateType x);
//打印
void ListPrint(LTNode* phead);
//尾插
void ListPushBack(LTNode* phead, LTDateType x);
//尾删
void ListPopBack(LTNode* phead);
//头插
void ListPushFront(LTNode* phead, LTDateType x);
//头删
void ListPopFront(LTNode* phead);
//查找
LTNode* ListFind(LTNode* phead, LTDateType x);
//x位置之后插入
void ListInsertBack(LTNode* pos, LTDateType x);
//x位置之前插入
void ListInsertFront(LTNode* pos, LTDateType x);
//删除
void ListErast(LTNode* pos);
//删除所有链表
void ListDestroy(LTNode* phead);
