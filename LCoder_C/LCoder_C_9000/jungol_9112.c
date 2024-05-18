#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char c[100];

int main()
{
    int a;

    scanf("%s", c);
    a = strlen(c);
    printf("입력받은 문자열의 길이는 %d입니다.\n", a);
    for (int i = a - 1; i >= 0; i--)
        printf("%c", c[i]);
    return 0;
}
