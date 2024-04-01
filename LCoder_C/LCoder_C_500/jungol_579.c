#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[11] = { 0, };
	int n;
	int a;

	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &n);
		arr1[i] = n;
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = i; j < a; j++)
		{
			if (arr1[i] < arr1[j])
			{
				n = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = n;
			}
		}
		printf("%d ", arr1[i]);
	}
	return 0;
}
