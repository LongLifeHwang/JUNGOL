#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[5] = { 0, }, arr2[5] = { 0, }, arr3[5] = { 0, };

	printf("1번째 학생의 점수 ");
	for (int j = 0; j < 3; j++)
	{
		scanf("%d", &arr1[j]);
		arr1[3] += arr1[j];
	}
	printf("2번째 학생의 점수 ");
	for (int j = 0; j < 3; j++)
	{
		scanf("%d", &arr2[j]);
		arr2[3] += arr2[j];
	}
	printf("3번째 학생의 점수 ");
	for (int j = 0; j < 3; j++)
	{
		scanf("%d", &arr3[j]);
		arr3[3] += arr3[j];
	}
	printf("	 국어 영어 수학 총점\n");
	printf(" 1번 ");
	for (int j = 0; j < 4; j++)
	{
		printf("%3d ", arr1[j]);
	}
	printf("\n");
	printf(" 2번 ");
	for (int j = 0; j < 4; j++)
	{
		printf("%3d ", arr2[j]);
	}
	printf("\n");
	printf(" 3번 ");
	for (int j = 0; j < 4; j++)
	{
		printf("%3d ", arr3[j]);
	}
	printf("\n");
	printf("합계 ");
	for (int j = 0; j < 4; j++)
	{
		printf("%3d ", arr1[j]+arr2[j]+ arr3[j]);
	}
	return 0;
}
