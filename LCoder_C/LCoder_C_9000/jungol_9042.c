#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int count;
	int sum;
	float avg;

	count = 0;
	sum = 0;
	avg = 0.0;
	do
	{
		scanf("%d", &n);
		count++;
		sum += n;
	} while (n != 0);
	count--;
	avg = (float)sum / count;
	printf("입력된 자료의 개수 = %d\n", count);
	printf("입력된 자료의 합계 = %d\n", sum);
	printf("입력된 자료의 평균 = %.2f", avg);
	return 0;
}
