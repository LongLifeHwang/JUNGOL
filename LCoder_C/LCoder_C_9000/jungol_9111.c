#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int n;
char arr[6], c[17] = "jungol olympiad";

int main()
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        arr[i] = c[n];
    }
    for (int i = 0; i < 5; i++)
        printf("%c", arr[i]);
    return 0;
}