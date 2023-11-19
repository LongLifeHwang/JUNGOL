#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;
int arr[101];
int level = 2;

void j_9106()
{
	if (level >= N)
	{
		printf("%d", arr[N - 1]);
	}
	else
	{
		arr[level] = arr[level - 1] + arr[level - 2];
		level++;
		j_9106();
	}
}

int main()
{
	scanf("%d", &N);
	arr[0] = 1;
	arr[1] = 1;
	j_9106();
	return 0;
}
