#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1, 1, 1, 1, 1 };
	int arr2[6] = { 1, };
	int arr3[6] = { 1, };
	int arr4[6] = { 1, };
	int arr5[6] = { 1, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int j = 1; j < 5; j++)
	{
		arr2[j] = arr2[j - 1] + arr1[j];
		printf("%d ", arr2[j - 1]);
	}
	printf("%d\n", arr2[4]);
	for (int j = 1; j < 5; j++)
	{
		arr3[j] = arr3[j - 1] + arr2[j];
		printf("%d ", arr3[j - 1]);
	}
	printf("%d\n", arr3[4]);
	for (int j = 1; j < 5; j++)
	{
		arr4[j] = arr4[j - 1] + arr3[j];
		printf("%d ", arr4[j - 1]);
	}
	printf("%d\n", arr4[4]);
	for (int j = 1; j < 5; j++)
	{
		arr5[j] = arr5[j - 1] + arr4[j];
		printf("%d ", arr5[j - 1]);
	}
	printf("%d\n", arr5[4]);
	return 0;
}
