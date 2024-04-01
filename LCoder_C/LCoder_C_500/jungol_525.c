#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d", (a>b)&&(a>c), (a==b)&&(a==c));
	return 0;
}
