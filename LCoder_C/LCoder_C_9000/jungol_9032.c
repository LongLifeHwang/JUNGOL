#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	printf("점수를 입력하세요. ");
	scanf("%d", &a);
	if (a >= 80)
		printf("축하합니다. 합격입니다.");
	else
		printf("불합격입니다.");
	return 0;
}
