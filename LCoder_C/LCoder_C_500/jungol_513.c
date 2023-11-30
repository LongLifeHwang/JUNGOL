#include <stdio.h>

int main(void)
{
	float yd;
	float in;

	yd = 91.44;
	in = 2.54;
	printf("%4.1fyd = %.1fcm\n",2.1, yd * 2.1);
	printf("10.5in = %5.1fcm", in * 10.5);
	return 0;
}
