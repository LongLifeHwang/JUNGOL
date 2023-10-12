#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	float num1;
	float num2;

	printf("두 개의 실수를 입력하시오.\n");
	scanf("%f\n%f", &num1, &num2);
	printf("x = %.2f\n", num1);
	printf("y = %.2f\n", num2);
	return 0;
}
