#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);
	if (a > 88.45)
	{
		printf("Heavyweight");
	}
	else if (a > 72.57)
	{
		printf("Cruiserweight");
	}
	else if (a > 61.23)
	{
		printf("Middleweight");
	}
	else if (a > 50.80)
	{
		printf("Lightweight");
	}
	else
	{
		printf("Flyweight");
	}
	return 0;
}
