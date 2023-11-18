#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int i;
	int j;
	int z;
	
	i = 1;
	j = 1;
	z = 1;
	scanf("%d", &n);
	while (1)
	{
		printf("%d %d %d\n", i, j, z);
		if (z == 6)
		{
			z = 0;
			if (j == 6)
			{
				j = 0;
				if (i ==6)
				{
					break;
				}
				i++;
			}
			j++;
		}
		z++;
	}
	return 0;
}
