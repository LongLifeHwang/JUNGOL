#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int save[27] = { 0, };
	int a;
	char c[2];

	a = 0;
	while (a < 100)
	{
		scanf("%s", &c[0]);
		if ((int)c[0] < 65 || (int)c[0] > 90)
		{
			for (int i = 0; i < 26; i++)
			{
				if (save[i] == 0)
					continue;
				else
					printf("%c : %d\n", i + 65, save[i]);
			}
			break;
		}
		else
		{
			save[(int)c[0] - 65]++;
			a++;
		}
	}
	return 0;
}
