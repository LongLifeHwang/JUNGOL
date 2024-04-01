#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5] = { 0, };
	int arr1[4] = { 0, };
	int arr2[4] = { 0, };
	int arr3[4] = { 0, };
	int arr4[4] = { 0, };
	int arr5[4] = { 0, };
	int count;
	
	count =0;
	for (int j = 0; j < 4; j++)
	{
		scanf("%d", &arr1[j]);
		arr[0] += arr1[j];
	}
	printf("\n");
	for (int j = 0; j < 4; j++)
	{
		scanf("%d", &arr2[j]);
		arr[1] += arr2[j];
	}
	printf("\n");
	for (int j = 0; j < 4; j++)
	{
		scanf("%d", &arr3[j]);
		arr[2] += arr3[j];
	}
	printf("\n");
	for (int j = 0; j < 4; j++)
	{
		scanf("%d", &arr4[j]);
		arr[3] += arr4[j];
	}
	printf("\n");
	for (int j = 0; j < 4; j++)
	{
		scanf("%d", &arr5[j]);
		arr[4] += arr5[j];
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= 320)
		{
			printf("pass\n");
			count++;
		}
		else
		{
			printf("fail\n");
		}
	}
	printf("Successful : %d\n", count);
	return 0;
}
