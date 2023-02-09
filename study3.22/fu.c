#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char ch1 = 0;
//	char ch2 = 0;
//	/*scanf("%c%c", &ch1,&ch2);
//	printf("%c %c\n", ch1,ch2);*/
//	ch1 = getchar();
//	ch2 = getchar();
//	putchar(ch1);
//	putchar(ch2);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	scanf("%d%d", &x, &y);
//	for (i = 2; i <= x && i <= y; i++)
//	{
//		if (x % i == 0 && y % i == 0)
//		{
//			printf("最小公倍数=%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float a,b,c;
//	float s,v;
//	printf("Please input a,b,c:");
//	scanf("%f%f%f",&a,&b,&c);
//	s = a * b;
//	v = a * b * c;
//	printf("a=%.2f,b=%.2f,c=%.2f\n",a,b,c);
//	printf("s=   %.2f\tv=%.2f",s,v);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 4, c = 5;
//	float d = 1.2, e = 2.23, f = -43.56;	
//	char ch1 = 'A', ch2 = 'C';
//	printf("a=%3d,b=%d\t,c=**%d\nd=%.1f\ne=   %.2f\nf=%.4f  **\n%c<->%d\t%c<->%d", a, b, c, d, e, f, ch1, ch1,ch2,ch2);
//	return 0;
//}

//#include <string.h>
//void daoxv(char* arr1,char* arr2)
//{
//	
//	while (arr1 < arr2)
//	{
//		char tmp = 0;
//		tmp = *(arr1);
//		*(arr1) = *(arr2);
//		*(arr2) = tmp;
//		arr1++;
//		arr2--;
//	}
//}
//
//int main()
//{	
//	char arr[30] = { 0 };
//	gets(arr);
//	int right = strlen(arr) - 1;
//	daoxv(arr,(arr+right));
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		if (*end != ' '&&*end != '\0')
//		{
//			end++;
//		}
//		daoxv(start, end-1);
//		start = end + 1;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

int main()
{

	return 0;
}

