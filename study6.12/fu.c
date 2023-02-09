#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	printf("请输入你的身高：");
	int n = 0;
	scanf("%d", &n);
	int i = 98;
	printf("正在疯狂计算...");
	while (i)
	{
		Sleep(10);
		printf("%d%%", i);
		printf("\b\b\b");

		i-=2;

	}
	printf("你的身高是%d\n", n);
	return 0;
}