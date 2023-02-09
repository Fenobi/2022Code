#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p = (int*)malloc(10 * sizeof(int));
    //สนำร
    if (p == NULL)
    {
        perror("main");//main:xxxxxxx
        return 0;
    }
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }
    return 0;
}

