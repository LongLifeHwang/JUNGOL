#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int a;
	int b;
	
	a = 65;
	b = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n+1-i; j++)
		{
			printf("%d ", b);
			b++;
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%c ", a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
