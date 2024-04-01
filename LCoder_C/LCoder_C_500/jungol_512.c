#include <stdio.h>

int main(void)
{
	int weight;
	float gravity;

	weight = 49;
	gravity = 0.268300;
	printf("%d * %6f = %6f", weight, gravity, weight * gravity);
	return 0;
}
