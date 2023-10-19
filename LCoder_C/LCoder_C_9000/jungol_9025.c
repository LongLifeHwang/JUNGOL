#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	 a = 0;
	 b = 1;
	 c = 2;
	printf("%d %d %d %d", a && b, a || b, b && c, !a);
	return 0;
}
