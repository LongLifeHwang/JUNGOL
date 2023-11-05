#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int save[11] = { 0, };
	int a;
	char c[2];

	a = 0;
	while (1)
	{
		scanf("%d", &a);
		if (a == 0)
		{
			for (int i = 0; i < 10; i++)
			{
				if (save[i] != 0)
				{
					printf("%d : %d개\n", i, save[i]);
				}
				else
				{
					continue;
				}
			}
			break;
		}
		else
		{
			save[a % 10]++;
		}
		
	}
	return 0;
}
