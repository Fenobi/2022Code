#define _CRT_SECURE_NO_WARNINGS

#include "List.h"


LTNode* BuyListNode(LTDateType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}

void ListPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;

	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

LTNode* ListInit(LTNode* phead)
{
	//哨兵位头节点
	phead = (LTNode*)malloc(sizeof(LTNode));
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

void ListPushBack(LTNode* phead, LTDateType x)
{
	/*assert(phead);

	LTNode* tail = phead->prev;
	LTNode* newnode = BuyListNode(x);

	tail->next = newnode;
	newnode->prev = tail;
	
	newnode->next = phead;
	phead->prev = newnode;*/

	ListInsertFront(phead, x);


}

void ListPopBack(LTNode* phead)
{
	/*assert(phead);
	assert(phead->next != phead);
	
	LTNode* tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;

	free(tail);
	tail = NULL; */

	ListErast(phead->prev);

}

void ListPushFront(LTNode* phead, LTDateType x)
{
	/*assert(phead);

	LTNode* cur = phead->next;
	LTNode* newhead = BuyListNode(x);

	newhead->prev = phead;
	newhead->next = cur;
	phead->next =newhead;*/

	ListInsertBack(phead, x);

}

void ListPopFront(LTNode* phead)
{
	/*assert(phead);
	assert(phead != phead->next);

	LTNode* cur = phead->next;
	phead->next = cur->next;
	cur->next->prev = phead;
	free(cur);
	cur = NULL;*/

	ListErast(phead->next);

}

LTNode* ListFind(LTNode* phead, LTDateType x)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (phead != cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsertBack(LTNode* pos, LTDateType x)
{
	assert(pos);

	LTNode* newnode = BuyListNode(x);
	LTNode* cur = pos->next;
	newnode->next = cur;
	newnode->prev = pos;
	pos->next = newnode;
	cur->prev = newnode;

}

void ListInsertFront(LTNode* pos, LTDateType x)
{
	assert(pos);

	LTNode* newnode = BuyListNode(x);
	LTNode* cur = pos->prev;
	newnode->next = pos;
	newnode->prev = cur;
	cur->next = newnode;
	pos->prev = newnode;

}

void ListErast(LTNode* pos)
{
	assert(pos);
	assert(pos != pos->next);

	LTNode* cur = pos->next;
	cur->prev = pos->prev;
	pos->prev->next = cur;
	
	free(pos);
	pos = NULL;
	free(pos);
}

void ListDestroy(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur;
		cur = cur->next;
		free(next);
	}
	free(phead);
}
