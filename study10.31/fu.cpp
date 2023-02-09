#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <windows.h>
#include <string.h>



void ProcessOn()
{
	int cnt = 0;
	char bar[101];
	memset(bar, '\0', sizeof(bar));

	const char* lable = "|\\-/";

	while (cnt <= 100)
	{
		printf("\033[42;31m[%-100s][%d%%][%c]\033[5m\r", bar, cnt, lable[cnt % 4]);
		fflush(stdout);
		bar[cnt++] = '#';
		Sleep(50);
	}
	printf("\n");

}
int main()
{
	ProcessOn();
	return 0;
}