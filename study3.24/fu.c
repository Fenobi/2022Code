#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("���Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", &input);
	if (strcmp(input, "������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;       //goto��䣬����������ݲ���"������"��������ת��again��������ʾ�û�����"������"
	}
	return 0;
}