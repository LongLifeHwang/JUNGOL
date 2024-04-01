#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[2][4] = { 0, };
	int arr2[2][4] = { 0, };

	printf("first array");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("second array");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr1[i][j] * arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
