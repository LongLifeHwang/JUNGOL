#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double n[10] = { 0, 85.6, 79.5, 83.1, 80.0,
				78.2, 75.0 };
	int i;
	int j;
	double sum;

	scanf("%d %d", &i, &j);
	sum = n[i] + n[j];
	printf("%.1lf", sum);
	return 0;
}
