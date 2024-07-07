#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char b;

	scanf("%c", &b);
	if (b == 'A')
		printf("Excellent");
	else if (b == 'B')
		printf("Good");
	else if (b == 'C')
		printf("Usually");
	else if (b == 'D')
		printf("Effort");
	else if (b == 'F')
		printf("Failure");
	else
		printf("error");
	return 0;
}
