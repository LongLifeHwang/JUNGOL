#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	int count;
	int sum;
	float avg;

	n = 0;
	count = 0;
	sum = 0;
	do
	{
		scanf("%d", &n);
		if (n % 2 != 0)
		{
			count++;
			sum += n;
		}
		else
		{
			continue;
		}
	} while (n != 0);
	avg = (float)sum / count;
	printf("홀수의 합 = %d\n", sum);
	printf("홀수의 평균 = %.0f", floor(avg));
	return 0;
}
