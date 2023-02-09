#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//整型数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a + 0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", *&a);
	//printf("%d\n", sizeof(&a + 1));
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));//1
	printf("%d\n", strlen(*arr));//1
	printf("%d\n", strlen(arr[1]));//1
	printf("%d\n", strlen(&arr));//
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	printf("printf('Hello woorld!\n');");
//	printf("cout<<'Hello world!'<<endl;");
//		return 0;
//}

//int main()
//{
//	float t = 0;
//	float l = 0;
//	float BMI = 0;
//	scanf("%f %f", &t, &l);
//	BMI = t / (l * l);
//	printf("%.2f", BMI);
//	return 0;
//}