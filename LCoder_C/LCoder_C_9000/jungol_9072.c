#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n[11] = { 0 };
	int sum;
	float avg;

	sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		sum += n[i];
	}
	avg = (float)sum / 10;
	printf("총점 = %d\n평균 = %.1f", sum, avg);
	return 0;
}
