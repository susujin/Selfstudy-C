#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "20972";
	int num1;

	//문자열->10 정수
	num1 = atoi(s1);

	printf("%d\n", num1);

	return 0;
}