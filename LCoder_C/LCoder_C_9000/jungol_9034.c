#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("주사위를 두 번 던진 결과를 입력하세요. ");
	scanf("%d %d", &a, &b);
	if (a >= 4 && b >= 4)
	{
		printf("이겼습니다.");
	}
	else if (a >= 4 || b >= 4)
	{
		printf("비겼습니다.");
	}
	else
	{
		printf("졌습니다.");
	}
	return 0;
}
