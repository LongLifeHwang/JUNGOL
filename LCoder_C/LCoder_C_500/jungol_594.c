#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char a[100];
char c[300];

int main()
{
	scanf("%s", a);
	strcat(c, a);
	  strcat(c, a);
	puts(c);
	return 0;
}
