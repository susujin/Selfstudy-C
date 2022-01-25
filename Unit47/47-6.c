#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[11];
	int num;

	scanf("%d %s", &num, s1);

	int length;
	length = strlen(s1);

	if (length < num)
		printf("wrong\n");
	else
	{
		for (int i = 0; i < length - (num - 1); i++)
		{
			for (int j = 0; j < num; j++)
			{
				printf("%c", s1[i + j]);
			}
			printf("\n");
		}
	}
	return 0;
}