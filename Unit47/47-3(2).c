#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	long long num1;
	char text[30];

	printf("정수를 입력하세요> ");
	scanf("%lld", &num1);

	sprintf(text, "%lld", num1);

	int length;
	bool isPalindrome = true;

	length = strlen(text);

	//2번
	for (int i = 0; i < length / 2; i++)
	{
		if (text[i] != text[length - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}
	printf("%d\n", isPalindrome);

	return 0;
}