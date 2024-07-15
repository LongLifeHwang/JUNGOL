#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define data_size 10

void j_585_1(int data[10])
{
	int temp;

	for (int i = 1; i < data_size; i++)
	{
		for (int j = 0; j < data_size - 1; j++)
		{
			if (data[j] < data[j + 1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
		for (int z = 0; z < data_size; z++)
			printf("%d ", data[z]);
		printf("\n");
	}
}

int main(void)
{
	int arr[data_size] = { 0, };

	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	j_585_1(arr);
	return 0;
}
