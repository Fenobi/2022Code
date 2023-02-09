#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
//void main()
//{
//	int pp[26] = { 0 };
//	int i, j, n;
//	char ch;
//	while ((ch = getchar()) != '\n');
//	{
//		for (i = 97; i < 123; i++)
//		{
//			if (ch == i)
//				pp[i - 97] = pp[i - 97] + 1;
//		}
//	}
//	for (j = 0; j < 26; j++);
//	{
//		printf("%d ", pp[j]);
//	}
//
//
//}

//int main()
//{
//    int pp[26] = { 0 };
//    char ch = 0;
//    int count = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        count = ch - 'a';
//        pp[count]++;
//    }
//    for (int i = 0; i < 26; i++)
//    {
//        printf("%d ", pp[i]);
//    }
//    return 0;
//}

//#include <stdio.h>

//void main()
//{
//	int pp[26] = { 0 };
//	int j, n;
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		n = ch - 97;
//		pp[n]++;
//	}
//	for (j = 0; j < 26; j++)
//	{
//		printf("%d ", pp[j]);
//	}
//
//}

//#include<stdio.h>
//void main()
//{
//	int pp[26] = { 0 };
//	char ch;
//	int count, i;
//	while ((ch = getchar()) != '\n')
//	{
//		count = ch - 'a';
//		pp[count]++;
//	}
//	for (i = 0; i < 26; i++)
//	{
//		printf("%d ", pp[i]);
//	}
//}

//struct ListNode 
//{
//	int val;
//	struct ListNode* next;
//};
//
//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//	n1->val = 1;
//	n2->val = 1;
//	n3->val = 1;
//	n4->val = 1;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;
//
//	//²åÈëº¯Êý
//
//
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for ( b = 1; b <= 5; b++)
//		{
//			for ( c = 1; c <= 5; c++)
//			{
//				for ( d = 1; d <= 5; d++)
//				{
//					for ( e = 1; e <= 5; e++)
//					{
//						if (((b == 2) || (a == 3) == 1) && ((b == 2) || (e == 4) == 1) && ((c == 1) || (d == 2) == 1) && ((c == 5) || (d == 3) == 1) && ((e == 4) || (a == 1) == 1) && (a * b * c * d * e == 120))
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if ((a == 0) + (c == 1) + (d == 1) + (c == 0) == 3 && ((a + b + c + d) == 1))
//					{
//						printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	arr[0][0] = 1;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == i || j == 0)
//			{
//				arr[i][j] = arr[0][0];
//				printf("%d ", arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

