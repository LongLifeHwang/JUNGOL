#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x;
int y;

void j_9091_1(int a, int b)
{
	x = a + b;
	y = a * b;
}

int main(void)
{
	int a;
	int b;

	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
	j_9091_1(a, b);
	printf("합 : %d\n곱 : %d", x, y);
	return 0;
}
