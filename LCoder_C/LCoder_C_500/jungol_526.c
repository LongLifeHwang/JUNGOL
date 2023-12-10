#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int e;
	int f;
	double c;
	double d;

	scanf("%lf %lf", &c, &d);
	a = c * d;
	e = c;
	f = d;
	printf("%d %d", a, e*f);
	return 0;
}
