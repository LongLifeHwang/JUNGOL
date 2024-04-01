#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	float avg;

	scanf("%d %d %d", &num1, &num2, &num3);
	printf("sum : %d\n", num1+num2+num3);
	avg = (num1 + num2 + num3) / 3;
	printf("avg : %.0f\n", avg);
	return 0;
}
