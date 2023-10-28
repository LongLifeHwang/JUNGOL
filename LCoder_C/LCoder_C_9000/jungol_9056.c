#include <stdio.h>

int main(void)
{
	int a;
	
	a = 1;
	for (int i = 1; i <= 3; i++) {
		while (a <= i) {
			printf("*");
			a++;
		}
		a = 1;
		printf("\n");
	}
	return 0;
}
