#define _CRT_SECURE_NO_WARNINGS
// 맨 앞줄에 작성
#include <stdio.h>

int main(void)
{
	int height;

	height = 0;
	printf("height = ");
	scanf("%d", &height);
	printf("Your height is %dcm.", height);
	return 0;
}
