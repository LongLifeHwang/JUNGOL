#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char c[14] = "Hong Gil Dong";

int main()
{
	for (int i = 3; i < 7; i++)
	{
		printf("%c", c[i]);
	}
	return 0;
}
