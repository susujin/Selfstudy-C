#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char name[20];
	int grade;
	int class;
	float average;
};

int main()
{
	struct Student* s1 = malloc(sizeof(struct Student));

	strcpy(s1->name, "��浿");
	s1->grade = 1;
	s1->class = 3;
	s1->average = 65.389999f;

	printf("�̸�: %s\n", s1->name);
	printf("�г�: %d\n", s1->grade);
	printf("��: %d\n", s1->class);
	printf("�������: %f\n", s1->average);

	return 0;
}