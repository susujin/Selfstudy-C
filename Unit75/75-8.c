#include <stdio.h>

#define Min(a,b) (((a)<(b))?(a):(b))
#define Max(a,b) (((a)>(b))?(a):(b))

int main()
{
	printf("%d\n", Min(10, 20));
	printf("%d\n", Max(4 & 4, 2 & 2));
	return 0;
}