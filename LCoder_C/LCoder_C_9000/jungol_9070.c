#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n[11] = { 0 };
	int max;
	
	max = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		if (max < n[i])
		{
			max = n[i];
		}
	}
	printf("%d", max);
	return 0;
}
