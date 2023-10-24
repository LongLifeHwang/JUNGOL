#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	while (1)
	{
		printf("점수를 입력하세요. ");
		scanf("%d", &a);
		if (a >= 101)
		{
			break;
		}
		else if (a >= 80)
		{
			printf("축하합니다. 합격입니다.\n");
		}
		else
		{
			printf("죄송합니다. 불합격입니다.\n");
		}
	}
	return 0;
}
