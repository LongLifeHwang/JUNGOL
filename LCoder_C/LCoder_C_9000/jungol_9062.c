#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	a = 97;
	b = 1;
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%-2c", a);
			a++;
		}
		for (int j = 1; j <= 5 - i; j++)
		{
			printf("%-2d", b);
			b++;
		}
		printf("\n");
	}
	return 0;
}
