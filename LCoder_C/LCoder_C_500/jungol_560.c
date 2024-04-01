#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n[11] = { 0 };
	int min;
	
	min = 1000;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		if (min > n[i])
		{
			min = n[i];
		}
	}
	printf("%d", min);
	return 0;
}
