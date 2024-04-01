#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int sum;
	
	sum = 0;
	scanf("%d", &n);
	for (; n <= 100; n++)
	{
		sum += n;
	}
	printf("%d", sum);
	return 0;
}
