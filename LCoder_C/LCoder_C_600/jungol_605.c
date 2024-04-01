#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char name[20] = "Hong Gil Dong";
	char save[20];

	strcpy(save, name);
	printf("%s\n", save);
	return 0;
}
