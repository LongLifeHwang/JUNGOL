#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int height;
    float weight;
};

int main(void)
{
    struct Person p[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d %f", p[i].name, &p[i].height, &p[i].weight);
    }
    printf("name\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++) 
        {
            if (strcmp(p[i].name, p[j].name) > 0)
            {
                struct Person tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }
    printf("weight\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (p[i].weight < p[j].weight)
            {
                struct Person tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }
    return 0;
}