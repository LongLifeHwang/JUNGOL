#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
    int count;
    int len;
    char c[100];

    count = 0;
    scanf("%[^\n]s", c);
    len = strlen(c);
    for (int i = 1; i <= len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            count = (i + j) % len;
            printf("%c", c[count]);
        }
        printf("\n");
    }
    return 0;
}
