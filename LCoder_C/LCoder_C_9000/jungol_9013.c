#include <stdio.h>

int main(void)
{
	float x;
	float y;

	x = 1.2340;
	y = 10.3459;
	printf("전체 7자리로 맞추고 소수 4자리까지 출력\n");
	printf("x = %7.4f\n", x);
	printf("y = %7.4f\n\n", y);
	printf("소수 2자리까지 출력(반올림)\n");
	printf("x = %0.2f\n", x);
	printf("y = %0.2f", y);
	return 0;
}
