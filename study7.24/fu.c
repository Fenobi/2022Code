#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	float a[3] = { 1.5,2.5,3.5 }, * pa = a;
//	printf("%f", *(pa++) *= 3);
//	int* p = 0;
//	p = 0;
//
//	return 0;
//
//}
#include <stdlib.h>
//#include <string.h>
//
//char repeatedCharacter(char s[])
//{
//    int *arr = (int*)calloc(27, sizeof(int));
//
//    for (int i = 0; i < strlen(s); i++)
//    {
//        arr[s[i] - 'a']++;
//        if (arr[s[i] - 'a'] == 2)
//        {
//            return s[i];
//        }
//    }
//}
//int main()
//{
//    char a = repeatedCharacter("hthg");
//    printf("%c", a);
//    return 0;
//}

//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
//{
//	int* arr = (int*)malloc(sizeof(int) * 2);
//	*returnSize = 2;
//	for (int i = 0; i < numbersLen; i++)
//	{
//		if (numbers[i] > target)
//		{
//			continue;
//		}
//		for (int j = i + 1; j < numbersLen; j++)
//		{
//			if (numbers[i] + numbers[j] == target)
//			{
//				arr[0] = i + 1;
//				arr[1] = j + 1;
//				return arr;
//			}
//		}
//	}
//	return arr;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	int str[3] = { 3,2,4 };
//	int *a=twoSum(str, 3, 6, arr);
//	printf("%d", *a);
//	printf("%d", *(a+1));
//	return 0;
//}