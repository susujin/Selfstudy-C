#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "�ȳ��ϼ���";

	FILE* fp = fopen("hello.txt", "w");

	fwrite(s1, strlen(s1), 1, fp);

	fclose(fp);

	return 0;
}