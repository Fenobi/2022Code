#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//int main()
//{
//	//printf("%s\n", __FILE__);//文件编译的源文件
//	//printf("%d\n", __LINE__);//文件当前的行号
//	//printf("%s\n", __DATE__);//文件编译日期
//	//printf("%s\n", __TIME__);//文件编译的时间
//	////printf("%d\n", __STDC__);//如果编译器遵循ANSI C，其值为1，否则未定义
//	//printf("%s\n", __FUNCTION__);
//
//	int i = 0;
//	FILE* pf = fopen("text.txt", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


#define M 100
#define reg register
#define do_forever for(;;)

//int main()
//{
//	int m = M;
//	reg int num = 0;
//	do_forever;
//	printf("%d\n", m);
//
//	return 0;
//}

//#define CASE break;case
//int main()
//{
//	int n = 0;
//	switch (n)
//	{
//	case 1:
//	CASE 2 :
//	CASE 3 :
//	}
//
//	return 0;
//}

//#define SQUARE(X) X*X//定义宏
//
//#define DOUBLE(X) (X)+(X)
//
//int main()
//{
//	printf("%d\n", SQUARE(3));//9
//
//	printf("%d\n", SQUARE(3 + 1));//7
//	//注意：完全替换==（3 + 1 * 3 + 1）
//
//	printf("%d\n", SQUARE((3 + 1)));
//
//	printf("%d\n", DOUBLE(4) * 10);
//
//	return 0;
//}

	