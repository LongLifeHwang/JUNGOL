#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int sum;
	int i;
	
	i = 1;
	sum = 0;
	scanf("%d", &a);
	for (; sum < a; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	}
	printf("%d %d", i/2, sum);
	return 0;
}
