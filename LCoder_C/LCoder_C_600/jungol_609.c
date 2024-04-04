#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[20];
	char b[20];
	char c[20];
	char t[20] = { 0, };

	scanf("%s %s %s", a, b, c);
	strcpy(t, (strcmp(a, b) < 0 ? a : b));
	printf("%s", strcmp(t, c) < 0 ? t : c);
	return 0;
}
