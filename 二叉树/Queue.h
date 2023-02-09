#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

typedef BTNode* QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;

}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;

}Queue;

//初始化
void QueueInit(Queue* pq);

//销毁
void QueueDestroy(Queue* pq);

//插入
void QueuePush(Queue* pq, QDataType x);

//删除
void QueuePop(Queue* pq);

//返回头
QDataType QueueFront(Queue* pq);

//返回尾
QDataType QueueBack(Queue* pq);

//长度
int QueueSize(Queue* pq);

//头是否为空
bool QueueEmpty(Queue* pq);

//打印
void QueuePrint(Queue* pq);
