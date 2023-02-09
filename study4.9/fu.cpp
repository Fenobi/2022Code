#define _CRT_SECURE_NO_WARNINGS
//#include <graphics.h>
//#include <MMSystem.h>//播放音乐的头文件
//
//#include <Windows.h>
//
//
//#pragma comment(lib, "Winmm.lib")
//
//int main()
//{
//	//创建一个窗口，将窗口设置为3840像素宽，2160像素高
//	initgraph(682, 384);
//
//	//把图片abc1.jpg加载到当前窗口
//	loadimage(0, _T("abc1.jpg"));
//
//	//播放音乐
//	mciSendString(_T("play 541408708_nb2-1-64.mp3"), 0, 0, 0);
//	//mciSendString(L"open Marry.mp3 alias MYBGM", 0, 0, 0);  //mp3 文件不能带mp3，这里要带.mp3
//	//mciSendString(L"play Marry repeat", 0, 0, 0);
//
//
//	system("pause");
//
//	closegraph();//把当前窗口关闭
//
//	return 0;
//}

#include <easyx.h>
#include <stdio.h>
#include <conio.h>

void kong_zhi(char x)
{
	switch (x)
	{
	case 'w':
	case 'W':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case 's':
	case 'S':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case 'd':
	case 'D':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case 'a':
	case 'A':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case ' ':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case '\r'://回车
	{
		printf("%c->%d\n", x, x);
		break;
	}
	}
}

int main()
{
	printf("输入wsad和上下左右都可以\n");
	char x = _getch();
	kong_zhi(x);
	return 0;
}