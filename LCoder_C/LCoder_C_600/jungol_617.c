#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
    char name[20];
    int height;
};

int main(void)
{
    struct Person p[5];
    int person, height = 20000;

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d", p[i].name, &p[i].height);
        if (height >= p[i].height) 
        {
            height = p[i].height;
            person = i;
        }
    }
    printf("%s %d\n", p[person].name, height);
    return 0;
}