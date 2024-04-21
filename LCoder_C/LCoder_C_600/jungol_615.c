#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int Korean;
    int English;
};

int main(void)
{
    struct Person   p1;
    struct Person   p2;
    char    name[20];
    int Korean, English;
    float   K_avg, E_avg;

    scanf("%s %d %d", name, &Korean, &English);
    strcpy(p1.name, name);
    p1.Korean = Korean;
    p1.English = English;
    scanf("%s %d %d", name, &Korean, &English);
    strcpy(p2.name, name);
    p2.Korean = Korean;
    p2.English = English;
    K_avg = (p1.Korean + p2.Korean) / 2;
    E_avg = (p1.English + p2.English) / 2;
    printf("%s %d %d\n", p1.name, p1.Korean, p1.English);
    printf("%s %d %d\n", p2.name, p2.Korean, p2.English);
    printf("avg %.0f %.0f\n", K_avg, E_avg);
    return 0;
}