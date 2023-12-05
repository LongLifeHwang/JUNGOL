#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	double num1;
	double num2;
	char name[3];

	scanf("%lf", &num1);
	scanf("%lf", &num2);
	scanf("%s", &name);
	printf("%.2f\n", num1);
	printf("%.2f\n", num2);
	printf("%s\n", name);
	return 0;
}
