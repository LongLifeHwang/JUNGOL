#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float j_9086_1(float a, float b, float c)
{
	return (a + b + c) / 3;
}

int main(void)
{
	float a;
	float b;
	float c;

	printf("세과목의 점수를 입력하세요. ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	printf("평균 : %.2f", j_9086_1(a, b, c));
	return 0;
}
