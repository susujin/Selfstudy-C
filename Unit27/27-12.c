#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c1;
	scanf("%c", &c1);

	for (int i = c1; i <= 'z'; i++)
		printf("%c", i);
	return 0;
}