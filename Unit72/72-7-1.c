//x850.bin파일 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(push,1)
struct X820Firmware {
	short serial;
	char mode;
	char desc[20];
	int version;
};
#pragma pack(pop)

int main()
{
	struct X820Firmware x;
	memset(&x, 0, sizeof(x));

	x.serial = 32100;
	x.mode = 'a';
	strcpy(x.desc, "Hello, world!");
	x.version = 2100000100;

	FILE* fp = fopen("x850.bin", "wb");
	fwrite(&x, sizeof(x), 1, fp);
	fclose(fp);
	return 0;
}