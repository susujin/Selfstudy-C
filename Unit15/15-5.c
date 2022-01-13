#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);  //43561

	printf("%d ", num % 10); //num%10=1
	num = num / 10; //num=4356

	printf("%d ", num % 10); //num%10=6
	num = num / 10; //num=435

	printf("%d ", num % 10); //num%10=5
	num = num / 10; //num=43

	printf("%d ", num % 10); //num%10=3
	num = num / 10; //num=4

	printf("%d ", num % 10); //num%10=4
	return 0;
}