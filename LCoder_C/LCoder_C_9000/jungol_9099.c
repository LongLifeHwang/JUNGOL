#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void j_9099_1(int arr[6])
{
	int n;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				n = arr[i];
				arr[i] = arr[j];
				arr[j] = n;
			}
		}
		printf("%d ", arr[i]);
	}
}

int main(void)
{
	int arr[6] = { 0, };
	
	j_9099_1(arr);
	return 0;
}
