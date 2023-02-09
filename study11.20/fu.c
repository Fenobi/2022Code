#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//    char a[5000];
//    gets(a);
//    char ch;
//    int len = strlen(a);
//    while ((ch = getchar()) != '\n')
//    {
//        for (int i = 0; i < len; i++)
//        {
//            if (a[i] == ch)
//            {
//                a[i] = '*';
//
//            }
//        }
//    }
//    char a1[5000];
//    int t = 0;
//    for (int i = 0; a[i] != '\0'; i++)
//    {
//        if (a[i] != '*')
//        {
//            a1[t] = a[i];
//            ++t;
//        }
//    }
//    a1[t] = '\0';
//    printf("%s\n", a1);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a[6];
//    for (int i = 0; i < 3 * n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    qsort(a, 3 * n, 4, cmp_int);
//
//    int max = 0;
//    for (int i = n; i < 3 * n - 1; i += 2)
//    {
//        max += a[i];
//    }
//
//    printf("%d\n", max);
//
//    return 0;
//}