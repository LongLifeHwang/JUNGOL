#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x;
int y;

void j_9089_1(int a, int b)
{
	x = b;
	y = a;
}

int main(void)
{
	int a;
	int b;

	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
	x = a;
	y = b;
	j_9089_1(x, y);
	printf("첫 번째 함수 실행중 x = %d, y = %d\n", x, y);
	j_9089_1(x, y);
	printf("첫 번째 함수 실행후 a = %d, b = %d\n", x, y);
	j_9089_1(x, y);
	printf("두 번째 함수 실행중 x = %d, y = %d\n", x, y);
	printf("두 번째 함수 실행후 a = %d, b = %d\n", x, y);
	return 0;
}
