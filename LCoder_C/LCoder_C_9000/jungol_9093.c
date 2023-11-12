#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[4] = { 0, };
	int n;
	int pass;
	int sum;
	
	pass = 1;
	sum = 0;
	printf("3과목의 점수를 입력하세요. ");
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &n);
		arr1[i] = n;
		sum += arr1[i];
		if (n < 40)
		{
			pass = 0;
		}
	}
	if (pass == 1 && sum >= 180)
	{
		printf("축하합니다. 합격입니다.");
	}
	else
	{
		printf("죄송합니다. 불합격입니다.");
	}
	return 0;
}
