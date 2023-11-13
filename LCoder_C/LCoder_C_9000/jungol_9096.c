#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a;

	printf("원의 반지름 : ");
	scanf("%lf", &a);
	printf("원의 넓이\n버림 : %.0f\n반올림 : %.0f\n올림 : %.0f\n", floor(a * a * 3.14), round(a * a * 3.14), ceil(a * a * 3.14));
	return 0;
}
