#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	//strchr 공백검색 ' '
	//strstr 공백검색 " "
	char s1[1001];
	scanf("%[^\n]s", s1);

	char* ptr = strchr(s1, ' ');
	int count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = strchr(ptr + 1, ' ');
	}

	printf("%d\n", count);
	return 0;
}