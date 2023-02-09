#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int Fshu(int n)
//{
//    int a = 0;
//    int b = 0;
//    int sum = 1;
//    for (int i = 0; i < n; i++)
//    {
//        a = b;
//        b = sum;
//        sum = a + b;
//    }
//    return sum;
//}
//
//int main()
//{
//    int n;
//    int min = 10000;
//    scanf("%d", &n);
//    for (int i = 1;; i++)
//    {
//        int f = Fshu(i);
//        if (min > n - f)
//        {
//            min = n - Fshu(i);
//        }
//    }
//}
// 
//#include <string.h>
//
//void youyi(char *str, int length)
//{
//    while (length--)
//    {
//        *(str + length) = *(str + length - 1);
//    }
//}
//void replaceSpace(char* str, int length)
//{
//    int n = 1;
//    while (*str)
//    {
//        if (*str == ' ')
//        {
//            youyi(str, length - n);
//            youyi(str, length - n);
//            strncpy(str, "%20",3);
//            str += 2;
//            n += 2;
//        }
//        str++;
//        n++;
//    }
//}


//int main()
//{
//    char arr[20] = "we are happy";
//    //char arr1[] = "fg";
//    replaceSpace(arr, 20);
//
//    return 0;
//}