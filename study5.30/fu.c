#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int str[5] = { 0 };
//	int(*parr)[] = &arr;
//	printf("%d", (*parr)[7]);
//	return 0;
//
//}


//typedef struct ListNode {
//	int val;
//	struct ListNode* next;
//}ListNode;
//
//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//	n1->val = 1;
//	n2->val = 2;
//	n3->val = 3;
//	n4->val = 1;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;
//
//	//插入函数
//	printf("%d",chkPalindrome(n1));
//	return 0;
//}
//int chkPalindrome(ListNode* A)
//{
//	//找出中间节点
//	struct ListNode* slow, * fast;
//	slow = fast = A;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	//中间节点逆置
//	struct ListNode* n1, * n2, * n3;
//	n1 = NULL;
//	n2 = slow;
//	n3 = slow->next;
//	while (n2)
//	{
//		n2->next = n1;
//		n1 = n2;
//		n2 = n3;
//		if (n3)
//		{
//			n3 = n3->next;
//		}
//	}
//	//比较
//	while (n1 && A)
//	{
//		if (A->val != n1->val)
//		{
//			return 0;
//		}
//		else
//		{
//			n1 = n1->next;
//			A = A->next;
//		}
//	}
//	return 1;
//}


//void zuoxuan(char* str)
//{
//	int n = strlen(str) - 1;
//	char t = *str;
//	while (*(str+1))
//	{
//		*str = *(str + 1);
//		str++;
//	}
//	*(str) = t;
//}
//
//int main()
//{
//	char arr[] = "ABCDEF";//BCDEFA
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		zuoxuan(arr);
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	int n = sizeof(arr) / sizeof(arr[0][0]);
//	int t;
//	scanf("%d", &t);
//	for (int i = 0; i < n; i++)
//	{
//		if (*(arr[0] + i) == t)
//		{
//			printf("y");
//		}
//	}
//	return 0;
//}