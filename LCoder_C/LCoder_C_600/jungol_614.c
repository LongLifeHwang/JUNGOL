#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
	char school[20];
	int grade;
};

int main(void)
{
	struct Person	p1;
	struct Person	p2;
	char	school[20];
	int	grade;

	p1 = { "Jejuelementary", 6 };
	scanf("%s %d", school, &grade);
	strcpy(p2.school, school);
	p2.grade = grade;
	printf("%d grade in %s School\n", p1.grade, p1.school);
	printf("%d grade in %s School\n", p2.grade, p2.school);
	return 0;
}
