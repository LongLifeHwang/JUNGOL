#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	char* ptr;
	char* ptr2;

	scanf("%s", str);
	ptr = strchr(str, 'c');
	if (ptr != NULL)
		printf("Yes ");
	else
		printf("No ");
	ptr2 = strstr(str, "ab");
	if (ptr2 != NULL)
		printf("Yes ");
	else
		printf("No ");
	return 0;
}