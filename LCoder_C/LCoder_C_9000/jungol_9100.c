#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define data_size 10

int j_9100_1(int a, int b)
{
	a += 10;
	b -= 5;
	return a * b;
}

int main(void)
{
	int a;
	int b;

	scanf("%d %d", &a, &b);
	printf("(%d + 10) * (%d - 5) = %d", a, b, j_9100_1(a, b));
	return 0;
}
