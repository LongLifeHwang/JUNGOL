#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int count;
	int sum;
	float avg;
	
	avg = 0.0;
	count = 0;
	sum = 0;
	do
	{
		scanf("%d", &n);
		count++;
		sum += n;
	} while (n < 100);
	avg = (float)sum / count;
	printf("%d\n", sum);
	printf("%.1f", avg);
	return 0;
}
