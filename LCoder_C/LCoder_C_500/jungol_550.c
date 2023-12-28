#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int n;

	a = 1;
	scanf("%d", &n);
	for (int i = n; i >= 1; i--)
	{
		while (a <= i)
		{
			printf("*");
			a++;
		}
		a = 1;
		printf("\n");
	}
	for (int i = 1; i <= n; i++)
	{
		while (a <= i)
		{
			printf("*");
			a++;
		}
		a = 1;
		printf("\n");
	}
	return 0;
}
