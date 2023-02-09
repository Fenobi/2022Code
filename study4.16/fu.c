#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };//FIRST POINT NEW ENTER
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//杨氏矩阵
//内容：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//判断在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于等于O(N)

//1 2 3
//2 3 4
//4 5 6

//int main()
//{//时间复杂度=O(N*N)
//	int arr[3][3] = { {1,2,3},{2,3,4},{4,5,6} };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d", &k);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (k == arr[i][j])
//			{
//				printf("有\n");
//			}
//		}
//	}
//	return 0;
//}

//int find_num(int arr[3][3], int k,int l,int r)
//{
//	int left = 0;
//	int right = r - 1;
//	while (right >= 0 && left <= 2)
//	{
//		if (arr[left][right] > k)
//		{
//			right--;
//		}
//		else if (arr[left][right] < k)
//		{
//			left++;
//		}
//		else
//		{
//			printf("找到了下标为：%d %d\n", left, right);
//			return 1;
//		}
//	}
//	return 0;
//}
//
////还可通过指针传下标出去
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{3,4,5},{4,5,6} };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int n = find_num(arr, k, left, right);
//	if (n == 1)
//	{
//		printf("有\n");
//	}
//	else
//	{
//		printf("没有\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//
//        if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        int a = getchar();
//    }
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	printf("请输入自幂数的位数:>");
//	int x = 0;
//	scanf("%d", &x);
//	x = pow(10, x);
//	int i = 0;
//	for (i = 0; i <= x; i++)
//	{
//		int n = 0;
//		int tmp1 = i;
//		while (tmp1)//确定位数n
//		{
//			tmp1 /= 10;
//			n++;
//		}
//		int tmp2 = i;
//		int sum = 0;
//		while (tmp2)//计算
//		{
//			sum += pow(tmp2 % 10, n);
//			tmp2 /= 10;
//		}
//		if (sum == i)//判断
//		{
//			printf("自幂数=%d\n", i);
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int tmp1 = i;
//		int sum = 0;
//		while (tmp1)//计算
//		{
//			sum += pow(tmp1 % 10, 3);
//			tmp1 /= 10;
//		}
//		if (sum == i)//判断
//		{
//			printf("水仙花数=%d\n", i);
//		}
//	}
//	return 0;
//}