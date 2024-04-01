#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int sum = 0;

void j_592_1(int n)
{
	if (n > 0)
	{
		sum += pow(n % 10, 2);
		n /= 10;
		j_592_1(n);
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
	j_592_1(n);
	return 0;
}
