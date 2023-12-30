#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[2];
	char c1[11];

	for (int i = 0; i < 10; i++)
	{
		scanf("%s ", c);
		strcat(c1, c);
	}
	printf("%s", c1);
	return 0;
}
