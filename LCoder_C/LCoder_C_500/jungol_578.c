#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void j_578_1(int min, int max)
{
	for (int i = min; i < max + 1; i++)
	{
		printf("== %ddan ==\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d\n", i, j, i * j);
		}
		printf("\n");
	}
}

int main(void)
{
	int a;
	int b;
	int n;
	
	a = 0;
	b = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		j_578_1(b, a);
	}
	else
	{
		j_578_1(a, b);		
	}
	return 0;
}
