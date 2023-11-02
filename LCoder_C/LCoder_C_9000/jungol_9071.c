#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n[11] = { 0 };
    int max;
    int min;
    
    max = -1000;
    min = 1000;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0)
        {
            if (max < n[i])
            {
                max = n[i];
            }
        }
        else
        {
            if (min > n[i])
            {
                min = n[i];
            }
        }
    }
    printf("%d %d", min, max);
    return 0;
}
