#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	n = 0;
	do
	{
		scanf("%d", &n);
		if (n % 3 == 0)
		{
			printf("%d\n", n / 3);
		}
	} while (n != -1);
	return 0;
}
