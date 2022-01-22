#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[40];
	char s2[10] = "th";

	scanf("%s", s1);
	strcat(s1, s2);

	printf("%s\n", s1);

	return 0;
}