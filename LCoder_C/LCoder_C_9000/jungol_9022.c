#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d %d", &a, &b);
	printf("a = %d, b = %d, ", ++a, --b);
	c = a + b + 1;
	printf("c = %d", c);
	return 0;
}
