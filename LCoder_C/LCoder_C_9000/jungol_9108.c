#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char n;
char arr[101];

int main()
{
	int level;
	
	level = 0;
	while (1)
	{
		scanf("%s", &n);
		arr[level] = n;
		level++;
		if (n == 48)
		{
			break;
		}
	}
	for (int i = 0; i < level; i++)
	{
		printf("%c -> %d\n", arr[i], arr[i]);
	}
	return 0;
}
