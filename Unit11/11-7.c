#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	float num2;
	char c1;

	scanf("%d %f %c", &num1, &num2, &c1);

	printf("%d\n", num1);
	printf("%f\n", num2);
	printf("%c\n", c1);

	return 0;
}