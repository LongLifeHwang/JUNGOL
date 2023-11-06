#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[3][3] = { 0, }, arr2[3][3] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		printf("첫 번째 배열 %d행 ", i+1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("두 번째 배열 %d행 ", i+1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
