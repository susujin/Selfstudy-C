#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_a()
{
	char s1[20];
	sprintf(s1, "%d %d %d %c %d", 10, 20, 30, 'c', 99);

	printf("%s\n", s1);
	return 0;
}