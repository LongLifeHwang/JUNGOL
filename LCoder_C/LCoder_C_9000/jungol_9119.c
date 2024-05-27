#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>


int main()
{
    char str[50];
    char* ptr_ary[50] = { 0, };
    int i;
    char* ptr;

    scanf("%[^\n]s", str);
    ptr = strtok(str, " ");
    i = 0;
    while (ptr != NULL)
    {
        ptr_ary[i] = ptr;
        i++;
        ptr = strtok(NULL, " ");
    }
    for (int j = 0; j < i; j++)
        printf("%s\n", ptr_ary[j]);
    return 0;
}
