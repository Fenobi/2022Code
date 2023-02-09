#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>


//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0');
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//int main()
//{
//	char* arr1 = "abcd";
//	char* arr2 = "abdce";
//	int n = my_strcmp(arr1, arr2);
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdefgh";
//	char arr2[] = "abc";
//	//strncpy(arr1, arr2, 6);
//	//strncat(arr1, arr2, 1);
//	int n = strncmp(arr1, arr2, 3);
//	printf("%d\n", n);
//}


char* my_strstr(const char* s1,const char s2)
{
	assert(s1 && s2);

}


int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "cdef";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，就是:%s\n", ret);
	}

	return 0;
}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}