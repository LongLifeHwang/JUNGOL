#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int count;
	int n;
	int sum;
	float avg;

	sum = 0;
	scanf("%d", &count);
	for (i = 1; i <= count; i++)
	{
		scanf("%d", &n);
		sum += n;
	}
	avg = (float)sum / count;
	printf("avg : %.1f\n", avg);
	if (avg >= 80)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
