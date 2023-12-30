#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int a;
	
	a = 65;
	scanf("%d", &n);
	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("%c", a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
