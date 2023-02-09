#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("猜数字游戏\n");
	printf("*****************************\n");
	printf("*********   1.开始  *********\n");
	printf("*********   0.结束  *********\n");
	printf("*****************************\n");
	printf("请选择：>");
}
void game()
{
	int num = rand() % 100 + 1;
	PanDuan(num);


}


int main()
{
	menu();
	int input = 0;
	scanf("%d", &input);
	printf("请输入1-100的数:>");
	srand((unsigned int)time(NULL));
	do
	{
		switch (input)
		{
		case 1:
		{
			game();

			break;
		}
		case 0:
		{
			printf("结束\n");
			break;
		}
		default:
		{
			printf("输入错误，请重新输入：>\n");
			break;
		}
		}
	} while (input);
	return 0;
}