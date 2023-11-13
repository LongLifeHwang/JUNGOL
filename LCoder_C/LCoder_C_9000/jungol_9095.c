#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a;
	double c;
	double d;

	printf("정사각형의 넓이 : ");
	scanf("%lf", &a);
	printf("정사각형의 한 변의 길이 : %lf\n", sqrt(a));
	printf("밑과 지수 : ");
	scanf("%lf %lf", &c, &d);
	printf("%lf의 %lf승은 %lf입니다.\n", c, d, pow(c, d));
	return 0;
}
