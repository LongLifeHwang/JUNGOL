#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char *ptr_ary[5][20];
    int i;

    for(i=0; i<5; i++)
        scanf("%s", &ptr_ary[i]);
    for(i=0; i<5; i++)
        printf("%s\n", ptr_ary[i]);
    return (0);
}
