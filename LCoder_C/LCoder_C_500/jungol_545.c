#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum_3;
	int sum_5;

	sum_3 = 0;
	sum_5 = 0;
	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		if (n % 3 == 0)
		{
			sum_3++;
			if (n % 5 == 0)
				sum_5++;
		}
		else if (n % 5 == 0)
			sum_5++;
	}
	printf("Multiples of 3 : %d\n", sum_3);
	printf("Multiples of 5 : %d", sum_5);
	return 0;
}
