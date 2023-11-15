#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a = 0;

void j_9102_1(int n)
{
	a++;
	if (a <= n)
	{
		printf("%d ", a);
		j_9102_1(n);
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	j_9102_1(n);
	return 0;
}
