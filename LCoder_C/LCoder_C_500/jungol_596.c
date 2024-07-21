#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int a;
int len;
char c[100];

int main()
{
	scanf("%s", c);
	scanf("%d", &a);
	len = strlen(c);
	for (int i = len - 1; i >= len - a && i>=0; i--)
		printf("%c", c[i]);
	return 0;
}
