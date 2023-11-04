#include <stdio.h>

int main(void)
{
	int n[6] = { 95, 75, 85, 100, 50 };
	int temp;
	
	temp = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (n[i] > n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", n[i]);
	}
	return 0;
}
