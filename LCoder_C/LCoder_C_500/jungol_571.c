#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int line(void)
{
	printf("~!@#$^&*()_+|\n");
}

int main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		line();
	return 0;
}
