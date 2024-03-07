#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int len;
char c[100] = "우리나라 대한민국!";

int main()
{
	scanf("%s", c);
	len = strlen(c);
	scanf("%s", c);
	len += strlen(c);
	printf("%d\n", len);
	return 0;
}
