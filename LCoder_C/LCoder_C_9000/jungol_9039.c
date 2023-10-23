#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	
	i = 65;
	while (i < 91)
	{
		printf("%c", i++);
	}
	return 0;
}
