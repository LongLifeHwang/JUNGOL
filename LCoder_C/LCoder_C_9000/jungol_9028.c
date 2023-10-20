#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);
	printf("%d / 4 = %d\n", a, a / 4);
	printf("%d / 4.0 = %.2f", a, a / 4.0);
	return 0;
}
