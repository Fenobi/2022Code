#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("��������Ϸ\n");
	printf("*****************************\n");
	printf("*********   1.��ʼ  *********\n");
	printf("*********   0.����  *********\n");
	printf("*****************************\n");
	printf("��ѡ��>");
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
	printf("������1-100����:>");
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
			printf("����\n");
			break;
		}
		default:
		{
			printf("����������������룺>\n");
			break;
		}
		}
	} while (input);
	return 0;
}