#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;
int arr[101];

void output()
{
	int i;

	for (i = 1; i <= N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void dice(int level)
{
	int i;

	if (level > N)
	{
		output();
		return;
	}
	for (i = arr[level - 1]; i <= 6; i++)
	{
		arr[level] = i;
		dice(level + 1);
	}
}

int main()
{
	scanf("%d", &N);
	arr[0] = 1;
	dice(1);
	return 0;
}
