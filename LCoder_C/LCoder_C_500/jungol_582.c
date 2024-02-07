#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a;

	scanf("%lf", &a);
	printf("%.2f\n", sqrt(a /= 3.14));
	return 0;
}
