#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "Alice in Wonderland";

	char* ptr = strchr(s1, 'n');

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		//strchr 문자열 안에서 문자 검색
		ptr = strchr(ptr + 1, 'n');
	}
	return 0;
}