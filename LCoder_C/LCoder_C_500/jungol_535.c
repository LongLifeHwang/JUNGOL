#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float b;

	scanf("%f", &b);
	switch ((int)b)
	{
	case 2:
		printf("seasonal semester\n");
		break;
	case 3:
		printf("next semester\n");
		break;
	case 4:
		printf("scholarship\n");
		break;
	default:
		printf("retake\n");
	}
	return 0;
}
