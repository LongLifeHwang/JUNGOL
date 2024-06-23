#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int standard;

	scanf("%d %d", &a, &b);
	standard = b + 100 - a;
	printf("%d\n", standard);
	if (standard > 0)
		printf("Obesity");
	return 0;
}
