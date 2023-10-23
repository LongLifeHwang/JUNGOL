#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int b;

	printf("점수를 입력하세요. ");
	scanf("%d", &b);
	if (b >= 90)
	{
		printf("A");
	}
	else if (b >= 80)
	{
		printf("B");
	}
	else if (b >= 70)
	{
		printf("C");
	}
	else if (b >= 60)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;
}
