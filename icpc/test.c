//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////
//int main()
//{
//    int n=1;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int sum = 0;
//        int M, N;
//        scanf("%d %d", &M, &N);
//        int a[8];
//        for (int i = 0; i < N; i++)
//        {
//            scanf("%d", &a[i]);
//            sum += a[i];
//        }
//        int j = 2;
//        while (j++ <= sum)
//        {
//            if (sum % j == 0 && N % j == 0 && j >= M)
//            {
//                printf("%d\n", j);
//                break;
//            }
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    
//   // scanf("%d %d", &N, &k);
//    int sum = 0;
//    int a[2][4]={0};
//    char b[4];
//    scanf("%s", &b[0]);
//    for (int i = 0; i < 4; i++)
//    {
//        a[0][i] = *(b + i)-'0';
//    }
//    for (int i = 1; i < 2; i++)
//    {
//        for (int j = 0; j < 4 - i; j++)
//        {
//            if (a[i - 1][j] > a[i - 1][j + 1])
//            {
//                a[i][j] = a[i - 1][j];
//            }
//            else
//            {
//                a[i][j] = a[i - 1][j + 1];
//            }
//        }
//        
//        for (int i = 0; i < 2; i++)
//        {
//            for (int j = 0; j < 4; j++)
//            {
//                if (a[i][j] == 1)
//                {
//                    sum++;
//                }
//            }
//        }
//    }
//       printf("%d\n", sum);
//    
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int x, y, z;
//        int arr[3];
//        scanf("%d %d %d", &x, &y, &z);
//        arr[0] = x, arr[1] = y, arr[2] = z;
//        for (int i = 0; i < 3; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                if (arr[j] < arr[j + 1])
//                {
//                    int tmp = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = tmp;
//                }
//            }
//        }
//        printf("%d\n", (arr[0] + 2 * arr[2]) * (arr[0] + 2 * arr[2]) + (arr[1] - arr[2]) * (arr[1] - arr[2]));
//    }
//    return 0;
//}

//int main()
//{
//	int a = 4 * 3 * 2 * 1;
//	int z = 0;
//	int b = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == 0&&a[i+1]==0)
//		{
//			z++;
//		}
//		if (a[i] == 0 && a[i + 1] != 0)
//		{
//			b = z!;
//			z = 0;
//		}
//	}
//
//
//	return 0;
//}

////int N, k;
////scanf("%d %d", &N, &k);
////k = k + 1;
////int a[k][N];
////for (int i = 0; i < k; i++)
////{
////    for (int j = 0; j < N; j++)
////    {
////        a[i][j] = 0;
////    }
////}
////char b[N];
////scanf("%s", &b[0]);
////for (int i = 0; i < N; i++)
////{
////    a[0][i] = *(b + i) - '0';
////}
////for (int i = 1; i < k; i++)
////{
////    for (int j = 0; j < N - i; j++)
////    {
////        if (a[i - 1][j] > a[i - 1][j + 1])
////        {
////            a[i][j] = a[i - 1][j];
////        }
////        else
////        {
////            a[i][j] = a[i - 1][j + 1];
////        }
////    }
////}
////int sum = 0;
////for (int i = 0; i < k; i++)
////{
////    for (int j = 0; j < N; j++)
////    {
////        if (a[i][j] == 1)
////        {
////            sum++;
////        }
////    }
////}
////printf("%d\n", sum);

//#define k 4
//#define n 1
//
//#include <stdlib.h>
//
//int main()
//{
//    int t = 0;
//    scanf("%d", &t);
//    while (t--)
//    {
//       // int k, n;
//        int z = 1;
//        //scanf("%d %d", &k, &n);
//        int a[k];
//        int sumA = 0;
//        int sumB = 0;
//        int sumC = 0;
//        int sumD = 0;
//        //char b[4];
//        int x = getchar();
//        for(int i = 0; i < k; i++)
//        {
//            
//            a[i] = getchar() - '0';
//        }
//        int sum = 0;
//        for (int i = 1; i <= k; i++)
//        {
//            sum += i;
//        }
//        for (int i = 0; i < k; i++)
//        {
//            if (a[i] == 0 && a[i + 1] == 0)
//            {
//                z++;
//            }
//            else if (a[i] == 0 && a[i + 1] != 0)
//            {
//                for (int i = 1; i <= z; i++)
//                {
//                    if ((n + 1) < z)
//                    {
//                        sumB += z - n + 1;
//                    }
//                    sumA += i;
//                }
//                z = 1;
//            }
//        }
//        for (int i = 1; i <= sumB; i++)
//        {
//            sumC += i;
//        }
//        for (int i = 1; i <= k - (n + 1); i++)
//        {
//            sumD += i;
//        }
//        printf("%d\n", sum - sumA + sumC - sumD);
//    }
//    return 0;
//}