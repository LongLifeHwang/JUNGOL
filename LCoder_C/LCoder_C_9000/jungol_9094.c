#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main(void)
{
	int a;
	int b;
	float c;
	float d;

	scanf("%d %d", &a, &b);
	scanf("%f %f", &c, &d);
	printf("두 정수의 차 : %d\n", abs(a - b));
	printf("두 실수의 차 : %f\n", fabs(c - d));
	return 0;
}
