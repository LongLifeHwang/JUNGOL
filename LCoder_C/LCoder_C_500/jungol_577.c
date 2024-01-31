#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x;
int y;

void j_577_1(int a, int b)
{
	if (a >= b)
	{
		x = a / 2;
		y = b * 2;
	}
	else
	{
		x = a * 2;
		y = b / 2;
	}
}

int main(void)
{
	int a;
	int b;
	
	scanf("%d %d", &a, &b);
	j_577_1(a, b);
	printf("%d %d", x, y);
	return 0;
}
