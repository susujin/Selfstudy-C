#include <stdio.h>

union Data {
	char c1;
	short num1;
};

int main_s()
{
	union Data d1;
	d1.num1 = 0x5678;
	printf("0x%x 0x%x\n", d1.num1, d1.c1);
	return 0;
}