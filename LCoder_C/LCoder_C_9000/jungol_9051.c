#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum;
	
	sum = 0;	
	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			sum++;
		}
	}
	printf("입력받은 짝수는 %d개입니다.", sum);
	return 0;
}
