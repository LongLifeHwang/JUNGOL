#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	a = 0;
	scanf("%d", &a);
	printf("%d\n", a);
	if (a > 10)
	{
		printf("10보다 큰 수를 입력하셨습니다.");
	}
	return 0;
}
