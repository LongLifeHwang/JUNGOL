#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	char school[20];
	int cls;
};

int main(void)
{
	char	name[20];
	char	school[20];
	int	cls;
	struct Person	p1;

	scanf("%s %s %d", name, school, &cls);
	strcpy(p1.name, name);
	strcpy(p1.school, school);
	p1.cls = cls;
	printf("Name : %s\nSchool : %s\nGrade : %d\n", p1.name, p1.school, p1.cls);
	return 0;
}
