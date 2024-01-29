#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int j_576_1(int a, int b, char n[1])
{
	if ((int)n[0] == 43)
	{
		return a + b;
	}
	else if ((int)n[0] == 45)
	{
		return a - b;
	}
	else if ((int)n[0] == 42)
	{
		return a * b;
	}
	else if ((int)n[0] == 47)
	{
		return a / b;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	char n[2];
	int a;
	int b;

	scanf("%d %s %d", &a, &n, &b);
	printf("%d %s %d = %d", a, n, b, j_576_1(a, b, n));
	return 0;
}
