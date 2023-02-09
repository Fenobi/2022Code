#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct ListNode{
	int val;
	struct ListNode* next;
};

struct ListNode* middleNode(struct ListNode* head)
{
	int n = 0;
	struct ListNode* cur = head;
	while (cur)
	{
		cur = cur->next;
		n++;
	}
	cur = head;
	n /= 2;
	while (--n)
	{
		cur = cur->next;
	}
	return cur;
}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));

	n1->val = 1;
	n2->val = 2;
	n3->val = 3;
	n4->val = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	//²åÈëº¯Êý
	middleNode(n1);

	return 0;
}