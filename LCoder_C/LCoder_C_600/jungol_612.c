#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int	arr[5];
	char	c1[50];

	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	sprintf(c1, "%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4]);
	for (int i = 0; i < strlen(c1); i++)
	{
		printf("%c", c1[i]);
		if ((i + 1) % 3 == 0)
			printf("\n");
	}
	return 0;
}
