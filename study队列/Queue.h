#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;


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

//��ʼ������
void QueueInit(Queue* pq);

//���ٶ���
void QueueDestroy(Queue* pq);

//��β�����
void QueuePush(Queue* pq, QDataType x);

//��ͷ������
void QueuePop(Queue* pq);

//��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* pq);

//��ȡ����β��Ԫ��
QDataType QueueBack(Queue* pq);

//��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* pq);

//�������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
bool QueueEmpty(Queue* pq);

//��ӡ
void QueuePrint(Queue* pq);
