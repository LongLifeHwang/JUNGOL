#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array(int a)
{
	int b;

	b = 1;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			printf("%d ", b);
			b++;
		}
		printf("\n");
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	array(n);
	return 0;
}
