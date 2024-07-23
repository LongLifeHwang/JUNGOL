#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int len;
char c[100];

int main()
{
	while (1)
	{
		scanf("%s", c);
		if ((int)c[0] >= 48 && (int)c[0] <= 57)
			printf("%d\n", c[0]);
		else if ((int)c[0] >= 65 && (int)c[0] <= 90)
			printf("%s\n", c);
		else if ((int)c[0] >= 97 && (int)c[0] <= 122)
			printf("%s\n", c);
		else
			break;
	}
	return 0;
}
