#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int len;
char c[100];

int main()
{
    while (1)
    {
        scanf("%s", c);
        if ((int)c[0] >= 48 && (int)c[0] <= 57)
            printf("숫자문자입니다.\n");
        else if ((int)c[0] >= 65 && (int)c[0] <= 90)
            printf("대문자입니다.\n");
        else if ((int)c[0] >= 97 && (int)c[0] <= 122)
            printf("소문자입니다.\n");
        else
        {
            printf("영문, 숫자 이외의 문자입니다.\n");
            break;
        }
    }
    return (0);
}
