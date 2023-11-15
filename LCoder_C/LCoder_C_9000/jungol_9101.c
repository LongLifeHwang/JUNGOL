#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A = 0;

void j_9101_1(void)
{
	printf("홍길동\n");
	A ++;
	if (A < 10)
	{
		j_9101_1();
	}
}

int main(void)
{
	j_9101_1();
	return 0;
}
