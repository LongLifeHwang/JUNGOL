#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int sum;
	int i;

	sum = 0;
	i = 1;
	scanf("%d", &a);
	while (i <= a)
	{
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
