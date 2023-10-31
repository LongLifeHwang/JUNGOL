#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year;
	int month;

	while (1)
	{
		printf("YEAR = ");
		scanf("%d", &year);
		printf("MONTH = ");
		scanf("%d", &month);
		if (month == 0)
		{
			break;
		}
		switch (month)
		{
			case 1:
				printf("입력하신 달의 날 수는 31일입니다.\n\n");
				break;
			case 2:
				if (year % 400 == 0)
				{
					printf("입력하신 달의 날 수는 29일입니다.\n\n");
				}
				else
				{
					printf("입력하신 달의 날 수는 28일입니다.\n\n");
				}
				break;
			case 3:
				printf("입력하신 달의 날 수는 31일입니다.\n\n");
				break;
			case 4:
				printf("입력하신 달의 날 수는 30일입니다.\n\n");
				break;
			case 5:
				printf("입력하신 달의 날 수는 31일입니다.\n\n");
				break;
			case 6:
				printf("입력하신 달의 날 수는 30일입니다.\n\n");
				break;
			case 7:
				printf("입력하신 달의 날 수는 31일입니다.\n\n");
				break;
			case 8:
				printf("입력하신 달의 날 수는 31일입니다.\n\n");
				break;
			case 9:
				printf("입력하신 달의 날 수는 30일입니다.\n\n");
				break;
			case 10:
				printf("입력하신 달의 날 수는 31일입니다.\n\n");
				break;
			case 11:
				printf("입력하신 달의 날 수는 30일입니다.\n\n");
				break;

			case 12:
				printf("입력하신 달의 날 수는 31일입니다.\n\n");
				break;
			default:
				printf("잘못 입력하였습니다. \n\n");
		}
	}
	return 0;
}
