#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;
	printf("%d + %d = %d\n", a, b, a+b);
	a = 30;
	b = 40;
	printf("%d + %d = %d", a, b, a + b);
	return 0;
}
