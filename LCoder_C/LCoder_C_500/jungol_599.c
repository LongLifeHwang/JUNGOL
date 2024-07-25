#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int len;
char c[100];

int main()
{
	scanf("%s", c);
	len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		if ((int)c[i] >= 65 && (int)c[i] <= 90)
			printf("%c", c[i]);
		else if ((int)c[i] >= 97 && (int)c[i] <= 122)
		{
			c[i] -= 32;
			printf("%c", c[i]);
		}
		else
			continue;
	}
	return 0;
}
