#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 2; i <= 6; i++)
	{
		printf("%d %d %d %d %d\n", i, i+1, i+2, i+3, i+4);
	}
	return 0;
}
