#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char c1[1024] = "*";
	char c2[3] = "**";

	for (int i = 4; i >= 0 ; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf(" ");
		}
		printf("%s\n", c1);
		strcat(c1, c2);
	}
	return 0;
}
