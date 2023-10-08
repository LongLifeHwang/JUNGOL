#include <stdio.h>

int main(void)
{
	int r;

	r = 5;
	printf("원주 = %d * %d * %6f = %6f\n", r, 2, 3.14, r*2*3.14);
	//소수점 갯수 설정 %수f
	printf("넓이 = %d * %d * %6f = %6f\n", r, r, 3.14, r * r * 3.14);
	return 0;
}
