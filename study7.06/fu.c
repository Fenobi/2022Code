#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	const char* pstr1 = str1;
	const char* pstr2 = str2;
	const char* p = str1;

	while (*p)
	{
		pstr1 = p;
		pstr2 = str2;
		while (*pstr1 == *pstr2 && *pstr1 != '\0' && *pstr2 != '\0')
		{
			pstr1++;
			pstr2++;
		}
		if (*pstr2 == '\0')
		{
			return p;
		}
		p++;
	}
	return NULL;
}

void test1()
{
	char arr1[] = "abcd";
	char arr2[] = "abcd";
	char arr3[] = "abcf";
	char arr4[] = "abcc";
	/*printf("%d\n", strcmp(arr1, arr2));
	printf("%d\n", strcmp(arr1, arr3));
	printf("%d\n", strcmp(arr1, arr4));*/
	printf("%d\n", my_strcmp(arr1, arr2));
	printf("%d\n", my_strcmp(arr1, arr3));
	printf("%d\n", my_strcmp(arr1, arr4));
}

void test2()
{
	char arr1[] = "abcd";
	char arr2[] = "erg";
	printf("%s\n",strncpy(arr1, arr2, 2));
}

void test3()
{
	char arr1[] = "1aaabcd";
	char arr2[] = "aabc";
	//printf("%s\n", strstr(arr1, arr2));
	printf("%s\n", my_strstr(arr1, arr2));

}

void test4()
{
	char arr1[] = "1366773912@qq.com.Fenobi@Kenobi";
	char* arr2 = "@.";
	char str[50] = { 0 };
	char* arr = NULL;
	strcpy(str, arr1);
	for (arr = strtok(str, arr2); arr != NULL; arr = strtok(NULL, arr2))
	{
		printf("%s\n", arr);
	}
}


int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	return 0;
}