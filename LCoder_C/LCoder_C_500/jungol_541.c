#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	char c1;

	i = 1;
	scanf("%c", &c1);
	while (i <= 20)
	{
		printf("%c", c1);
		i++;
	}
	return 0;
}
