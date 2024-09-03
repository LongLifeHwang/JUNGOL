#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n[11] = { 0 };
	int max;
	int min;
	
	max = 0;
	min = 10000;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		if (n[i] < 100)
		{
			if (max < n[i])
				max = n[i];
		}
		else
		{
			if (min > n[i])
				min = n[i];
		}
	}
	if (max == 0)
		max = 100;
	if (min == 10000)
		min = 100;
	printf("%d %d", max, min);
	return 0;
}
