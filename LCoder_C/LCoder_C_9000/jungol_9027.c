#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	float c;
	float d;

	scanf("%f %f", &c, &d);
	a = c;
	b = d;
	printf("%.0f %d", c + d, a + b);
	return 0;
}
