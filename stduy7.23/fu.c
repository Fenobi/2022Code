#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int t = 0;
//    char arr[429496729];
//    while (n)
//    {
//        int i = n % 10;
//        arr[t] = i + '0';
//        t++;
//        n /= 10;
//    }
//
//    printf("%s", arr);
//
//    return 0;
//}

//int fun(unsigned int x)
//{
//    int n = 0;
//    while (x + 1)
//    {
//        n++;
//        x = x | (x + 1);
//    } 
//    return n;
//}


int main()
{
    printf("%d\n",fun(2014));
    return 0;
}
//int main()
//{
//    char arr[100] = "$bo*y gi!r#l";
//    //scanf("%s", &arr);
//    int n = strlen(arr);
//    
//    for (int i = 0; i < n; i++)
//    {
//        char str = arr[n - 1 - i];
//        if ((str < 'a' || str > 'z') && (str < 'A' || str > 'Z'))
//        {
//            arr[n - 1 - i] = '\0';
//            printf("%s ", arr + (n - i));
//        }
//    }
//    printf("%s ", arr);
//    return 0;
//}