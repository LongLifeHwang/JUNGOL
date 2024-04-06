#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char	c1[20];
	int	num1;
	float	num2;

	scanf("%s", c1);
	num1 = atoi(c1);
	printf("%d\n", num1 * 2);
	num2 = atof(c1);
	printf("%.2f\n", num2);
	return 0;
}