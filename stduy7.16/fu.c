#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//struct S
//{
//	int i;
//	char arr[20];
//	float f;
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char a[] = "abc";
//	
//	struct S s = { 0 };
//	/*s.i = 16;
//	s.arr[20] = '1';
//	s.f = 1.75;
//	fprintf(pf, "%d %s %f",s.i,s.arr,s.f);*/
//
//	fscanf(pf, "%d %s %f", &s.i, &s.arr, &s.f);
//	printf("%d %s %f", s.i, s.arr, s.f);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}