#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum;
	int i;

	sum = 0;
	i = 1;
	while (i < 11)
	{
		sum += i;
		i++;
	}
	printf("1부터 10까지의 합 = %d\n", sum);
	printf("while문이 끝난 후의 num의 값 = %d", i);
	return 0;
}
