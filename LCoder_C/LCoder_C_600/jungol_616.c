#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct axis
{
	int x;
	int y;
};

int main(void)
{
	struct axis s1, s2, s3;

	scanf("%d %d %d %d %d %d", &s1.x, &s1.y, &s2.x, &s2.y, &s3.x, &s3.y);
	printf("(%.1f, %.1f)\n", ((float)s1.x + s2.x + s3.x) / 3, ((float)s1.y + s2.y + s3.y) / 3);
	return 0;
}
