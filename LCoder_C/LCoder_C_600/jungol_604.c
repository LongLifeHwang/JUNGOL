#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char* arr[11];
	char one[2];
	char place[20];
	int len;
	int i;
	int size[10];

	i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%s", place);
		len = strlen(place) + 1;
		arr[i] = (char*)malloc(sizeof(char) * len);
		strcpy(arr[i], place);
		size[i] = len;
	}
	scanf("%s", one);
	for (i = 0; i < 10; i++)
	{
		if (arr[i][size[i] - 2] == one[0])
		{
			printf("%s\n", arr[i]);
		}
		free(arr[i]);
	}
	return 0;
}
