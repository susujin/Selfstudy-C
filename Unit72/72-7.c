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
	struct X820Firmware x2;
	FILE* fp = fopen("x850.bin", "rb");
	fread(&x2, sizeof(x2), 1, fp);
	printf("%d\n%c\n%s\n%d\n", x2.serial, x2.mode, x2.desc, x2.version);
	fclose(fp);
	return 0;
}