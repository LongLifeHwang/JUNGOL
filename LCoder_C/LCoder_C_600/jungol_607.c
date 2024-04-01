#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20];
	char s2[20];
	int len;

	scanf("%s %s", s1, s2);
	len = strlen(s2);
	for (int i = 0; i < 2; i++)
	{
		s2[i] = s1[i];
		s2[len + i] = s1[i];
	}
	s2[len + 2] = NULL;
	printf("%s", s2);
	return 0;
}