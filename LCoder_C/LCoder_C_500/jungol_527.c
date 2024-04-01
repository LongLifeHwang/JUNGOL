#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	float c;

	scanf("%d %d", &a, &b);
	c = a;
	printf("%d %.2f\n", a/b, c/b);
	return 0;
}
