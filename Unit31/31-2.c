#include <stdio.h>

//사각형으로 별 출력
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}