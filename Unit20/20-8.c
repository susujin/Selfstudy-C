#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c1;
	scanf("%c", &c1);

	printf("%s\n", c1 != 'k' ? "��" : "����");
	printf("%s\n", c1 > 'h' ? "��" : "����");
	printf("%s\n", c1 <= 'o' ? "��" : "����");

	return 0;
}