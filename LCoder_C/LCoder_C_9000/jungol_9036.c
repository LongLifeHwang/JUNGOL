#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int b;

	printf("1. 삽입\n2. 수정\n3. 삭제\n");
	printf("숫자를 선택하세요. ");
	scanf("%d", &b);
	if (b == 1)
	{
		printf("삽입을 선택하셨습니다.");
	}
	else if (b == 2)
	{
		printf("수정을 선택하셨습니다.");
	}
	else
	{
		printf("삭제을 선택하셨습니다.");
	}
	return 0;
}
