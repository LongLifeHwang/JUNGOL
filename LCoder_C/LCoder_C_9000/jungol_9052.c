#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum;
	float avg;

	sum = 0;
	for (i = 1; i <= 5; i++)
	{
		scanf("%d", &n);
		sum += n;
	}
	avg = (float)sum / 5;
	printf("총점 : %d\n", sum);
	printf("평균 : %.1f", avg);
	return 0;
}
