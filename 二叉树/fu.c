#define _CRT_SECURE_NO_WARNINGS

#include "BinaryTreeNode.h"



void test1()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;

	BTNode* F = (BTNode*)malloc(sizeof(BTNode));
	F->data = 'F';
	F->left = NULL;
	F->right = NULL;

	BTNode* G = (BTNode*)malloc(sizeof(BTNode));
	G->data = 'G';
	G->left = NULL;
	G->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	D->right = E;
	G->left = F;
	C->right = G;

	PreOrder(A);
	printf("\n");
	MidOrder(A);
	printf("\n");
	PostOrder(A);
	int size = 0;
	TreeSize(A, &size);
	printf("\nTreeSize:%d\n", size);
	printf("BinaryTreeSize:%d\n", BinaryTreeSize(A));
	printf("TreeLevelKSize:%d\n", TreeLevelKSize(A, 3));
	
	TreeLevelOrder(A);
	printf("\nTreeComplete:%d\n", TreeComplete(A));
	TreeDestroy(A);
}

int main()
{
	test1();
	
	return 0;
}