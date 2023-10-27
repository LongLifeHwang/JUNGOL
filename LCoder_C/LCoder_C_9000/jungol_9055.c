#include <stdio.h>

int main(void)
{
	int a;
	int sum;
	int i;
	
	sum = 0;
	i =1;
	scanf("%d", &a);
	for (; sum <= a; i++)
	{
		sum += i;
	}
	printf("%d %d", i-1, sum);
	return 0;
}
