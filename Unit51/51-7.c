#include <stdio.h>

struct Packet {
	char a;
	char b;
	char c;
};
int main()
{
	struct Packet pkt;
	printf("%d\n", sizeof(pkt));

	return 0;
}