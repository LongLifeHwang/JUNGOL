#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int j_574_1(int a, int b, int c)
{
	if (a >= b)
		b = a;
	else
		a = b;
	if (a >= c)
		return a;
	else
		return c;
}

int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d", j_574_1(a, b, c));
	return 0;
}
