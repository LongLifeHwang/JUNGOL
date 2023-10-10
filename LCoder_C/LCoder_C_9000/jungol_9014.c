#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	int age;

	printf("당신의 나이는 몇 살입니까? ");
	scanf("%d", &age);
	printf("당신의 나이는 %d살이군요.", age);
	return 0;
}
