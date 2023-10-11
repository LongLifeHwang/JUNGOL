#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("두 수를 입력하시오. ");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d\n%d * %d = %d", num1, num2, num1+num2, num1, num2, num1*num2);
	return 0;
}
