#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "97.527824";
	float num1;

	//���ڿ�->�Ǽ�
	num1 = atof(s1);

	printf("%f\n", num1);

	return 0;
}