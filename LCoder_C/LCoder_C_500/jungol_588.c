#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void j_588_1(int n)
{
	if (n>0)
	{
		printf("%d ", n);
		n --;
		j_588_1(n);
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	j_588_1(n);
	return 0;
}
