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
			printf("̫����\n");
		}
		else if (x < num)
		{
			printf("̫С��\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}