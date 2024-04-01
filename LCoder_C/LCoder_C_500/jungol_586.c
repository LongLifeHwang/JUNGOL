#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int first, second;

void j_586_1(int a, int b)
{
	first = pow(abs(a - b), 2);
	second = pow(abs(a + b), 3);
}

int main(void)
{
	int a;
	int b;

	scanf("%d %d", &a, &b);
	j_586_1(a, b);
	printf("(%d - %d) ^ 2 = %d\n(%d + %d) ^ 3 = %d", a, b, first, a, b, second);
	return 0;
}
