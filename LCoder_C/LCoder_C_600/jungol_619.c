#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    int* p = &a;

    scanf("%d", p);
    printf("%p %d", p, a);
    return 0;
}