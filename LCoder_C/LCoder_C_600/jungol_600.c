#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	int count = 0;
	int len;
	char c[100];

	scanf("%[^\n]s", c);
	len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		if (c[i] == ' ')
		{
			count++; 
		}
	}
	count++;
	if (c[0] == ' ') 
	{
		count--;
	}
	printf("%d", count);
	return 0;
}
