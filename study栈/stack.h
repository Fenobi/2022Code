#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDateType;

typedef struct Stack
{
	STDateType* a;
	//栈顶
	int top;
	//容量
	int capacity;
}ST;

//初始化栈
void StackInit(ST* ps);

//销毁栈
void StackDestroy(ST* ps);

//入栈
void StackPush(ST* ps, STDateType x);

//出栈

//删除
void StackPop(ST* ps);

//获取栈顶元素
STDateType StackTop(ST* ps);

//获取栈内元素个数
int StackSize(ST* ps);

//检测栈是否为空，空则返回非零结果，如果不空则返回0
bool StackEmpty(ST* ps);