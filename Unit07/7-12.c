#include <stdio.h>

int main()
{
	char num1; //1
	short num2; //2

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long)); //1+2+8 =11

	return 0;
}