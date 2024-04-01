#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);
	printf("%d\n", num++);
	printf("%d\n", ++num);
	return 0;
}
