#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum = 0;

void j_9104_1(int n)
{
	if (n>0)
	{
		sum += n % 10;
		n /= 10;
		j_9104_1(n);
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
	j_9104_1(n);
	return 0;
}
