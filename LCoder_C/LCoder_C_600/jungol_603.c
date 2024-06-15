#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>


int main()
{
	char str[50];
	char* ptr_ary[50] = { 0, };
	char* ptr;
	int i;
	
	i = 0;
	scanf("%[^\n]s", str);
	ptr = strtok(str, " ");
	while (ptr != NULL) {
		ptr_ary[i] = ptr;
		i++;
		ptr = strtok(NULL, " ");
	}
	for (int j = 0; j < i; j+=2)
	{
		printf("%s\n", ptr_ary[j]);
	}
	return 0;
}
