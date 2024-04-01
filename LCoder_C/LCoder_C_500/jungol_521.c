#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int a;
	int b;
	int c;

	scanf("%d %d", &a, &b);
	printf("%d %d ", ++a, --b);
	c = (a - 1) * b;
	printf("%d", c);
	return 0;
}
