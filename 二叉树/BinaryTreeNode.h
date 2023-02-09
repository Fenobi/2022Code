#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "Queue.h"

//二叉树销毁
void TreeDestroy(BTNode* root);

//求结点个数
void TreeSize(BTNode* BT, int* psize);
int BinaryTreeSize(BTNode* root);

//叶子节点个数
int TreeLeafSize(BTNode* root);

//树的高度
int TreeHeight(BTNode* root);

//第k层节点个数
int TreeLevelKSize(BTNode* root, int k);

//查找值为k的节点
BTNode* TreeFind(BTNode* root, BTDataType x);

//前序遍历
void PreOrder(BTNode* BT);

//中序遍历
void MidOrder(BTNode* BT);

//后序遍历
void PostOrder(BTNode* BT);

//层序遍历
void TreeLevelOrder(BTNode* root);

//判断二叉树是否为完全二叉树
int TreeComplete(BTNode* root);

