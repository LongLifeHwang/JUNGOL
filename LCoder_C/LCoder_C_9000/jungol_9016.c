#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	int num1;
	float num2;
	char name[10];

	printf("키를 입력하세요. ");
	scanf("%d", &num1);
	printf("몸무게를 입력하세요. ");
	scanf("%f", &num2);
	printf("이름을 입력하세요. ");
	scanf("%s", &name);
	printf("키 = %d\n", num1);
	printf("몸무게 = %.1f\n", num2);
	printf("이름 = %s", name);
	return 0;
}
