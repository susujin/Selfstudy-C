#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	while (num >= 1200) 
	{
		num = num - 1200;
		printf("%d\n", num);
	}
	return 0;
}