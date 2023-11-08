#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1, };
	int arr2[6] = { 1, };
	int arr3[6] = { 1, };
	int arr4[6] = { 1, };
	int arr5[6] = { 1, };
	
	printf("%d\n", arr1[0]);
	for (int j = 1; j < 6; j++)
	{
		arr2[j] = arr1[j - 1] + arr1[j];
		if (arr2[j - 1] != 0)
		{
			printf("%d ", arr2[j - 1]);
		}
		else
		{
			printf("\n");
			break;
		}
	}
	for (int j = 1; j < 6; j++)
	{
		arr3[j] = arr2[j - 1] + arr2[j];
		if (arr3[j - 1] != 0)
		{
			printf("%d ", arr3[j - 1]);
		}
		else
		{
			printf("\n");
			break;
		}
	}
	for (int j = 1; j < 6; j++)
	{
		arr4[j] = arr3[j - 1] + arr3[j];
		if (arr4[j - 1] != 0)
		{
			printf("%d ", arr4[j - 1]);
		}
		else
		{
			printf("\n");
			break;
		}
	}
	for (int j = 1; j < 6; j++)
	{
		arr5[j] = arr4[j - 1] + arr4[j];
		if (arr5[j - 1] != 0)
		{
			printf("%d ", arr5[j - 1]);
		}
		else
		{
			printf("\n");
			break;
		}
	}
	return 0;
}

