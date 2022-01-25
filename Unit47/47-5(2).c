#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char s1[31];
	int length;
	bool isPalindrome = true;

	scanf("%[^\n]s", s1);
	length = strlen(s1);

	for (int i = 0; i < length / 2; i++)
	{
		if (s1[i] == ' ')
			continue;
		if (s1[length - i - 1] == ' ')
			continue;

		if (s1[i] != s1[length - i - 1])
		{
			isPalindrome = false;
			break;
		}
	}
	printf("%d\n", isPalindrome);

	return 0;
}