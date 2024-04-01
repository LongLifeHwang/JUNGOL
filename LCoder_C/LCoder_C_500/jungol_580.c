#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int day;
	int month;

	scanf("%d %d", &month, &day);
	switch (month)
	{
	case 1:
		if (day <= 31 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 2:
		if (day <= 29 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 3:
		if (day <= 31 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 4:
		if (day <= 30 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 5:
		if (day <= 31 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 6:
		if (day <= 30 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 7:
		if (day <= 31 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 8:
		if (day <= 31 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 9:
		if (day <= 30 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 10:
		if (day <= 31 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 11:
		if (day <= 30 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	case 12:
		if (day <= 31 && day > 0)
		{
			printf("OK!");
			break;
		}
		else
		{
			printf("BAD!");
			break;
		}
	default:
		printf("BAD!");
		break;
	}
	return 0;
}
