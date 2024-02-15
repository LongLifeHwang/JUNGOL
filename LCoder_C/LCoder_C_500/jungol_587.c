#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void j_587_1(int n)
{
	printf("recursive\n");
	if (n > 1)
	{
		n--;
		j_587_1(n);
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	j_587_1(n);
	return 0;
}
