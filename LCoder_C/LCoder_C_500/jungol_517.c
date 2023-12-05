#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	float num1;
	float num2;
	float num3;

	scanf("%f\n%f\n%f", &num1, &num2, &num3);
	printf("%.3f\n", num1);
	printf("%.3f\n", num2);
	printf("%.3f\n", num3);
	return 0;
}
