#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double arr1[5];

	scanf("%lf %lf %lf", &arr1[0], &arr1[1], &arr1[2]);
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			if (arr1[i] < arr1[j])
			{
				arr1[4] = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = arr1[4];
			}
		}
	}
	printf("%.0f %.0f %.0f\n", ceil(arr1[0]), floor(arr1[2]), round(arr1[1]));
	return 0;
}
