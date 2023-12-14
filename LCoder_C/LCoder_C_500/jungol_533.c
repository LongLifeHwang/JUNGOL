#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a;
	int b;

	scanf("%c %d", &a, &b);
	if (a == 'F')
	{
		if (b >= 18)
		{
			printf("WOMAN");
		}
		else
		{
			printf("GIRL");
		}
	}
	else
	{
		if (b >= 18)
		{
			printf("MAN");
		}
		else
		{
			printf("BOY");
		}
	}
	return 0;
}
