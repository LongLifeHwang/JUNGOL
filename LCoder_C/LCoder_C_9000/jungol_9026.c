#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	printf("%d %d %d %d", b && c, a || b, !b, !a);
	return 0;
}
