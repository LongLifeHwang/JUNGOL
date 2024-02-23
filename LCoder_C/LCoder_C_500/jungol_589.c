#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum = 0;
int a = 1;

void j_589_1(int n)
{
	if (a <= n)
	{
		sum += a;
		a++;
		j_589_1(n);
	}
	else
	{
		printf("%d", sum);
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	j_589_1(n);
	return 0;
}
