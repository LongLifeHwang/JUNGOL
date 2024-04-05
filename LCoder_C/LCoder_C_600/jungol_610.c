#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[5][20];
	char t[20];

	for (int i = 0; i < 5; i++)
	{
		scanf("%s", arr1[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (strcmp(arr1[i], arr1[j]) < 0)
			{
				strcpy(t, arr1[i]);
				strcpy(arr1[i], arr1[j]);
				strcpy(arr1[j], t);
			}
		}
		printf("%s\n", arr1[i]);
	}
	return 0;
}