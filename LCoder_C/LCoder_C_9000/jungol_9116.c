#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    scanf("%[^\n]s", c);
    //scnaf로 공백을 포함해서 입력을 받을려면 %[^\n]s의 서식문자를 사용하면 됨 
    char* ptr = strtok(c, " ");
    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }
    return (0);
}
