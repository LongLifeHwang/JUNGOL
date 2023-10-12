#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;

	printf("두 개의 수를 입력하시오. ");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);
	//printf문에서 %를 입력하기 위해서는 '%%' 사용
	return 0;
}
