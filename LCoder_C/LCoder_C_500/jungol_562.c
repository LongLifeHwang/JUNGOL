#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n[11] = { 0 };
	int sum;
	int sum_g;
	float avg;
	
	sum_g = 0;
	sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n[i]);
		if (i % 2 == 0)
		{
			sum += n[i];
		}
		else
		{
			sum_g += n[i];
		}
	}
	avg = (float)sum_g / 5;
	printf("sum : %d\navg : %.1f", sum, avg);
	return 0;
}
