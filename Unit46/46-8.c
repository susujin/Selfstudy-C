#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "0x1facefee";
	int num1;

	//���ڿ�->16 ����
	num1 = strtol(s1, NULL, 16);

	printf("0x%X\n", num1);

	return 0;
}