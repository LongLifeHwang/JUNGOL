#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n[101] = { 1 };
	int a;
	
	a = 100;
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &n[i]);
		if (n[i] == 0)
		{
			a = i;
			break;
		}
	}
	for (int i = a-1; i >= 0; i--)
		printf("%d ", n[i]);
	return 0;
}
