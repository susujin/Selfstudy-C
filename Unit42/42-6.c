#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = "C Language";
	char s2[20];

	//���ڿ� ����
	strcpy(s2, s1);
	printf("%s\n", s2);
	return 0;
}