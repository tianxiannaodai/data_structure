#define _CRT_SECURE_NO_WARNINGS 1
#include"shellSort.h"
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int arrLength = sizeof(arr) / sizeof(arr[0]);
	printf("��      ��      ǰ��");
	Show(arr, arrLength);
	printf("ϣ   ��    ��   ��");
	shellsort(arr, arrLength);
	Show(arr, arrLength);

}