#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a;
	float b;

	scanf("%f %f", &a, &b);
	if (a >= 4 && b >= 4)
	{
		printf("A");
	}
	else if (a >= 3 && b >= 3)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}
	return 0;
}
