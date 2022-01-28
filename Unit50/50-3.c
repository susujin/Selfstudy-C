#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p1;
	struct Point2D p2;
	double distance;

	scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

	int width = abs(p1.x - p2.x);
	int height = abs(p1.y - p2.y);
	distance = sqrt(pow(width, 2) + pow(height, 2));
	//distance = sqrt((width*width) + (height*height));

	printf("%f\n", distance);
	return 0;
}