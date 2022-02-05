#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point2D {
	int x;
	int y;
};

struct Point2D* allocPoint2D(){
	struct Point2D* pos1 = malloc(sizeof(struct Point2D));
	pos1->x = 90;
	pos1->y = 75;
	return pos1;
}

int main()
{
	struct Point2D* pos1;

	pos1 = allocPoint2D();

	printf("%d %d\n", pos1->x, pos1->y);
	free(pos1);
	return 0;
}