#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int j_9085_1(int a, int b)
{
	return a + b;
}

int j_9085_2(int a, int b)
{
	return abs(a - b);
}

int main(void)
{
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);
	printf("두 수의 합 = %d\n", j_9085_1(a, b));
	printf("두 수의 차 = %d\n", j_9085_2(a, b));
	return 0;
}
