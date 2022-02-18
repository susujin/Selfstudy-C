#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	//return -strcmp((char*)a, (char*)b); //이것도 가능

	char num1 = *(char*)a;
	char num2 = *(char*)b;

	if (num1 < num2)
		return 1;
	if (num1 > num2)
		return -1;
	return 0;
}

int main()
{
	char s1[10][20];

	scanf("%s %s %s %s %s %s %s %s %s %s", s1[0], s1[1], s1[2], s1[3], s1[4], s1[5], s1[6], s1[7], s1[8], s1[9]);

	qsort(s1, sizeof(s1) / sizeof(s1[0]), sizeof(s1[0]), compare);

	for (int i = 0; i < 10; i++)
	{
		printf("%s ", s1[i]);
	}
	printf("\n");
	return 0;
}