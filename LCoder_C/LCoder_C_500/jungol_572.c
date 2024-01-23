#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void size(float a)
{
	printf("%.2f" ,a * a * 3.14);
}

int main(void)
{
	int n;

	scanf("%d", &n);
	size(n);
	return 0;
}
