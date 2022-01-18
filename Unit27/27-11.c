#include <stdio.h>

int main()
{
	for (int i = 2, j = 5; i <= 32; i *= 2, j--)
	{
		printf("%d %d\n", i, j);
	}
	return 0;
}