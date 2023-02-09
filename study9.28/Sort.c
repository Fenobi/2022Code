#define _CRT_SECURE_NO_WARNINGS 

#include "Sort.h"

void Print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//√∞≈›≈≈–Ú
void BuobleSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
			}
		}
	}
}

//—°‘Ò≈≈–Ú
void SelectSort(int* a, int n)
{
	int imin = 0;
	int j = 0;
	while(j<n)
	{
		for (int i = j + 1; i < n; i++)
		{
			if (a[i] < a[imin])
			{
				imin = i;
			}
		}
		Swap(&a[imin], &a[j]);
		j++;
	}
}

//≤Â»Î≈≈–Ú
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[i + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

void AjustDown(int* a, int n, int parent)
{
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (a[child + 1] > a[child] && child + 1 < n)
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}
//∂—≈≈–Ú
void HeapSort(int* a, int n)
{
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AjustDown(a, n, i);
	}
	int i = 1;
	while (n > i)
	{
		Swap(&a[0], &a[n - i]);
		AjustDown(a, n - i, 0);
		i++;
	}
}
//œ£∂˚≈≈–Ú
void ShellSort(int* a, int n);
//øÏÀŸ≈≈–Ú
//µ›πÈ
void QuickSort(int* a, int n)
{

}
//∑«µ›πÈ
void QuickSortNonR(int* a, int n);
//πÈ≤¢≈≈–Ú
//µ›πÈ
void MergeSort(int* a, int n);
//∑«µ›πÈ
void MergeSortNonR(int* a, int n);

