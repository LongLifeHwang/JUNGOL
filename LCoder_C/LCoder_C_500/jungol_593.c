#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

int main()
{
	while (1)
	{
		printf("ASCII code =? ");
		scanf("%d", &n);
		if (n >= 33 && n <= 127)
		{
			printf("%c\n", n);
		}
		else
		{
			break;
		}
	}
	return 0;
}
