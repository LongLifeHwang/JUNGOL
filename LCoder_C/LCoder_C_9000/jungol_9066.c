#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char c1[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int len;
	
	len = strlen(c1);
	for (int i = len-1; i >= 0; i--)
	{
		printf("%c ", c1[i]);
	}
	return 0;
}
