#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1001];
	scanf("%[^\n]s", s1);

	char* tok = strtok(s1, "., ");
	int i = 0;

	while (tok != NULL)
	{
		if (tok != NULL && strcmp(tok, "the") == 0)
			i += 1;
		tok = strtok(NULL, "., ");
	}
	printf("%d\n", i);
	return 0;
}