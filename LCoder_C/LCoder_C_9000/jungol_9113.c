#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int len;
char c[100] = "우리나라 대한민국!";

int main()
{
    len = strlen(c);
    printf("%s\n", c);
    printf("위 문자열의 길이는 %d입니다.", len);
    return 0;
}
