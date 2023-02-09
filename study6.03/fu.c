#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
void main()
{
	int m = 0, x, y;
	int a[5][6] = { 12,23,23,6,45,38,89,28,43,21,99,64,63,11,55,76,23,49,47,67,14,46,2,5,3,10,39,32,82,75 };
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 6; y++)
			if (a[x][y] > m)
				m = a[x][y];
	}
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 6; y++)
		{
			if (a[x][y] - m == 0)
			{
				break;
			}
		}
		if (a[x][y] - m == 0)
		{
			break;
		}
	}

	printf("最大值是%d，下标是[%d,%d]", m, x, y);
}
