//77-7

#include "calc-7.h"
#include "print-7.h"

int main()
{
	CALC_DATA data;
	data.operand1 = 2;
	data.operand2 = 3;

	mul(&data);
	print(&data);

	return 0;
}