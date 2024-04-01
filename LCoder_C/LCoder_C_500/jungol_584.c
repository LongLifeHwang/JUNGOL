#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARR 4

int main(void)
{
	int arr[ARR] = { 1, 2, 3 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			printf("%d + %d = %d\n", arr[i], arr[j], arr[i] + arr[j]);
		}
	}
	return 0;
}
