#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* buffer;
	int size;

	FILE* fp = fopen("words.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	buffer = malloc(size + 1);
	memset(buffer, 0, size + 1);

	fseek(fp, 0, SEEK_SET);
	fread(buffer, size, 1, fp);

	for (int i = size - 1; i >= 0; i--)
	{
		fwrite(&buffer[i], sizeof(char), 1, stdout);
	}
	return 0;
}