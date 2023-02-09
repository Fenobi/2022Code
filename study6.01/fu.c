#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void NiXv(char* left, char* right)//×Ö·û´®ÄæÐò
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int XuanZhuan_PanDuan(char* str, char* str1)
{
	assert(str);
	assert(str1);

	int n = strlen(str);

	for (int i = 0; i < n; i++)
	{
		NiXv(str, str + 1);//×ó
		NiXv(str + 2, str + n - 1);//ÓÒ
		NiXv(str, str + n - 1);//ÕûÌå

		if (strcmp(str, str1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char str[] = "AABCD";
	char str1[] = "BCDAA";

	int n = XuanZhuan_PanDuan(str, str1);
	if (n == 1)
	{
		printf("ture\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;

}