#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[20];
	sprintf(s1, "%dth %s", 9, "symphony");
	printf("%s\n", s1);
	return 0;
}