#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c1[10][2];

	for (int i = 0; i < 10; i++) {
		scanf("%s", c1[i]);
	}
	printf("%s %s %s", c1[0], c1[3], c1[6]);
	return 0;
}
