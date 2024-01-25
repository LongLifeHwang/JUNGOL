#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int j_575_1(int a, int b)
{
	int answer;
	
	answer = 1;
	for (int i = 0; i < b; i++)
	{
		answer *= a;
	}
	return answer;
}

int main(void)
{
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", j_575_1(a, b));
	return 0;
}
