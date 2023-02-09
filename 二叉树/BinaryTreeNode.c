#define _CRT_SECURE_NO_WARNINGS

#include "BinaryTreeNode.h"

void PreOrder(BTNode* BT)
{
	if (BT == NULL)
	{
		printf("NULL ");
		return;
	}
	else
	{
		printf("%c ", BT->data);
		PreOrder(BT->left);
		PreOrder(BT->right);
	}
}

void MidOrder(BTNode* BT)
{
	if (BT == NULL)
	{
		printf("NULL ");
		return;
	}
	else
	{
		MidOrder(BT->left);
		printf("%c ", BT->data);
		MidOrder(BT->right);
	}
}

void PostOrder(BTNode* BT)
{
	if (BT == NULL)
	{
		printf("NULL ");
		return;
	}
	else
	{
		PostOrder(BT->left);
		PostOrder(BT->right);
		printf("%c ", BT->data);
	}
}

void TreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		
		printf("%c ", front->data);

		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		else
		{
			printf("NULL ");
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
		else
		{
			printf("NULL ");
		}
	}

}

int TreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if(front == NULL)
		{
			break;
		}
		QueuePush(&q, front->left);
		QueuePush(&q, front->right);
	}
	//遇到空以后，后面全是空，则是完全二叉树
	//反之，后面存在非空，则不是完全二叉树
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front != NULL)
		{
			QueueDestroy(&q);
			return false;
		}
	}
	QueueDestroy(&q);
	
	return true;
}

void TreeDestroy(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	TreeDestroy(root->left);
	TreeDestroy(root->right);
	free(root);
	root = NULL;
}

void TreeSize(BTNode* BT, int* psize)
{
	if (BT == NULL)
	{
		return;
	}
	else
	{
		(*psize)++;
	}
	TreeSize(BT->left, psize);
	TreeSize(BT->right, psize);
}

int BinaryTreeSize(BTNode* root)
{
	return root == NULL ? 0 : 
		BinaryTreeSize(root->left) +
		BinaryTreeSize(root->right) + 1;
}

int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return TreeLeafSize(root->left) + 
		TreeLeafSize(root->right);
}

int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int lh = TreeHeight(root->left);
	int rh = TreeHeight(root->right);
	return lh > rh ? lh + 1 : rh + 1;
}

int TreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}

	if (k == 1)
	{
		return 1;
	}

	return TreeLevelKSize(root->left, k - 1) + TreeLevelKSize(root->right, k - 1);
	
}

BTNode* TreeFind(BTNode* root, BTDataType x)
{
	//注意：函数返回！
	//递归返回时只是返回上一层
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	//先找左
	BTNode* lf = TreeFind(root->left, x);
	if (lf)
	{
		return lf;
	}
	//左树没找到，再找右
	BTNode* rf = TreeFind(root->right, x);
	if (rf)
	{
		return rf;
	}
	return NULL;
}
