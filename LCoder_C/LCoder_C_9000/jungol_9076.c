#include <stdio.h>

int main(void)
{
	int save[1024] = { 1, 1, };
	int a;
	char c[2];

	a = 0;
	for (int i = 2; i < 40; i++)
	{
		save[i] = save[i - 1] + save[i - 2];
	}
	for (int i = 1; i < 5; i++)
	{
		printf("피보나치 수열 %d항 : %d\n", i * 10, save[i*10 - 1]);
	}
	return 0;
}
