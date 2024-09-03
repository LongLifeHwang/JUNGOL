#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n[11] = { 0 };
	int temp;
	
	temp = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &n[i]);
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (n[i] < n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", n[i]);
	return 0;
}
