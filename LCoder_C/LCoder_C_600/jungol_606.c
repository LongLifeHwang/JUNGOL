#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20];

	scanf("%s", s1);
	strcat(s1, "fighting");
	printf("%s\n", s1);
	return 0;
}
