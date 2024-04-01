#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int save[1024] = { 100, };
	int a;
	
	scanf("%d", &a);
	save[1] = a;
	printf("%d %d ", save[0], save[1]);
	for (int i = 2; i < 100; i++)
	{
		save[i] = save[i - 2] - save[i - 1];
		printf("%d ", save[i]);
		if (save[i] < 0)
		{
			break;
		}
	}
	return 0;
}
