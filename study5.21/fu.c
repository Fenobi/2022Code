#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[5];
//    int arr2[6];
//    int str[11];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//        str[i] = arr1[i];
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//        str[i + n] = arr2[i];
//    }
//    for (int i = 0; i < m + n; i++)
//    {
//        for (int j = 0; j < m + n - i - 1; j++)
//        {
//            if (str[j] > str[j + 1])
//            {
//                int tmp = str[j];
//                str[j] = str[j + 1];
//                str[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < m + n; i++)
//    {
//        printf("%d ", str[i]);
//    }
//    return 0;
//}
//#include <math.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int n = num;
//    int i = 0;
//    int t = 1;
//    while (n)
//    {
//        n /= 10;
//        i++;
//    }
//    while (i--)
//    {
//        if ((int)(num / pow(10, i)) % 2 == 1)
//        {
//            t += pow(10, i);
//        }
//        
//    }
//    printf("%d", t-1);
//    return 0;
//}

    //int main()
    //{
    //    int n;
    //    scanf("%d", &n);
    //    int i = 0;
    //    int j = 0;
    //    for (i = 0; i < n; i++)
    //    {
    //        for (j = 0; j < n; j++)
    //        {
    //            if (n-j-1>i)
    //            {
    //                printf("  ");
    //            }
    //            else
    //            {
    //                printf("* ");
    //            }
    //        }
    //        printf("\n");
    //    }
    //    return 0;
    //}

//#include <stdio.h>
//int main()
//{
//    int m, d, t;
//    double s = 0.0;
//    scanf("%lf %d %d %d", &s, &m, &d, &t);
//    if (m == 11 && d == 11)
//    {
//        s = s * 0.7 - t * 50;
//    }
//    else if (m == 12 && d == 12)
//    {
//        s = s * 0.8 - t * 50;
//    }
//    if (s <= 0.0)
//    {
//        s = 0.0;
//    }
//    printf("%.2lf", s);
//    return 0;
//}

//#include <math.h>
//int main()
//{
//    double arr[] = { 12.0,34.0,4.0,23.0,34.0,45.0,18.0,3.0,11.0 };
//    double sum = 0;
//    for (int i = 0; i < 8; i++) 
//    {
//        sum += sqrt((arr[i] + arr[i + 1]) / 2.0);
//      
//    }
//    printf("%lf\n", sum);
//
//    return 0;
//}

//int main()
//{
//    int pp[26] = { 0 };
//    char ch = 0;
//    int count = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        count = ch - 'a';
//        pp[count]++;
//    }
//    for (int i = 0; i < 26; i++)
//    {
//        printf("%d ", pp[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int a1[] = { 9,1,4,2,3,6,5,8,7 };
//    int a2[9] = { 0 };
//    int i = 0;
//    int max = a1[0];
//    int min = 1;
//   
//    a2[1] = max;
//    a2[0] = min;
//    for (i = 3; i < 9; i += 2)
//    {
//        for (int j = 0; j < 9; j++)
//        {
//            if (a2[i] < a1[j] && a2[i - 2] > a1[j])
//            {
//                a2[i] = a1[j];
//            }
//        }
//    }
//    for (i = 2; i < 9; i += 2)
//    {
//        for (int j = 0; j < 9; j++)
//        {
//            if (min > a1[j] && a2[i - 2] < a1[j])
//            {
//                min = a1[j];
//                a2[i] = min;
//            }
//        }
//    }
//    return 0;
//}
//

int main()
{
    int a1[] = { 9,1,4,2,3,6,5,8,7 };
    int a2[9] = { 0 };
    int i = 0, j = 1;
    int n = sizeof(a1) / sizeof(a1[0]);
    int left = 0;
    int right = n - 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a1[j] > a1[j + 1])
            {
                int tmp = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = tmp;
            }
        }
    }
   for(i=0;i<n-1;i+=2)
    {
       a2[i] = a1[left];
       a2[i+1] = a1[right];
       left++;
       right--;
       
    }
   if (i == n - 1)
   {
       a2[i] = a1[left];
   }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a2[i]);
    }
    return 0;
}