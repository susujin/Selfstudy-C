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

	//1¹ø
	int begin = 0;
	int end = length - 1;

	while (begin < end)
	{
		if (s1[begin] == ' ')
		{
			begin++;
			continue;
		}

		if (s1[end] == ' ')
		{
			end--;
			continue;
		}

		if (s1[begin] != s1[end])
		{
			isPalindrome = false;
			break;
		}
		begin++;
		end--;
	}
	printf("%d\n", isPalindrome);

	return 0;
}