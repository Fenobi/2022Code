#pragma once

#include <stdio.h>
#include <assert.h>

//ð������
void BuobleSort(int* a, int n);
//ѡ������
void SelectSort(int* a, int n);
//��������
void InsertSort(int* a, int n);
//������
void HeapSort(int* a, int n);
//ϣ������
void ShellSort(int* a, int n);
//��������
//�ݹ�
void QuickSort(int* a, int n);
//�ǵݹ�
void QuickSortNonR(int* a, int n);
//�鲢����
//�ݹ�
void MergeSort(int* a, int n);
//�ǵݹ�
void MergeSortNonR(int* a, int n);

void Print(int* a, int n);