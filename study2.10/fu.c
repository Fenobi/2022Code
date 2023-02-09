#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c' };
//	//printf("%s\n",arr1);
//	//printf("%s\n", arr2);
//	int day = 0;
//	scanf("%d", &day);
//	//if (a < 10)
//	//{
//	//	printf("可以可以");
//	//}
//	//else
//	//{
//	//	printf("不可以不可以");
//	//}
//
//	return 0;
//}
int main()
{
	int day = 7;
	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	default:
		printf("输入错误\n");
	}
	return 0;
}