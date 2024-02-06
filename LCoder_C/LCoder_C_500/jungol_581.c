#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int a;
	int b;
	float c;
	float d;

	scanf("%d %d", &a, &b);
	scanf("%f %f", &c, &d);
	if (abs(a) >= abs(b))
	{
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", b);
	}
	if (fabs(c) >= fabs(d))
	{
		printf("%.2f\n", d);
	}
	else
	{
		printf("%.2f\n", c);
	}
	return 0;
}
