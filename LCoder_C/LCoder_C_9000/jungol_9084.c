#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void star(int a)
{
	for (int i = 0; i < a; i++)
	{
		printf("*");
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		star(i);
		printf("\n");
	}
	return 0;
}
