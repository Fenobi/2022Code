#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");//打开一个二进制文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		exit(-1);
//	}
//
//	fputs("wo 1234 kenobi", pf);
//	int size = ftell(pf);
//	printf("%d\n", size);
//
//	fseek(pf, 3, SEEK_SET);
//	size = ftell(pf);
//	printf("%d\n", size);
//
////	fputs("jiao", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");//打开一个二进制文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		exit(-1);
//	}
//
//	fputs("wo 1234 kenobi", pf);	
//	int size = ftell(pf);
//	printf("%d\n", size);
//
//	rewind(pf);
//
//	size = ftell(pf);
//	printf("%d\n", size);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int* selfDividingNumbers(int left, int right, int* returnSize)
{
	int count = 0;
	int a = 0;
	int* arr = (int*)malloc(sizeof(int) * 5000);
	for (int i = left; i <= right; i++)
	{
		int n = i;
		while (n)
		{
			if (n % 10 == 0)
			{
				break;
			}
			else
			{
				if (i % (n % 10) != 0)
				{
					break;
				}
			}
			n /= 10;
		}
		if (n == 0)
		{
			arr[count] = i;
			count++;
		}

	}
	*returnSize = count;
	return arr;
}


int main()
{
	int i = 0;
	int arr[1000] = { 0 };
	selfDividingNumbers(1, 22, arr);
	return 0;
}