#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void PanDuan(int num)
{
	while (1)
	{
		int x = 0;
		scanf("%d", &x);
		if (x > num)
		{
			printf("太大了\n");
		}
		else if (x < num)
		{
			printf("太小了\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}