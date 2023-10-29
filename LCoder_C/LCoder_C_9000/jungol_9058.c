#include <stdio.h>
#include <string.h>

int main(void)
{
	char c1[1024] = "*";
	char c2[2] = "*";
	int a;
	int n;

	a = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		printf("%s\n", c1);
		strcat(c1, c2);
	}
	return 0;
}
