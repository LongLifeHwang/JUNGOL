#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int count[11] = {0, };
	
	while (1)
	{
		scanf("%d", &n);
		if (n > 0 && n < 11)
		{
			count[n - 1]++;
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				if (count[i] == 0)
				{
					continue;
				}
				else
				{
					printf("%d : %d개\n", i+1, count[i]);
				}
			}
			break;
		}
	}	
	return 0;
}
