#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int c1[10] = {0};

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &c1[i]);
	}
	printf("%d %d %d", c1[2], c1[4], c1[9]);
	return 0;
}
