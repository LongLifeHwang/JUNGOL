#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("세 수를 입력하세요. ");
	scanf("%d %d %d", &a, &b, &c);
	printf("입력받은 수중 가장 큰 수는 ");
	if (a > b && a > c)
	{
		printf("%d", a);
	}
	else if (b > a && b > c)
	{
		printf("%d", b);
	}
	else
	{
		printf("%d", c);
	}
	printf("입니다.");
	return 0;
}
