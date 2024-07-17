#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;
int arr[101] = {1, };
int level = 2;

void j_591()
{
    if (level > N)
        printf("%d", arr[N]);
    else
    {
        arr[level] = arr[level - 1] + arr[level / 2];
        level++;
        j_591();
    }
}

int main()
{
    scanf("%d", &N);
    arr[1] = 1;
    j_591();
    return 0;
}
