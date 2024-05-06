#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    int* p = &a;

    scanf("%d", p);
    printf("%d...%d\n", a / 10, *p % 10);
    return 0;
}